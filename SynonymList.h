#pragma once

namespace CrosswordPuzzle
{
	using namespace System;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::IO;
	using namespace System::Text::RegularExpressions;

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
			wrgx  = gcnew Regex("[\\s\\-@\\.]");
			drgx  = gcnew Regex("\\((?:névnap|U\\+)");
		}

		/// <summary>
		/// Loads the words from the specified file.
		/// </summary>
		virtual Void LoadFile(String^ file) override
		{
			StreamReader^ sr = gcnew StreamReader(file, System::Text::Encoding::UTF8);

			words->Clear();

			while (!sr->EndOfStream)
			{
				array<String^>^ line = sr->ReadLine()->Trim('|')->Split('|');
				String^ clue = String::Empty;
				bool good = true;
				int ctx;
				if (!Int32::TryParse(line[1], ctx))
				{
					System::Windows::Forms::MessageBox::Show("Error reading line: " + String::Join("|", line));
					break;
				}

				if (wrgx->IsMatch(line[0]))
				{
					good = false;
				}

				for (int i = 0; i < ctx; i++)
				{
					array<String^>^ sline = sr->ReadLine()->Trim('|')->Split('|');

					for each (String^ sword in sline)
					{
						if (sword == line[0])
						{
							continue;
						}

						if (drgx->IsMatch(sword))
						{
							good = false;
							continue;
						}

						clue += sword + ", ";
					}

					clue = clue->TrimEnd(' ')->TrimEnd(',') + "; ";
				}
				
				if (good)
				{
					words->Add(gcnew Word(line[0], clue->TrimEnd(' ')->TrimEnd(';') + "."));
				}
			}

			sr->Close();
		}
	};
}