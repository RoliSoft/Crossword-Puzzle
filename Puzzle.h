#pragma once

namespace CrosswordPuzzle
{
	using namespace System;
	using namespace System::Collections;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Represents a generated or loaded puzzle.
	/// </summary>
	public ref class Puzzle
	{
	public:
		List<UIWord^>^ Words;

		/// <summary>
		/// Initializes a new instance of the <see cref="Puzzle" /> class.
		/// </summary>
		Puzzle(void)
		{
			Words = gcnew List<UIWord^>();
		}

		/// <summary>
		/// Finalizes an instance of the <see cref="Puzzle" /> class.
		/// </summary>
		~Puzzle()
		{
			Words->Clear();
		}
	};
}