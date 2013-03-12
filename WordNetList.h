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
	/// Represents a <see cref="WordList" /> implementation which uses the WordNet 3.0 database file.
	/// </summary>
	public ref class WordNetList : WordList
	{
	private:
		Regex^ wrgx, ^drgx;

	public:
		/// <summary>
		/// Initializes a new instance of the <see cref="WordNetList" /> class.
		/// </summary>
		WordNetList(void)
		{
			wrgx  = gcnew Regex("[\\s\\-@\\.'_]");
		}

		/// <summary>
		/// Loads the words from the specified file.
		/// </summary>
		virtual Void LoadFile(String^ file) override
		{
			StreamReader^ sr = gcnew StreamReader(file, Encoding::UTF8);

			words->Clear();

			array<array<String^>^>^ sepr = gcnew array<array<String^>^>(3);
			sepr[0] = gcnew array<String^>(1);
			sepr[0][0] = " | ";
			sepr[1] = gcnew array<String^>(10);
			sepr[2] = gcnew array<String^>(1);
			sepr[2][0] = "; ";

			for (int i = 0; i < sepr[1]->Length; i++)
			{
				sepr[1][i] = " " + i.ToString("0") + " ";
			}

			while (!sr->EndOfStream)
			{
				String^ line = sr->ReadLine();

				if (line[0] != '0' && line[0] != '1')
				{
					continue;
				}

				array<String^>^ lns = line->Split(sepr[0], 2, StringSplitOptions::None);
				array<String^>^ wrds = lns[0]->Substring(17)->Split(sepr[1], StringSplitOptions::None);
				array<String^>^ defs = lns[1]->Split(sepr[2], 2, StringSplitOptions::None);

				for each (String^ wrd in wrds)
				{
					if (wrgx->IsMatch(wrd))
					{
						continue;
					}

					words->Add(gcnew Word(wrd, defs[0]));
				}
			}

			sr->Close();
		}
	};
}