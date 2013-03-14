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
	using namespace XPTable::Models;

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
	private: System::Windows::Forms::ToolTip^  toolTip;
	private: XPTable::Models::Table^  clueBox;
	private: XPTable::Models::ColumnModel^  columnModel;
	private: XPTable::Models::TextColumn^  textColumn;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			XPTable::Models::DataSourceColumnBinder^  dataSourceColumnBinder1 = (gcnew XPTable::Models::DataSourceColumnBinder());
			XPTable::Renderers::DragDropRenderer^  dragDropRenderer1 = (gcnew XPTable::Renderers::DragDropRenderer());
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
			this->toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->clueBox = (gcnew XPTable::Models::Table());
			this->columnModel = (gcnew XPTable::Models::ColumnModel());
			this->textColumn = (gcnew XPTable::Models::TextColumn());
			this->statusStrip->SuspendLayout();
			this->menuStrip->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->clueBox))->BeginInit();
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
			this->newPuzzleToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->newPuzzleToolStripMenuItem->Text = L"New puzzle";
			this->newPuzzleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::newPuzzleToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(133, 6);
			// 
			// loadPuzzleToolStripMenuItem
			// 
			this->loadPuzzleToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"loadPuzzleToolStripMenuItem.Image")));
			this->loadPuzzleToolStripMenuItem->Name = L"loadPuzzleToolStripMenuItem";
			this->loadPuzzleToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->loadPuzzleToolStripMenuItem->Text = L"Load puzzle";
			// 
			// savePuzzleToolStripMenuItem
			// 
			this->savePuzzleToolStripMenuItem->Enabled = false;
			this->savePuzzleToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"savePuzzleToolStripMenuItem.Image")));
			this->savePuzzleToolStripMenuItem->Name = L"savePuzzleToolStripMenuItem";
			this->savePuzzleToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->savePuzzleToolStripMenuItem->Text = L"Save puzzle";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(133, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"exitToolStripMenuItem.Image")));
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(136, 22);
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
			// clueBox
			// 
			this->clueBox->AlternatingRowColor = System::Drawing::Color::WhiteSmoke;
			this->clueBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->clueBox->AutoCalculateRowHeights = true;
			this->clueBox->BorderColor = System::Drawing::Color::Black;
			this->clueBox->ColumnModel = this->columnModel;
			this->clueBox->DataMember = nullptr;
			this->clueBox->DataSourceColumnBinder = dataSourceColumnBinder1;
			dragDropRenderer1->ForeColor = System::Drawing::Color::Red;
			this->clueBox->DragDropRenderer = dragDropRenderer1;
			this->clueBox->EnableHeaderContextMenu = false;
			this->clueBox->EnableWordWrap = true;
			this->clueBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->clueBox->GridLinesContrainedToData = false;
			this->clueBox->HeaderFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->clueBox->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::None;
			this->clueBox->Location = System::Drawing::Point(129, 36);
			this->clueBox->Name = L"clueBox";
			this->clueBox->NoItemsText = L"";
			this->clueBox->ShowSelectionRectangle = false;
			this->clueBox->Size = System::Drawing::Size(300, 125);
			this->clueBox->TabIndex = 4;
			this->clueBox->UnfocusedBorderColor = System::Drawing::Color::Black;
			this->clueBox->UnfocusedSelectionBackColor = System::Drawing::SystemColors::ActiveCaption;
			this->clueBox->Visible = false;
			this->clueBox->SelectionChanged += gcnew XPTable::Events::SelectionEventHandler(this, &MainForm::clueBox_SelectionChanged);
			// 
			// columnModel
			// 
			this->columnModel->Columns->AddRange(gcnew cli::array< XPTable::Models::Column^  >(1) {this->textColumn});
			// 
			// textColumn
			// 
			this->textColumn->Editable = false;
			this->textColumn->ImageOnRight = true;
			this->textColumn->IsTextTrimmed = false;
			this->textColumn->Text = L"Clue";
			this->textColumn->Width = 275;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(441, 196);
			this->Controls->Add(this->clueBox);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->clueBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: WordList^ _words;
			 Puzzle^ _puzzle;

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

				 _words = gcnew SynonymList();

				 try
				 {
					 _words->LoadFile("th_hu_HU_v2.dat");
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

	private: Puzzle^ GeneratePuzzle(int len) {
				 Puzzle^ pz   = gcnew Puzzle();
				 Random^ rand = gcnew Random();
				 UIWord^ cwrd = nullptr;
				 
				 for (int i = 0, j = 1, x = 0, y = 0; i < 10; i++, x = 0, y++)
				 {
					 int maxlen = len;

					 if (rand->Next(0, 2) == 1)
					 {
						 for (int i = 0, s = rand->Next(0, 4); i < s; i++, maxlen--, x++)
						 {
							 pz->Words->Add(gcnew UIWord(gcnew PZWord(BoxType::Blank, x, y)));
						 }
					 }

					 do
					 {
						 DBWord^ word = _words->GetWord(2, maxlen);

						 UIWord^ uwrd = gcnew UIWord(gcnew PZWord(word, x, y, Direction::Across), j++);
						 uwrd->PrevWord = cwrd;
						 pz->Words->Add(uwrd);

						 if (cwrd != nullptr)
						 {
							 cwrd->NextWord = uwrd;
						 }

						 cwrd = uwrd;

						 maxlen -= word->Text->Length + 1;
						 x += word->Text->Length + 1;

						 pz->Words->Add(gcnew UIWord(gcnew PZWord(BoxType::Black, x - 1, y)));

						 if (maxlen < 3)
						 {
							 pz->Words->RemoveAt(pz->Words->Count - 1);
							 x--;

							 for (; maxlen > -1; maxlen--, x++)
							 {
								 pz->Words->Add(gcnew UIWord(gcnew PZWord(BoxType::Blank, x, y)));
							 }
						 }
					 }
					 while (maxlen > 0);

					 if (pz->Words[pz->Words->Count - 1]->Word->BType == BoxType::Black)
					 {
						 pz->Words->RemoveAt(pz->Words->Count - 1);
					 }
				 }

				 return pz;
			 }

	private: TextBox^ CreateWordBox(UIWord^ word, int widx, int x, int y, bool fill) {
				 TextBox^ tb = gcnew TextBox();

				 tb->MaxLength    = 1;
				 tb->BorderStyle  = BorderStyle::FixedSingle;
				 tb->Font         = gcnew Drawing::Font(L"Segoe UI Semibold", 12, FontStyle::Bold, GraphicsUnit::Point, static_cast<Byte>(0));
				 tb->Location     = Drawing::Point(x * 33, y * 28);
				 tb->Size         = Drawing::Size(34, 29);
				 tb->TextAlign    = HorizontalAlignment::Center;
				 tb->Text         = fill ? word->Word->Word->Text[widx].ToString() : String::Empty;
				 tb->Tag          = word;
				 tb->MouseEnter  += gcnew EventHandler(this, &MainForm::puzzleTextBox_MouseEnter);
				 tb->GotFocus    += gcnew EventHandler(this, &MainForm::puzzleTextBox_GotFocus);
				 tb->MouseUp     += gcnew MouseEventHandler(this, &MainForm::puzzleTextBox_MouseUp);
				 tb->KeyDown     += gcnew KeyEventHandler(this, &MainForm::puzzleTextBox_KeyDown);
				 tb->KeyPress    += gcnew KeyPressEventHandler(this, &MainForm::puzzleTextBox_KeyPress);
				 tb->TextChanged += gcnew EventHandler(this, &MainForm::puzzleTextBox_TextChanged);
				 tb->MouseLeave  += gcnew EventHandler(this, &MainForm::puzzleTextBox_MouseLeave);
				 tb->LostFocus   += gcnew EventHandler(this, &MainForm::puzzleTextBox_LostFocus);

				 gamePanel->Controls->Add(tb);

				 return tb;
			 }

	private: TextBox^ CreateBlackBox(int x, int y) {
				 TextBox^ tb = gcnew TextBox();

				 tb->Enabled     = false;
				 tb->Font        = gcnew Drawing::Font(L"Segoe UI Semibold", 12, FontStyle::Bold, GraphicsUnit::Point, static_cast<Byte>(0));
				 tb->BackColor   = SystemColors::ControlDarkDark;
				 tb->BorderStyle = BorderStyle::FixedSingle;
				 tb->Location    = Drawing::Point(x * 33, y * 28);
				 tb->Size        = Drawing::Size(34, 29);

				 gamePanel->Controls->Add(tb);

				 return tb;
			 }

	private: Label^ CreateLabel(String^ chr, int x, int y) {
				Label^ lbl = gcnew Label();

				lbl->Text      = chr;
				lbl->BackColor = SystemColors::Window;
				lbl->Font      = gcnew Drawing::Font(L"Microsoft Sans Serif", 6.75F, FontStyle::Regular, GraphicsUnit::Point, static_cast<Byte>(0));
				lbl->Location  = Drawing::Point(x * 33 + 1, y * 28 + 1);
				lbl->Size      = Drawing::Size(7, 9);
				lbl->TextAlign = ContentAlignment::BottomCenter;
				lbl->UseCompatibleTextRendering = true;

				gamePanel->Controls->Add(lbl);

				return lbl;
			}

	private: Void CheckWord(UIWord^ word) {
				 for (int i = 0; i < word->TextBoxes->Count; i++)
				 {
					 if (word->TextBoxes[i]->TextLength == 0 || word->TextBoxes[i]->Text->ToLower()[0] != word->Word->Word->Text->ToLower()[i])
					 {
						 if (word->Char->BackColor == Drawing::Color::Honeydew)
						 {
							 gamePanel->SuspendLayout();
							 word->Char->BackColor = SystemColors::Window;
							 for each (TextBox^ tc in word->TextBoxes)
							 {
								 tc->BackColor = SystemColors::Window;
							 }
							 gamePanel->ResumeLayout();

							 clueBox->TableModel->Rows[word->Index - 1]->Cells[0]->BackColor = word->Index % 2 == 0 ? clueBox->BackColor : clueBox->AlternatingRowColor;
						 }

						 return;
					 }
				 }

				 gamePanel->SuspendLayout();
				 word->Char->BackColor = Drawing::Color::Honeydew;
				 for each (TextBox^ tc in word->TextBoxes)
				 {
					 tc->BackColor = Drawing::Color::Honeydew;
				 }
				 gamePanel->ResumeLayout();

				 clueBox->TableModel->Rows[word->Index - 1]->Cells[0]->BackColor = Drawing::Color::Honeydew;
			}

	private: Void newPuzzleToolStripMenuItem_Click(Object^  sender, EventArgs^  e) {
				 gamePanel->Visible = false;
				 clueBox->Visible = false;
				 introLabel->Text = "Generating new puzzle...";
				 toolStripStatusLabel->Text = "Generating puzzle...";
				 introLabel->Visible = true;
				 this->Refresh();
				 gamePanel->SuspendLayout();
				 gamePanel->Controls->Clear();
				 clueBox->BeginUpdate();

				 Random^ rand = gcnew Random();
				 TableModel^ model = gcnew TableModel();
				 _puzzle = GeneratePuzzle(22);

				 int x, y, xm = 0, ym = 0;

				 for each (UIWord^ word in _puzzle->Words)
				 {
					 x = word->Word->Pos->X;
					 y = word->Word->Pos->Y;

					 switch (word->Word->BType)
					 {
					 default:
				   //case BoxType::Blank:
						 break;

					 case BoxType::Black:
					 case BoxType::Blank:
						 CreateBlackBox(x, y);
						 break;

					 case BoxType::Word:
						 String^ idx = word->Index < 10 ? word->Index.ToString() : gcnew String(55 + word->Index, 1);
						 word->Char = CreateLabel(idx, x, y);

						 Row^ row = gcnew Row();
						 Cell^ cell = gcnew Cell(idx + ") " + word->Word->Word->Clue);
						 cell->WordWrap = true;
						 cell->Tag = word;
						 row->Cells->Add(cell);
						 model->Rows->Add(row);

						 for (int i = 0; i < word->Word->Word->Text->Length; i++)
						 {
							 word->TextBoxes->Add(CreateWordBox(word, i, x, y, rand->Next(0, 5) == 3));

							 switch (word->Word->Pos->Dir)
							 {
								 case Direction::Across: x++; break;
								 case Direction::Down:   y++; break;
							 }
						 }
						 
						 word->Char->BringToFront();
						 break;
					 }

					 xm = x > xm ? x : xm;
					 ym = y > ym ? y : ym;
				 }

				 clueBox->TableModel = model;
				 clueBox->EndUpdate();

				 this->Height = 110 + (28 * (ym + 1));
				 this->Width  = 41 + (33 * xm) + 312;
				 this->CenterToScreen();

				 this->Refresh();
				 gamePanel->ResumeLayout();

				 clueBox->Visible = true;
				 gamePanel->Visible = true;
				 introLabel->Visible = false;
				 toolStripStatusLabel->Text = "Ready.";
			 }

	private: Void exitToolStripMenuItem_Click(Object^  sender, EventArgs^  e) {
				 Application::ExitThread();
			 }

	private: Void puzzleTextBox_KeyDown(Object^  sender, KeyEventArgs^  e) {
				 if (toolTip->Active)
				 {
					 toolTip->Hide(this);
				 }

				 TextBox^ tb  = static_cast<TextBox^>(sender);
				 UIWord^ word = static_cast<UIWord^>(tb->Tag);

				 switch (e->KeyData)
				 {
				 default:
					 return;

				 case Keys::Up:
					 {
						 int x = word->Word->Pos->X + word->TextBoxes->IndexOf(tb);
						 int y = word->Word->Pos->Y;
						 UIWord^ cwrd = word;

						 if (y == 0)
						 {
							 while (cwrd->NextWord != nullptr)
							 {
								 cwrd = cwrd->NextWord;
							 }

							 y = cwrd->Word->Pos->Y + 1;
						 }

						 while (cwrd->Word->Pos->Y == y && cwrd->PrevWord != nullptr)
						 {
							 cwrd = cwrd->PrevWord;
						 }

						 while (cwrd->PrevWord != nullptr && (cwrd->PrevWord->Word->Pos->X + cwrd->PrevWord->TextBoxes->Count) >= x && cwrd->PrevWord->Word->Pos->Y == (y - 1))
						 {
							 cwrd = cwrd->PrevWord;
						 }

						 int idx = x - cwrd->Word->Pos->X;
						 if (idx >= 0 && idx < cwrd->TextBoxes->Count)
						 {
							 cwrd->TextBoxes[idx]->Focus();
						 }
						 else if (idx >= 0)
						 {
							 cwrd->TextBoxes[cwrd->TextBoxes->Count - 1]->Focus();
						 }
					 }
					break;

				case Keys::Down:
					{
						int x = word->Word->Pos->X + word->TextBoxes->IndexOf(tb);
						int y = word->Word->Pos->Y;
						UIWord^ cwrd = word;

						while (cwrd->Word->Pos->Y == y && cwrd->NextWord != nullptr)
						{
							cwrd = cwrd->NextWord;
						}

						if (cwrd->NextWord == nullptr && cwrd->Word->Pos->Y == y)
						{
							while (cwrd->PrevWord != nullptr)
							{
								cwrd = cwrd->PrevWord;
							}

							y = 0;
						}

						while ((cwrd->Word->Pos->X + cwrd->TextBoxes->Count) < x && cwrd->NextWord != nullptr)
						{
							cwrd = cwrd->NextWord;
						}

						int idx = x - cwrd->Word->Pos->X;
						if (idx >= 0 && idx < cwrd->TextBoxes->Count)
						{
							cwrd->TextBoxes[idx]->Focus();
						}
						else if (idx >= 0 && cwrd->NextWord != nullptr)
						{
							cwrd->NextWord->TextBoxes[0]->Focus();
						}
					}
					break;

				case Keys::Left:
					{
						int idx = word->TextBoxes->IndexOf(tb);
						if (idx > 0)
						{
							word->TextBoxes[idx - 1]->Focus();
						}
						else if (word->PrevWord != nullptr)
						{
							word->PrevWord->TextBoxes[word->PrevWord->TextBoxes->Count - 1]->Focus();
						}
						else if (word->NextWord != nullptr)
						{
							UIWord^ cwrd = word;

							while (cwrd->NextWord != nullptr)
							{
								cwrd = cwrd->NextWord;
							}

							cwrd->TextBoxes[cwrd->TextBoxes->Count - 1]->Focus();
						}
					}
					break;

				case Keys::Right:
					{
						int idx = word->TextBoxes->IndexOf(tb);
						if (idx != word->TextBoxes->Count - 1)
						{
							word->TextBoxes[idx + 1]->Focus();
						}
						else if (word->NextWord != nullptr)
						{
							word->NextWord->TextBoxes[0]->Focus();
						}
						else if (word->PrevWord != nullptr)
						{
							UIWord^ cwrd = word;

							while (cwrd->PrevWord != nullptr)
							{
								cwrd = cwrd->PrevWord;
							}

							cwrd->TextBoxes[0]->Focus();
						}
					}
					break;
				 }

				 e->Handled = true;
				 e->SuppressKeyPress = true;
			 }

	private: Void puzzleTextBox_KeyPress(Object^  sender, KeyPressEventArgs^  e) {
				 if (!Char::IsLetter(e->KeyChar) && e->KeyChar != 8)
				 {
					 e->Handled = true;

					 TextBox^ tb = static_cast<TextBox^>(sender);

					 toolTip->ToolTipIcon = ToolTipIcon::Error;
					 toolTip->ToolTipTitle = "Invalid character";
					 toolTip->Show("Only letters are allowed.", tb);
				 }
			 }

	private: Void puzzleTextBox_TextChanged(Object^  sender, EventArgs^  e) {
				 TextBox^ tb  = static_cast<TextBox^>(sender);

				 if (String::IsNullOrWhiteSpace(tb->Text))
				 {
					 return;
				 }

				 UIWord^ word = static_cast<UIWord^>(tb->Tag);

				 CheckWord(word);

				 int idx = word->TextBoxes->IndexOf(tb);
				 if (idx != word->TextBoxes->Count - 1)
				 {
					 word->TextBoxes[idx + 1]->Focus();
				 }
				 else if (word->NextWord != nullptr)
				 {
					 word->NextWord->TextBoxes[0]->Focus();
				 }
				 else if (word->PrevWord != nullptr)
				 {
					 UIWord^ cwrd = word;
					 
					 while (cwrd->PrevWord != nullptr)
					 {
						 cwrd = cwrd->PrevWord;
					 }

					 cwrd->TextBoxes[0]->Focus();
				 }
			 }

	private: Void puzzleTextBox_GotFocus(Object^  sender, EventArgs^  e) {
				 TextBox^ tb  = static_cast<TextBox^>(sender);
				 UIWord^ word = static_cast<UIWord^>(tb->Tag);

				 tb->SelectAll();

				 if (!clueBox->TableModel->Selections->IsCellSelected(word->Index - 1, 0))
				 {
					 clueBox->TableModel->Selections->Clear();
					 clueBox->TableModel->Selections->AddCell(word->Index - 1, 0);
					 clueBox->EnsureVisible(clueBox->TableModel->Rows->Count - 1, 0);
					 clueBox->EnsureVisible(word->Index - 1, 0);
				 }

				 if (word->Char->BackColor == Drawing::Color::Honeydew)
				 {
					 return;
				 }

				 gamePanel->SuspendLayout();
				 word->Char->BackColor = SystemColors::ControlLight;
				 for each (TextBox^ tc in word->TextBoxes)
				 {
					 tc->BackColor = SystemColors::ControlLight;
				 }
				 gamePanel->ResumeLayout();
			 }

	private: Void puzzleTextBox_LostFocus(Object^  sender, EventArgs^  e) {
				 TextBox^ tb  = static_cast<TextBox^>(sender);
				 UIWord^ word = static_cast<UIWord^>(tb->Tag);

				 tb->SelectionLength = 0;

				 if (word->Char->BackColor == Drawing::Color::Honeydew)
				 {
					 return;
				 }

				 gamePanel->SuspendLayout();
				 word->Char->BackColor = SystemColors::Window;
				 for each (TextBox^ tc in word->TextBoxes)
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
				 TextBox^ tb  = static_cast<TextBox^>(sender);
				 UIWord^ word = static_cast<UIWord^>(tb->Tag);

				 if (tb->BackColor == SystemColors::ControlLight || word->Char->BackColor == Drawing::Color::Honeydew)
				 {
					 return;
				 }

				 gamePanel->SuspendLayout();
				 word->Char->BackColor = SystemColors::Control;
				 for each (TextBox^ tc in word->TextBoxes)
				 {
					 tc->BackColor = SystemColors::Control;
				 }
				 gamePanel->ResumeLayout();
			 }

	private: Void puzzleTextBox_MouseLeave(Object^ sender, EventArgs^ e) {
				 TextBox^ tb  = static_cast<TextBox^>(sender);
				 UIWord^ word = static_cast<UIWord^>(tb->Tag);

				 if (tb->BackColor == SystemColors::ControlLight || tb->BackColor == SystemColors::Window || word->Char->BackColor == Drawing::Color::Honeydew)
				 {
					 return;
				 }

				 gamePanel->SuspendLayout();
				 word->Char->BackColor = SystemColors::Window;
				 for each (TextBox^ tc in word->TextBoxes)
				 {
					 tc->BackColor = SystemColors::Window;
				 }
				 gamePanel->ResumeLayout();
			 }

	private: Void clueBox_SelectionChanged(Object^ sender, XPTable::Events::SelectionEventArgs^ e) {
				 try
				 {
					 UIWord^ word = static_cast<UIWord^>(clueBox->TableModel->Rows[e->NewSelectedIndicies[0]]->Cells[0]->Tag);

					 bool focused = false;
					 for each (TextBox^ tc in word->TextBoxes)
					 {
						 if (tc->ContainsFocus)
						 {
							 focused = true;
						 }
					 }

					 if (!focused)
					 {
						 word->TextBoxes[0]->Focus();
					 }
				 }
				 catch (Exception^) { }
			 }
};
}

