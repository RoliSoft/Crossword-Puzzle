#pragma once

namespace CrosswordPuzzle
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::StatusStrip^  statusStrip;
	protected: 
	private: System::Windows::Forms::MenuStrip^  menuStrip;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newPuzzleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::Label^  introLabel;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  loadPuzzleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  savePuzzleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::Panel^  gamePanel;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->statusStrip = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newPuzzleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->loadPuzzleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->savePuzzleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->introLabel = (gcnew System::Windows::Forms::Label());
			this->gamePanel = (gcnew System::Windows::Forms::Panel());
			this->statusStrip->SuspendLayout();
			this->menuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// statusStrip
			// 
			this->statusStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel});
			this->statusStrip->Location = System::Drawing::Point(0, 174);
			this->statusStrip->Name = L"statusStrip";
			this->statusStrip->Size = System::Drawing::Size(441, 22);
			this->statusStrip->TabIndex = 0;
			this->statusStrip->Text = L"statusStrip";
			// 
			// toolStripStatusLabel
			// 
			this->toolStripStatusLabel->Name = L"toolStripStatusLabel";
			this->toolStripStatusLabel->Size = System::Drawing::Size(0, 17);
			// 
			// menuStrip
			// 
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->fileToolStripMenuItem});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(441, 24);
			this->menuStrip->TabIndex = 1;
			this->menuStrip->Text = L"menuStrip";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {this->newPuzzleToolStripMenuItem, 
				this->toolStripSeparator2, this->loadPuzzleToolStripMenuItem, this->savePuzzleToolStripMenuItem, this->toolStripSeparator1, this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newPuzzleToolStripMenuItem
			// 
			this->newPuzzleToolStripMenuItem->Enabled = false;
			this->newPuzzleToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"newPuzzleToolStripMenuItem.Image")));
			this->newPuzzleToolStripMenuItem->Name = L"newPuzzleToolStripMenuItem";
			this->newPuzzleToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->newPuzzleToolStripMenuItem->Text = L"New puzzle";
			this->newPuzzleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::newPuzzleToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(149, 6);
			// 
			// loadPuzzleToolStripMenuItem
			// 
			this->loadPuzzleToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"loadPuzzleToolStripMenuItem.Image")));
			this->loadPuzzleToolStripMenuItem->Name = L"loadPuzzleToolStripMenuItem";
			this->loadPuzzleToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->loadPuzzleToolStripMenuItem->Text = L"Load puzzle";
			// 
			// savePuzzleToolStripMenuItem
			// 
			this->savePuzzleToolStripMenuItem->Enabled = false;
			this->savePuzzleToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"savePuzzleToolStripMenuItem.Image")));
			this->savePuzzleToolStripMenuItem->Name = L"savePuzzleToolStripMenuItem";
			this->savePuzzleToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->savePuzzleToolStripMenuItem->Text = L"Save puzzle";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(149, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"exitToolStripMenuItem.Image")));
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::exitToolStripMenuItem_Click);
			// 
			// introLabel
			// 
			this->introLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->introLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->introLabel->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->introLabel->Location = System::Drawing::Point(0, 24);
			this->introLabel->Name = L"introLabel";
			this->introLabel->Size = System::Drawing::Size(441, 150);
			this->introLabel->TabIndex = 2;
			this->introLabel->Text = L"To generate a new puzzle, click File -> New puzzle.";
			this->introLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// gamePanel
			// 
			this->gamePanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->gamePanel->AutoScroll = true;
			this->gamePanel->Location = System::Drawing::Point(12, 36);
			this->gamePanel->Name = L"gamePanel";
			this->gamePanel->Size = System::Drawing::Size(417, 125);
			this->gamePanel->TabIndex = 3;
			this->gamePanel->Visible = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(441, 196);
			this->Controls->Add(this->introLabel);
			this->Controls->Add(this->statusStrip);
			this->Controls->Add(this->menuStrip);
			this->Controls->Add(this->gamePanel);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->MainMenuStrip = this->menuStrip;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Crossword Puzzle";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->statusStrip->ResumeLayout(false);
			this->statusStrip->PerformLayout();
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: WordList^ _words;

	private: Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 Control::CheckForIllegalCrossThreadCalls = false;
				 this->Visible = true;

				 ThreadStart^ tst = gcnew ThreadStart(this, &MainForm::InitialLoadDictionary);
				 Thread^ thd = gcnew Thread(tst);
				 thd->Start();
			 }

	private: Void InitialLoadDictionary() {
				 toolStripStatusLabel->Text = "Loading dictionary...";
				 this->Refresh();

				 _words = gcnew WordNetList();

				 try
				 {
					 _words->LoadFile("wordnet_3.0.all.dat");
				 }
				 catch (Exception^ ex)
				 {
					 toolStripStatusLabel->Text = "Exception occurred.";
					 MessageBox::Show(ex->Message + Environment::NewLine + ex->StackTrace, "Dictionary loading exception");
					 return;
				 }

				 newPuzzleToolStripMenuItem->Enabled = true;
				 toolStripStatusLabel->Text = "Ready.";
			 }

	private: Void newPuzzleToolStripMenuItem_Click(Object^  sender, EventArgs^  e) {
				 introLabel->Visible = false;
				 gamePanel->Visible = true;

				 String^ a = String::Empty;
				 Random^ rand = gcnew Random();

				 for (int i = 0; i < 10; i++)
				 {
					 int ws = 22;

					 if (rand->Next(0, 2) == 1)
					 {
						 for (int i = 0, s = rand->Next(1, 5); i < s; i++)
						 {
							 ws--;
							 a += "\0";
						 }
					 }

					 do
					 {
						 String^ w = _words->GetWord(2, ws)->Text;
						 ws -= w->Length - 1;
						 a += w + "\1";

						 if (ws <= 2)
						 {
							 ws = 0;
						 }
					 }
					 while (ws > 0);

					 a = a->TrimEnd('\1') + "\n";
				 }

				 Generic::List<TextBox^>^ tba = gcnew Generic::List<TextBox^>();

				 gamePanel->Visible = false;
				 introLabel->Text = "Generating new puzzle...";
				 toolStripStatusLabel->Text = "Generating puzzle...";
				 introLabel->Visible = true;
				 this->Refresh();
				 gamePanel->SuspendLayout();
				 gamePanel->Controls->Clear();

				 int x = 0, y = 0, xm = 0;
				 for (int i = 0; i < a->Length; i++)
				 {
					 xm = Math::Max(x, xm);

					 if ((a[i] == '\0' || a[i] == '\1' || a[i] == '\n') && tba->Count != 0)
					 {
						 tba = gcnew Generic::List<TextBox^>();
					 }

					 if (a[i] == '\0')
					 {
						 x++;
						 continue;
					 }

					 if (a[i] == '\n')
					 {
						 x = 0;
						 y++;
						 continue;
					 }

					 TextBox^ tb = gcnew TextBox();

					 tb->MaxLength    = 1;
					 tb->BorderStyle  = BorderStyle::FixedSingle;
					 tb->Font         = gcnew Drawing::Font(L"Segoe UI Semibold", 12, FontStyle::Bold, GraphicsUnit::Point, static_cast<Byte>(0));
					 tb->Location     = Drawing::Point(x++ * 33, y * 28);
					 tb->Size         = Drawing::Size(34, 29);
					 tb->TextAlign    = HorizontalAlignment::Center;

					 if (a[i] == '\1')
					 {
						 tb->Enabled   = false;
						 tb->BackColor = SystemColors::ControlDarkDark;
					 }
					 else
					 {
						 if (tba->Count == 0)
						 {
							 Label^ lbl = gcnew Label();

							 lbl->BackColor = tb->BackColor;
							 lbl->Font      = gcnew Drawing::Font(L"Microsoft Sans Serif", 6.75F, FontStyle::Regular, GraphicsUnit::Point, static_cast<Byte>(0));
							 lbl->Location  = Drawing::Point((x - 1) * 33 + 1, y * 28 + 1);
							 lbl->Size      = Drawing::Size(7, 9);
							 lbl->TextAlign = ContentAlignment::BottomCenter;
							 lbl->UseCompatibleTextRendering = true;
							 lbl->Text      = gcnew String(65+(i%26), 1);

							 gamePanel->Controls->Add(lbl);
						 }

						 tba->Add(tb);

						 tb->Text         = a[i].ToString();
						 tb->Tag          = tba;
						 tb->GotFocus    += gcnew EventHandler(this, &MainForm::puzzleTextBox_GotFocus);
						 tb->LostFocus   += gcnew EventHandler(this, &MainForm::puzzleTextBox_LostFocus);
						 tb->MouseUp     += gcnew MouseEventHandler(this, &MainForm::puzzleTextBox_MouseUp);
						 tb->TextChanged += gcnew EventHandler(this, &MainForm::puzzleTextBox_TextChanged);
						 tb->MouseEnter  += gcnew EventHandler(this, &MainForm::puzzleTextBox_MouseEnter);
						 tb->MouseLeave  += gcnew EventHandler(this, &MainForm::puzzleTextBox_MouseLeave);
					 }

					 gamePanel->Controls->Add(tb);
				 }

				 this->Height = 110 + (28 * (y));
				 this->Width  = 41 + (33 * (xm));
				 this->CenterToScreen();

				 this->Refresh();
				 gamePanel->ResumeLayout();

				 gamePanel->Visible = true;
				 introLabel->Visible = false;
				 toolStripStatusLabel->Text = "Ready.";
			 }

	private: Void exitToolStripMenuItem_Click(Object^  sender, EventArgs^  e) {
				 Application::ExitThread();
			 }

	private: Void puzzleTextBox_TextChanged(Object^  sender, EventArgs^  e) {
				 TextBox^ tb = static_cast<TextBox^>(sender);
				 Generic::List<TextBox^>^ tba = static_cast<Generic::List<TextBox^>^>(tb->Tag);

				 int idx = tba->IndexOf(tb);
				 if (idx != tba->Count - 1)
				 {
					 tba[idx + 1]->Focus();
				 }
			 }

	private: Void puzzleTextBox_GotFocus(Object^  sender, EventArgs^  e) {
				 TextBox^ tb = static_cast<TextBox^>(sender);
				 tb->SelectAll();

				 gamePanel->SuspendLayout();
				 Generic::List<TextBox^>^ tba = static_cast<Generic::List<TextBox^>^>(tb->Tag);
				 for each (TextBox^ tc in tba)
				 {
					 tc->BackColor = SystemColors::ControlLight;
				 }
				 gamePanel->ResumeLayout();
			 }

	private: Void puzzleTextBox_LostFocus(Object^  sender, EventArgs^  e) {
				 TextBox^ tb = static_cast<TextBox^>(sender);
				 tb->SelectionLength = 0;

				 gamePanel->SuspendLayout();
				 Generic::List<TextBox^>^ tba = static_cast<Generic::List<TextBox^>^>(tb->Tag);
				 for each (TextBox^ tc in tba)
				 {
					 tc->BackColor = SystemColors::Window;
				 }
				 gamePanel->ResumeLayout();
			 }

	private: Void puzzleTextBox_MouseUp(Object^  sender, MouseEventArgs^  e) {
				 TextBox^ tb = static_cast<TextBox^>(sender);

				 if (tb->SelectionLength == 0)
				 {
					tb->SelectAll();
				 }
			 }

	private: Void puzzleTextBox_MouseEnter(Object^  sender, EventArgs^  e) {
				 TextBox^ tb = static_cast<TextBox^>(sender);

				 if (tb->BackColor == SystemColors::ControlLight)
				 {
					 return;
				 }

				 Generic::List<TextBox^>^ tba = static_cast<Generic::List<TextBox^>^>(tb->Tag);

				 gamePanel->SuspendLayout();
				 for each (TextBox^ tc in tba)
				 {
					 tc->BackColor = SystemColors::Control;
				 }
				 gamePanel->ResumeLayout();
			 }

	private: Void puzzleTextBox_MouseLeave(Object^  sender, EventArgs^  e) {
				 TextBox^ tb = static_cast<TextBox^>(sender);

				 if (tb->BackColor == SystemColors::ControlLight || tb->BackColor == SystemColors::Window)
				 {
					 return;
				 }

				 Generic::List<TextBox^>^ tba = static_cast<Generic::List<TextBox^>^>(tb->Tag);

				 gamePanel->SuspendLayout();
				 for each (TextBox^ tc in tba)
				 {
					 tc->BackColor = SystemColors::Window;
				 }
				 gamePanel->ResumeLayout();
			 }
};
}

