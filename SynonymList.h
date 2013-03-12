#pragma once

namespace CrosswordPuzzle
{
	using namespace System;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::IO;
	using namespace System::Text::RegularExpressions;

	ref class Word
	{
	public:
		String^ Text;
		String^ Clue;

		Word(String^ text, String^ clue)
		{
			this->Text = text;
			this->Clue = clue;
		}
	};

	ref class SynonymList
	{
	private:
		Generic::List<Word^>^ words;
		Random^ rand;
		Regex^ wrgx, ^drgx;

	public:
		SynonymList(void)
		{
			words = gcnew Generic::List<Word^>();
			rand  = gcnew Random();
			wrgx  = gcnew Regex("[\\s\\-@\\.]");
			drgx  = gcnew Regex("\\((?:névnap|U\\+)");
		}

		Void LoadFile(String^ file)
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

		Word^ GetWord()
		{
			if (words->Count == 0)
			{
				return nullptr;
			}

			return words[rand->Next(0, words->Count - 1)];
		}

		Word^ GetWord(int size)
		{
			if (words->Count == 0)
			{
				return nullptr;
			}

			Word^ w;

			for (int i = 0; i < words->Count; i++)
			{
				w = words[rand->Next(0, words->Count - 1)];

				if (w->Text->Length == size)
				{
					break;
				}
			}

			return w;
		}

		Word^ GetWord(int min, int max)
		{
			if (words->Count == 0)
			{
				return nullptr;
			}

			Word^ w;

			for (int i = 0; i < words->Count; i++)
			{
				w = words[rand->Next(0, words->Count - 1)];

				if (w->Text->Length >= min && w->Text->Length <= max)
				{
					break;
				}
			}

			return w;
		}
	};
}