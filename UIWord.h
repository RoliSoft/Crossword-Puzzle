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
	public ref class UIWord
	{
	public:
		DBWord^ Word;
		Label^ IdxLabel;
		List<TextBox^>^ TextBoxes;

		/// <summary>
		/// Initializes a new instance of the <see cref="UIWord" /> class.
		/// </summary>
		UIWord(DBWord^ word)
		{
			Word = word;
			TextBoxes = gcnew List<TextBox^>();
		}
	};
}