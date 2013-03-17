#pragma once

namespace CrosswordPuzzle
{
	using namespace System;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Text::RegularExpressions;

	/// <summary>
	/// Represents a word in the database.
	/// </summary>
	public ref class DBWord
	{
	public:
		String^ Text;
		String^ Clue;

		/// <summary>
		/// Initializes a new instance of the <see cref="DBWord" /> class.
		/// </summary>
		DBWord(String^ text)
		{
			Text = text;
			Clue = String::Empty;
		}

		/// <summary>
		/// Initializes a new instance of the <see cref="DBWord" /> class.
		/// </summary>
		DBWord(String^ text, String^ clue)
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
		List<DBWord^>^ words;
		Random^ rand;
		Regex^ wrgx;

	public:
		/// <summary>
		/// Initializes a new instance of the <see cref="WordList" /> class.
		/// </summary>
		WordList()
		{
			words = gcnew List<DBWord^>();
			rand  = gcnew Random();
			wrgx  = gcnew Regex("^\\p{L}+$");
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
		/// <returns>
		/// A word or <code>nullptr</code>.
		/// </returns>
		DBWord^ GetWord()
		{
			if (words->Count == 0)
			{
				return nullptr;
			}

			return words[rand->Next(0, words->Count - 1)];
		}

		/// <summary>
		/// Gets a random word that matches the specified regular expression from the database.
		/// </summary>
		/// <returns>
		/// A word that met the specified criteria or <code>nullptr</code>.
		/// </returns>
		DBWord^ GetWord(Regex^ rgx)
		{
			if (words == nullptr || words->Count == 0)
			{
				return nullptr;
			}

			HashSet<int>^ hs = gcnew HashSet<int>();

			for (int i = 0, j; i < words->Count; i++)
			{
				do
				{
					j = rand->Next(words->Count);
				}
				while (hs->Contains(j));

				if (rgx->IsMatch(words[j]->Text))
				{
					return words[j];
				}

				hs->Add(j);
			}

			return nullptr;
		}

		/// <summary>
		/// Gets a random word of the specified size from the database.
		/// </summary>
		/// <returns>
		/// A word that met the specified criteria or <code>nullptr</code>.
		/// </returns>
		DBWord^ GetWord(int size)
		{
			if (words == nullptr || words->Count == 0)
			{
				return nullptr;
			}

			HashSet<int>^ hs = gcnew HashSet<int>();

			for (int i = 0, j; i < words->Count; i++)
			{
				do
				{
					j = rand->Next(words->Count);
				}
				while (hs->Contains(j));

				if (words[j]->Text->Length == size)
				{
					return words[j];
				}

				hs->Add(j);
			}

			return nullptr;
		}

		/// <summary>
		/// Gets a random word between the specified sizes from the database.
		/// </summary>
		/// <returns>
		/// A word that met the specified criteria or <code>nullptr</code>.
		/// </returns>
		DBWord^ GetWord(int min, int max)
		{
			if (words == nullptr || words->Count == 0)
			{
				return nullptr;
			}

			HashSet<int>^ hs = gcnew HashSet<int>();

			for (int i = 0, j; i < words->Count; i++)
			{
				do
				{
					j = rand->Next(words->Count);
				}
				while (hs->Contains(j));

				if (words[j]->Text->Length >= min && words[j]->Text->Length <= max)
				{
					return words[j];
				}

				hs->Add(j);
			}

			return nullptr;
		}
	};
}