// CrosswordPuzzle.cpp : main project file.

#include "stdafx.h"

using namespace CrosswordPuzzle;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 
	Application::Run(gcnew MainForm());
	return 0;
}
