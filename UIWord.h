#pragma once

namespace CrosswordPuzzle
{
	using namespace System;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;

	/// <summary>
	/// Represents a word on the user interface.
	/// </summary>
	public ref class UIWord : public PZWord
	{
	public:
		Label^ Char;
		List<TextBox^>^ TextBoxes;
		UIWord^ NextWord;
		UIWord^ PrevWord;
		int Index;

		/// <summary>
		/// Initializes a new instance of the <see cref="UIWord" /> class.
		/// </summary>
		UIWord(PZWord^ word) : PZWord(word, word->BType, word->Pos)
		{
			TextBoxes = gcnew List<TextBox^>();
		}

		/// <summary>
		/// Initializes a new instance of the <see cref="UIWord" /> class.
		/// </summary>
		UIWord(PZWord^ word, int index) : PZWord(word, word->BType, word->Pos)
		{
			TextBoxes = gcnew List<TextBox^>();
			Index     = index;
		}
	};
}