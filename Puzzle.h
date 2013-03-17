#pragma once

namespace CrosswordPuzzle
{
	using namespace System;
	using namespace System::Collections;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Represents a generated or loaded puzzle, depending on type <code>T</code>.
	/// </summary>
	generic <typename T> where T : DBWord public ref class Puzzle
	{
	public:
		List<T>^ Words;
		int Width;
		int Height;

		/// <summary>
		/// Initializes a new instance of the <see cref="Puzzle" /> class.
		/// </summary>
		Puzzle(void)
		{
			Words = gcnew List<T>();
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