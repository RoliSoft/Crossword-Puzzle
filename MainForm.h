#pragma once

namespace CrosswordPuzzle
{
	using namespace System;
	using namespace System::IO;
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
		/// <summary>
		/// Initializes a new instance of the <see cref="MainForm" /> class.
		/// </summary>
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
	private: System::Windows::Forms::ToolTip^  toolTip;
	private: XPTable::Models::Table^  clueBox;
	private: XPTable::Models::ColumnModel^  columnModel;
	private: XPTable::Models::TextColumn^  textColumn;
	private: System::Windows::Forms::ToolStripMenuItem^  puzzleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  puzzleOptionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^  randomHelpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  resetToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel;
	private: System::Windows::Forms::StatusStrip^  statusStrip;
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
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newPuzzleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->loadPuzzleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->savePuzzleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->puzzleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->puzzleOptionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->randomHelpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resetToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->introLabel = (gcnew System::Windows::Forms::Label());
			this->gamePanel = (gcnew System::Windows::Forms::Panel());
			this->toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->clueBox = (gcnew XPTable::Models::Table());
			this->columnModel = (gcnew XPTable::Models::ColumnModel());
			this->textColumn = (gcnew XPTable::Models::TextColumn());
			this->toolStripStatusLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->statusStrip = (gcnew System::Windows::Forms::StatusStrip());
			this->menuStrip->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->clueBox))->BeginInit();
			this->statusStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip
			// 
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->fileToolStripMenuItem, 
				this->puzzleToolStripMenuItem, this->helpToolStripMenuItem});
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
			this->loadPuzzleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::loadPuzzleToolStripMenuItem_Click);
			// 
			// savePuzzleToolStripMenuItem
			// 
			this->savePuzzleToolStripMenuItem->Enabled = false;
			this->savePuzzleToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"savePuzzleToolStripMenuItem.Image")));
			this->savePuzzleToolStripMenuItem->Name = L"savePuzzleToolStripMenuItem";
			this->savePuzzleToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->savePuzzleToolStripMenuItem->Text = L"Save puzzle";
			this->savePuzzleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::savePuzzleToolStripMenuItem_Click);
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
			// puzzleToolStripMenuItem
			// 
			this->puzzleToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->puzzleOptionsToolStripMenuItem, 
				this->toolStripSeparator3, this->randomHelpToolStripMenuItem, this->resetToolStripMenuItem});
			this->puzzleToolStripMenuItem->Name = L"puzzleToolStripMenuItem";
			this->puzzleToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->puzzleToolStripMenuItem->Text = L"Puzzle";
			// 
			// puzzleOptionsToolStripMenuItem
			// 
			this->puzzleOptionsToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"puzzleOptionsToolStripMenuItem.Image")));
			this->puzzleOptionsToolStripMenuItem->Name = L"puzzleOptionsToolStripMenuItem";
			this->puzzleOptionsToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->puzzleOptionsToolStripMenuItem->Text = L"Options";
			this->puzzleOptionsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::puzzleOptionsToolStripMenuItem_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(113, 6);
			// 
			// randomHelpToolStripMenuItem
			// 
			this->randomHelpToolStripMenuItem->Enabled = false;
			this->randomHelpToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"randomHelpToolStripMenuItem.Image")));
			this->randomHelpToolStripMenuItem->Name = L"randomHelpToolStripMenuItem";
			this->randomHelpToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->randomHelpToolStripMenuItem->Text = L"Help";
			this->randomHelpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::randomHelpToolStripMenuItem_Click);
			// 
			// resetToolStripMenuItem
			// 
			this->resetToolStripMenuItem->Enabled = false;
			this->resetToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"resetToolStripMenuItem.Image")));
			this->resetToolStripMenuItem->Name = L"resetToolStripMenuItem";
			this->resetToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->resetToolStripMenuItem->Text = L"Reset";
			this->resetToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::resetToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->aboutToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"aboutToolStripMenuItem.Image")));
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::aboutToolStripMenuItem_Click);
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
			this->gamePanel->Size = System::Drawing::Size(111, 125);
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
			// toolStripStatusLabel
			// 
			this->toolStripStatusLabel->Name = L"toolStripStatusLabel";
			this->toolStripStatusLabel->Size = System::Drawing::Size(0, 17);
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
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(441, 196);
			this->Controls->Add(this->introLabel);
			this->Controls->Add(this->clueBox);
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
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->clueBox))->EndInit();
			this->statusStrip->ResumeLayout(false);
			this->statusStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: WordList^ _words;
			 Puzzle^ _puzzle;
			 array<TextBox^, 2>^ _tbs;
			 int _puzzleWidth;
			 int _puzzleHeight;
			 int _dbSelIdx;
			 int _unresolved;
			 bool _initFill;
			 bool _noGF;

	private: Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 Control::CheckForIllegalCrossThreadCalls = false;
				 this->Visible = true;

				 _puzzleWidth  = 26;
				 _puzzleHeight = 15;
				 _dbSelIdx     = 2;

				 ThreadStart^ tst = gcnew ThreadStart(this, &MainForm::InitialLoadDictionary);
				 Thread^ thd = gcnew Thread(tst);
				 thd->Start();
			 }

	private: Void InitialLoadDictionary() {
				 toolStripStatusLabel->Text = "Loading dictionary...";
				 this->Refresh();

				 try
				 {
					 switch (_dbSelIdx)
					 {
					 case 0:
						 _words = gcnew WordNetList();
						 _words->LoadFile("wordnet_3.0.all.dat");
						 break;

					 case 1:
						 _words = gcnew SynonymList();
						 _words->LoadFile("th_en_US_v2.dat");
						 break;

					 case 2:
						 _words = gcnew SynonymList();
						 _words->LoadFile("th_hu_HU_v2.dat");
						 break;

					 case 3:
						 _words = gcnew SynonymList();
						 _words->LoadFile("th_ro_RO_v2.dat");
						 break;
					 }
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

	private: Puzzle^ GeneratePuzzle(int len, int cnt) {
				 Puzzle^ pz   = gcnew Puzzle();
				 Random^ rand = gcnew Random();
				 UIWord^ cwrd = nullptr;
				 
				 pz->Width  = len;
				 pz->Height = cnt;

				 for (int i = 0, j = 1, x = 0, y = 0; i < cnt; i++, x = 0, y++)
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

					 if (pz->Words[pz->Words->Count - 1]->BType == BoxType::Black)
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
				 tb->Text         = fill ? word->Text[widx].ToString() : String::Empty;
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
					 if (word->TextBoxes[i]->TextLength == 0 || word->TextBoxes[i]->Text->ToLower()[0] != word->Text->ToLower()[i])
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
							 _unresolved++;
						 }

						 toolStripStatusLabel->Text = _unresolved.ToString() + " unknown words left.";
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
				 _unresolved--;

				 if (_unresolved == 0)
				 {
					 toolStripStatusLabel->Text = "You completed the whole crossword correctly!";
				 }
				 else
				 {
					 toolStripStatusLabel->Text = _unresolved.ToString() + " unknown words left.";
				 }
			}

	private: Void randomHelpToolStripMenuItem_Click(Object^  sender, EventArgs^  e) {
				 Random^ rand = gcnew Random();

				 for each (UIWord^ word in _puzzle->Words)
				 {
					 for (int i = 0; i < word->TextBoxes->Count; i++)
					 {
						 if ((word->TextBoxes[i]->TextLength == 0 || word->TextBoxes[i]->Text->ToLower()[0] != word->Text->ToLower()[i]) && rand->Next(0, 5) == 3)
						 {
							 _noGF = true;
							 word->TextBoxes[i]->Text = gcnew String(word->Text[i], 1);
						 }
					 }
				 }
			 }

	private: Void resetToolStripMenuItem_Click(Object^  sender, EventArgs^  e) {
				 if (MessageBox::Show("Are you sure you want to delete all the answers?", "Puzzle reset confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation, MessageBoxDefaultButton::Button2) != Windows::Forms::DialogResult::Yes)
				 {
					 return;
				 }

				 for each (UIWord^ word in _puzzle->Words)
				 {
					 for (int i = 0; i < word->TextBoxes->Count; i++)
					 {
						 _noGF = true;
						 word->TextBoxes[i]->Text = String::Empty;
					 }
				 }
			 }

	private: Void newPuzzleToolStripMenuItem_Click(Object^  sender, EventArgs^  e) {
				 gamePanel->Visible = false;
				 clueBox->Visible = false;
				 introLabel->Text = "Generating new puzzle...";
				 toolStripStatusLabel->Text = "Generating puzzle...";
				 introLabel->Visible = true;
				 newPuzzleToolStripMenuItem->Enabled = false;
				 resetToolStripMenuItem->Enabled = false;
				 randomHelpToolStripMenuItem->Enabled = false;
				 savePuzzleToolStripMenuItem->Enabled = false;
				 loadPuzzleToolStripMenuItem->Enabled = false;
				 this->Refresh();
				 gamePanel->SuspendLayout();
				 gamePanel->Controls->Clear();
				 clueBox->BeginUpdate();

				 Random^ rand = gcnew Random();
				 TableModel^ model = gcnew TableModel();
				 _puzzle = GeneratePuzzle(_puzzleWidth, _puzzleHeight);
				 _tbs = gcnew array<TextBox^, 2>(_puzzle->Width, _puzzle->Height);

				 toolStripStatusLabel->Text = "Rendering puzzle...";
				 statusStrip->Refresh();

				 _unresolved = 0;
				 int x, y, xm = 0, ym = 0, i = 0;

				 for each (UIWord^ word in _puzzle->Words)
				 {
					 x = word->Pos->X;
					 y = word->Pos->Y;

					 switch (word->BType)
					 {
					 default:
				   //case BoxType::Blank:
						 break;

					 case BoxType::Black:
					 case BoxType::Blank:
						 CreateBlackBox(x, y);
						 break;

					 case BoxType::Word:
						 String^ idx = word->Index < 10 ? word->Index.ToString() : gcnew String(word->Index < 36 ? 55 + word->Index : 61 + word->Index, 1);
						 word->Char = CreateLabel(idx, x, y);

						 Row^ row = gcnew Row();
						 Cell^ cell = gcnew Cell(idx + ") " + word->Clue);
						 cell->WordWrap = true;
						 cell->Tag = word;
						 row->Cells->Add(cell);
						 model->Rows->Add(row);

						 for (int i = 0; i < word->Text->Length; i++)
						 {
							 _tbs[x, y] = CreateWordBox(word, i, x, y, _initFill && rand->Next(0, 5) == 3);
							 word->TextBoxes->Add(_tbs[x, y]);

							 switch (word->Pos->Dir)
							 {
								 case Direction::Across: x++; break;
								 case Direction::Down:   y++; break;
							 }
						 }

						 _unresolved++;
						 word->Char->BringToFront();
						 break;
					 }

					 i++;

					 if (i % 10 == 0)
					 {
						 toolStripStatusLabel->Text = "Rendering puzzle... (" + ((double)i / (double)_puzzle->Words->Count * 100.0).ToString("0.00") + "%)";
						 statusStrip->Refresh();
					 }

					 xm = x > xm ? x : xm;
					 ym = y > ym ? y : ym;
				 }

				 toolStripStatusLabel->Text = "Rendering hints list...";
				 statusStrip->Refresh();

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
				 toolStripStatusLabel->Text = _unresolved.ToString() + " unknown words left.";
				 newPuzzleToolStripMenuItem->Enabled = true;
				 resetToolStripMenuItem->Enabled = true;
				 randomHelpToolStripMenuItem->Enabled = true;
				 savePuzzleToolStripMenuItem->Enabled = true;
				 loadPuzzleToolStripMenuItem->Enabled = true;
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

				 int x = word->Pos->X + word->TextBoxes->IndexOf(tb);
				 int y = word->Pos->Y;

				 switch (e->KeyData)
				 {
				 default:
					 return;

				 case Keys::Up:
					 {
						 for (int i = y - 1; i != y; i--)
						 {
							 if (i == -1)
							 {
								 i = _puzzle->Height - 1;
							 }

							 if (_tbs[x, i] != nullptr)
							 {
								 _tbs[x, i]->Focus();
								 break;
							 }
						 }
					 }
					break;

				case Keys::Down:
					{
						for (int i = y + 1; i != y; i++)
						{
							if (i == _puzzle->Height)
							{
								i = 0;
							}

							if (_tbs[x, i] != nullptr)
							{
								_tbs[x, i]->Focus();
								break;
							}
						}
					}
					break;

				case Keys::Left:
					{
						for (int i = x - 1; i != x; i--)
						{
							if (i == -1)
							{
								i = _puzzle->Width - 1;
							}

							if (_tbs[i, y] != nullptr)
							{
								_tbs[i, y]->Focus();
								break;
							}
						}
					}
					break;

				case Keys::Right:
					{
						for (int i = x + 1; i != x; i++)
						{
							if (i == _puzzle->Width)
							{
								i = 0;
							}

							if (_tbs[i, y] != nullptr)
							{
								_tbs[i, y]->Focus();
								break;
							}
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
				 UIWord^ word = static_cast<UIWord^>(tb->Tag);

				 CheckWord(word);

				 if (String::IsNullOrWhiteSpace(tb->Text))
				 {
					 return;
				 }

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
				 if (_noGF)
				 {
					 _noGF = false;
					 return;
				 }

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

	private: Void puzzleOptionsToolStripMenuItem_Click(Object^  sender, EventArgs^  e) {
				 SettingsForm^ sf = gcnew SettingsForm(_puzzleWidth, _puzzleHeight, _dbSelIdx, _initFill);
				 sf->ShowDialog(this);

				 _puzzleWidth  = sf->PuzzleWidth;
				 _puzzleHeight = sf->PuzzleHeight;
				 _initFill     = sf->AutoFill;

				 if (_dbSelIdx != sf->DbSelIdx)
				 {
					 _dbSelIdx = sf->DbSelIdx;
					 newPuzzleToolStripMenuItem->Enabled = false;

					 ThreadStart^ tst = gcnew ThreadStart(this, &MainForm::InitialLoadDictionary);
					 Thread^ thd = gcnew Thread(tst);
					 thd->Start();
				 }
			 }

	private: Void aboutToolStripMenuItem_Click(Object^  sender, EventArgs^  e) {
				 (gcnew AboutForm())->ShowDialog(this);
			 }

	private: Void savePuzzleToolStripMenuItem_Click(Object^  sender, EventArgs^  e) {
				 SaveFileDialog^ sfd  = gcnew SaveFileDialog();
				 
				 sfd->Title           = "Save current puzzle";
				 sfd->CheckPathExists = true;
				 sfd->CheckFileExists = false;
				 sfd->DefaultExt      = ".pzl";
				 sfd->OverwritePrompt = true;
				 sfd->ValidateNames   = true;
				 sfd->Filter          = "Puzzle Saves (*.pzl)|*.pzl|All Files (*.*)|*.*";

				 if (sfd->ShowDialog(this) != Windows::Forms::DialogResult::OK)
				 {
					 return;
				 }

				 FileStream^ fs   = File::OpenWrite(sfd->FileName);
				 BinaryWriter^ bw = gcnew BinaryWriter(fs, Encoding::UTF8);

				 bw->Write(_puzzle->Words->Count);

				 for each (UIWord^ word in _puzzle->Words)
				 {
					 bw->Write(word->Index);
					 bw->Write(word->BType);
					 bw->Write(word->Pos->X);
					 bw->Write(word->Pos->Y);

					 if (word->BType == BoxType::Word)
					 {
						 bw->Write(word->Pos->Dir);
						 bw->Write(word->Text);
						 bw->Write(word->Clue);
						 bw->Write(word->TextBoxes->Count);

						 for each (TextBox^ tb in word->TextBoxes)
						 {
							 bw->Write(tb->Text);
						 }
					 }
				 }

				 bw->Close();
			 }

	private: Void loadPuzzleToolStripMenuItem_Click(Object^  sender, EventArgs^  e) {
			 }
};
}

