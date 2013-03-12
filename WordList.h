#pragma once

namespace CrosswordPuzzle
{
	using namespace System;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::IO;
	using namespace System::Text::RegularExpressions;

	/// <summary>
	/// Represents a word in the database.
	/// </summary>
	public ref class Word
	{
	public:
		String^ Text;
		String^ Clue;

		/// <summary>
		/// Initializes a new instance of the <see cref="Word" /> class.
		/// </summary>
		Word(String^ text, String^ clue)
		{
			Text = text;
			Clue = clue;
		}
	};

	/// <summary>
	/// Represents an abstract word list with implemented helper functions.
	/// </summary>
	public ref class WordList abstract
	{
	protected:
		Generic::List<Word^>^ words;
		Random^ rand;

	public:
		/// <summary>
		/// Initializes a new instance of the <see cref="WordList" /> class.
		/// </summary>
		WordList()
		{
			words = gcnew Generic::List<Word^>();
			rand  = gcnew Random();
		}

		/// <summary>
		/// Finalizes an instance of the <see cref="WordList" /> class.
		/// </summary>
		~WordList()
		{
			words->Clear();
		}

		/// <summary>
		/// When overridden, loads the words from the specified file.
		/// </summary>
		virtual Void LoadFile(String^ file) abstract;

		/// <summary>
		/// Gets a random word from the database.
		/// </summary>
		Word^ GetWord()
		{
			if (words->Count == 0)
			{
				return nullptr;
			}

			return words[rand->Next(0, words->Count - 1)];
		}

		/// <summary>
		/// Gets a random word of the specified size from the database.
		/// </summary>
		/// <remarks>
		/// If a word of the specified size was not found, the last inspected word will be returned.
		/// </remarks>
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

		/// <summary>
		/// Gets a random word between the specified sizes from the database.
		/// </summary>
		/// <remarks>
		/// If a word of the specified size was not found, the last inspected word will be returned.
		/// </remarks>
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