#pragma once

namespace CrosswordPuzzle
{
	using namespace System;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;

	/// <summary>
	/// Represents the direction of the word in the puzzle.
	/// </summary>
	public enum Direction
	{
		Across,
		Down
	};

	/// <summary>
	/// Represents a list of possible box types in the puzzle.
	/// </summary>
	public enum BoxType
	{
		Word,
		Blank,
		Black
	};

	/// <summary>
	/// Represents the starting position and the direction of a word in the puzzle.
	/// </summary>
	public ref class Position
	{
	public:
		int X;
		int Y;
		Direction Dir;

		/// <summary>
		/// Initializes a new instance of the <see cref="Position" /> class.
		/// </summary>
		Position(int x, int y, Direction dir)
		{
			X   = x;
			Y   = y;
			Dir = dir;
		}
	};

	/// <summary>
	/// Represents a word in a generated or loaded puzzle.
	/// </summary>
	public ref class PZWord
	{
	public:
		DBWord^ Word;
		Position^ Pos;
		BoxType BType;

		/// <summary>
		/// Initializes a new instance of the <see cref="PZWord" /> class.
		/// </summary>
		PZWord(DBWord^ word, Position^ pos)
		{
			Word  = word;
			Pos   = pos;
			BType = BoxType::Word;
		}

		/// <summary>
		/// Initializes a new instance of the <see cref="PZWord" /> class.
		/// </summary>
		PZWord(DBWord^ word, int x, int y, Direction dir)
		{
			Word  = word;
			Pos   = gcnew Position(x, y, dir);
			BType = BoxType::Word;
		}

		/// <summary>
		/// Initializes a new instance of the <see cref="PZWord" /> class.
		/// </summary>
		PZWord(BoxType bType, Position^ pos)
		{
			Pos   = pos;
			BType = bType;
		}

		/// <summary>
		/// Initializes a new instance of the <see cref="PZWord" /> class.
		/// </summary>
		PZWord(BoxType bType, int x, int y)
		{
			Pos   = gcnew Position(x, y, Direction::Across);
			BType = bType;
		}
	};
}