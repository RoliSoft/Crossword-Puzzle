#pragma once

namespace CrosswordPuzzle {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SettingsForm
	/// </summary>
	public ref class SettingsForm : public System::Windows::Forms::Form
	{
	public:
		/// <summary>
		/// Initializes a new instance of the <see cref="SettingsForm" /> class.
		/// </summary>
		SettingsForm(int width, int height, int dbidx, bool fill)
		{
			InitializeComponent();

			PuzzleWidth  = width;
			PuzzleHeight = height;
			DbSelIdx     = dbidx;
			AutoFill     = fill;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SettingsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  saveBtn;
	protected: 

	protected: 
	private: System::Windows::Forms::Panel^  panel;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownX;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownY;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  separator;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  comboBox;
	private: System::Windows::Forms::CheckBox^  checkBox;
	private: System::Windows::Forms::PictureBox^  pictureBox3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SettingsForm::typeid));
			this->saveBtn = (gcnew System::Windows::Forms::Button());
			this->panel = (gcnew System::Windows::Forms::Panel());
			this->separator = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownX = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownY = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownX))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownY))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// saveBtn
			// 
			this->saveBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->saveBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"saveBtn.Image")));
			this->saveBtn->Location = System::Drawing::Point(269, 10);
			this->saveBtn->Name = L"saveBtn";
			this->saveBtn->Size = System::Drawing::Size(75, 23);
			this->saveBtn->TabIndex = 0;
			this->saveBtn->Text = L"Save";
			this->saveBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->saveBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->saveBtn->UseVisualStyleBackColor = true;
			this->saveBtn->Click += gcnew System::EventHandler(this, &SettingsForm::saveBtn_Click);
			// 
			// panel
			// 
			this->panel->BackColor = System::Drawing::SystemColors::Control;
			this->panel->Controls->Add(this->separator);
			this->panel->Controls->Add(this->saveBtn);
			this->panel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel->Location = System::Drawing::Point(0, 96);
			this->panel->Name = L"panel";
			this->panel->Size = System::Drawing::Size(356, 45);
			this->panel->TabIndex = 1;
			// 
			// separator
			// 
			this->separator->AutoSize = true;
			this->separator->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->separator->Location = System::Drawing::Point(-3, -12);
			this->separator->Name = L"separator";
			this->separator->Size = System::Drawing::Size(362, 13);
			this->separator->TabIndex = 1;
			this->separator->Text = L"_______________________________________________________________________";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Size of the puzzle:";
			// 
			// numericUpDownX
			// 
			this->numericUpDownX->Location = System::Drawing::Point(140, 11);
			this->numericUpDownX->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {40, 0, 0, 0});
			this->numericUpDownX->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {3, 0, 0, 0});
			this->numericUpDownX->Name = L"numericUpDownX";
			this->numericUpDownX->Size = System::Drawing::Size(36, 22);
			this->numericUpDownX->TabIndex = 3;
			this->numericUpDownX->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDownX->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {3, 0, 0, 0});
			this->numericUpDownX->ValueChanged += gcnew System::EventHandler(this, &SettingsForm::numericUpDownX_ValueChanged);
			// 
			// numericUpDownY
			// 
			this->numericUpDownY->Location = System::Drawing::Point(200, 11);
			this->numericUpDownY->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {20, 0, 0, 0});
			this->numericUpDownY->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDownY->Name = L"numericUpDownY";
			this->numericUpDownY->Size = System::Drawing::Size(36, 22);
			this->numericUpDownY->TabIndex = 4;
			this->numericUpDownY->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDownY->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDownY->ValueChanged += gcnew System::EventHandler(this, &SettingsForm::numericUpDownY_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(182, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(12, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"x";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(16, 16);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 43);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(16, 16);
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Database to use:";
			// 
			// comboBox
			// 
			this->comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox->FormattingEnabled = true;
			this->comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"English / WordNet 3.0 Database", L"English / OpenOffice Thesaurus", 
				L"Hungarian / OpenOffice Thesaurus", L"Romanian / OpenOffice Thesaurus"});
			this->comboBox->Location = System::Drawing::Point(140, 40);
			this->comboBox->Name = L"comboBox";
			this->comboBox->Size = System::Drawing::Size(204, 21);
			this->comboBox->TabIndex = 9;
			this->comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &SettingsForm::comboBox_SelectedIndexChanged);
			// 
			// checkBox
			// 
			this->checkBox->AutoSize = true;
			this->checkBox->Location = System::Drawing::Point(37, 69);
			this->checkBox->Name = L"checkBox";
			this->checkBox->Size = System::Drawing::Size(301, 17);
			this->checkBox->TabIndex = 10;
			this->checkBox->Text = L"Fill in some characters when generating a new puzzle";
			this->checkBox->UseVisualStyleBackColor = true;
			this->checkBox->CheckedChanged += gcnew System::EventHandler(this, &SettingsForm::checkBox_CheckedChanged);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(12, 68);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(16, 16);
			this->pictureBox3->TabIndex = 11;
			this->pictureBox3->TabStop = false;
			// 
			// SettingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(356, 141);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->checkBox);
			this->Controls->Add(this->comboBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numericUpDownY);
			this->Controls->Add(this->numericUpDownX);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"SettingsForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Puzzle options";
			this->Load += gcnew System::EventHandler(this, &SettingsForm::SettingsForm_Load);
			this->panel->ResumeLayout(false);
			this->panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownX))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownY))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	public: int PuzzleWidth;
	public: int PuzzleHeight;
	public: int DbSelIdx;
	public: bool AutoFill;

	private: Void SettingsForm_Load(Object^  sender, EventArgs^  e) {
				 comboBox->SelectedIndex = DbSelIdx;
				 numericUpDownX->Value = PuzzleWidth;
				 numericUpDownY->Value = PuzzleHeight;
				 checkBox->Checked = AutoFill;
			 }

	private: Void comboBox_SelectedIndexChanged(Object^  sender, EventArgs^  e) {
				 DbSelIdx = comboBox->SelectedIndex;
			 }

	private: Void numericUpDownX_ValueChanged(Object^  sender, EventArgs^  e) {
				 PuzzleWidth = static_cast<int>(numericUpDownX->Value);
			 }

	private: Void numericUpDownY_ValueChanged(Object^  sender, EventArgs^  e) {
				 PuzzleHeight = static_cast<int>(numericUpDownY->Value);
			 }

	private: Void checkBox_CheckedChanged(Object^  sender, EventArgs^  e) {
				 AutoFill = checkBox->Checked;
			 }

	private: Void saveBtn_Click(Object^  sender, EventArgs^  e) {
				 this->Close();
			 }
};
}
