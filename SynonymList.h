#pragma once

namespace CrosswordPuzzle
{
	using namespace System;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::Text::RegularExpressions;
	using namespace System::Globalization;

	/// <summary>
	/// Represents a <see cref="WordList" /> implementation which uses the OpenOffice thesaurus file.
	/// </summary>
	public ref class SynonymList : WordList
	{
	private:
		Regex^ wrgx, ^drgx;

	public:
		/// <summary>
		/// Initializes a new instance of the <see cref="SynonymList" /> class.
		/// </summary>
		SynonymList(void)
		{
			wrgx  = gcnew Regex("[\\s\\-@\\.'_]");
			drgx  = gcnew Regex("\\((?:névnap|U\\+)");
		}

		/// <summary>
		/// Loads the words from the specified file.
		/// </summary>
		virtual Void LoadFile(String^ file) override
		{
			StreamReader^ sr = gcnew StreamReader(file, Encoding::UTF8);

			words->Clear();

			Word^ word;
			int ctx;
			bool good;

			while (!sr->EndOfStream)
			{
				String^ line = sr->ReadLine();
				array<String^>^ lns = line->Trim('|')->Split('|');

				if (line[0] != '|' && Int32::TryParse(lns[lns->Length - 1], NumberStyles::Integer, CultureInfo::InvariantCulture, ctx))
				{
					if (word != nullptr && good)
					{
						word->Clue = word->Clue->TrimEnd(' ')->TrimEnd(';') + ".";
						words->Add(word);
					}

					word = gcnew Word(lns[0], String::Empty);
					good = !wrgx->IsMatch(word->Text);
					continue;
				}

				if (word == nullptr)
				{
					continue;
				}

				for each (String^ wrd in lns)
				{
					if (wrd == word->Text)
					{
						continue;
					}

					if (drgx->IsMatch(wrd))
					{
						good = false;
						continue;
					}

					word->Clue += wrd + ", ";
				}

				word->Clue = word->Clue->TrimEnd(' ')->TrimEnd(',') + "; ";
			}

			sr->Close();
		}
	};
}