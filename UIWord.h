#pragma once

namespace CrosswordPuzzle
{
	using namespace System;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;

	/// <summary>
	/// Represents a word on the user interface defined by type <code>T</code>.
	/// </summary>
	template <typename T> public ref class UIWord : public PZWord
	{
	public:
		Label^ Char;
		List<T>^ Items;
		UIWord<T>^ NextWord;
		UIWord<T>^ PrevWord;
		int Index;

		/// <summary>
		/// Initializes a new instance of the <see cref="UIWord" /> class.
		/// </summary>
		UIWord(PZWord^ word) : PZWord(word, word->BType, word->Pos)
		{
			Items = gcnew List<T>();
		}

		/// <summary>
		/// Initializes a new instance of the <see cref="UIWord" /> class.
		/// </summary>
		UIWord(PZWord^ word, int index) : PZWord(word, word->BType, word->Pos)
		{
			Items = gcnew List<T>();
			Index = index;
		}
	};
}