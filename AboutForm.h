#pragma once

namespace CrosswordPuzzle {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AboutForm
	/// </summary>
	public ref class AboutForm : public System::Windows::Forms::Form
	{
	public:
		AboutForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AboutForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel;
	protected: 
	private: System::Windows::Forms::Label^  separator;
	private: System::Windows::Forms::Button^  closeBtn;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  copyLabel;
	private: System::Windows::Forms::LinkLabel^  linkLabel;
	private: System::Windows::Forms::Label^  label3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AboutForm::typeid));
			this->panel = (gcnew System::Windows::Forms::Panel());
			this->separator = (gcnew System::Windows::Forms::Label());
			this->closeBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->copyLabel = (gcnew System::Windows::Forms::Label());
			this->linkLabel = (gcnew System::Windows::Forms::LinkLabel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel
			// 
			this->panel->BackColor = System::Drawing::SystemColors::Control;
			this->panel->Controls->Add(this->separator);
			this->panel->Controls->Add(this->closeBtn);
			this->panel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel->Location = System::Drawing::Point(0, 96);
			this->panel->Name = L"panel";
			this->panel->Size = System::Drawing::Size(322, 45);
			this->panel->TabIndex = 2;
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
			// closeBtn
			// 
			this->closeBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->closeBtn->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"closeBtn.Image")));
			this->closeBtn->Location = System::Drawing::Point(235, 10);
			this->closeBtn->Name = L"closeBtn";
			this->closeBtn->Size = System::Drawing::Size(75, 23);
			this->closeBtn->TabIndex = 0;
			this->closeBtn->Text = L"Close";
			this->closeBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->closeBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->closeBtn->UseVisualStyleBackColor = true;
			this->closeBtn->Click += gcnew System::EventHandler(this, &AboutForm::closeBtn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(204, 32);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Crossword Puzzle";
			// 
			// copyLabel
			// 
			this->copyLabel->Location = System::Drawing::Point(141, 41);
			this->copyLabel->Name = L"copyLabel";
			this->copyLabel->Size = System::Drawing::Size(169, 13);
			this->copyLabel->TabIndex = 4;
			this->copyLabel->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// linkLabel
			// 
			this->linkLabel->Location = System::Drawing::Point(15, 41);
			this->linkLabel->Name = L"linkLabel";
			this->linkLabel->Size = System::Drawing::Size(120, 13);
			this->linkLabel->TabIndex = 5;
			this->linkLabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AboutForm::linkLabel_LinkClicked);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(15, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(264, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"This software was created for a school assignment.";
			// 
			// AboutForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(322, 141);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->linkLabel);
			this->Controls->Add(this->copyLabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AboutForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"About";
			this->Load += gcnew System::EventHandler(this, &AboutForm::AboutForm_Load);
			this->panel->ResumeLayout(false);
			this->panel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: Void AboutForm_Load(Object^  sender, EventArgs^  e) {
				 linkLabel->Text = "http://lab.";
				 copyLabel->Text = "© " + DateTime::Now.ToString("yyyy") + " ";

				 String^ c;
				 for (int i = 0; i < 8; i++)
				 {
					 #pragma warning(suppress: 4244)
					 copyLabel->Text += (c = gcnew String(101.489061632333 + 17.0813292557095 * sin(7 * sin(0.716814692820414 + i)) + 6.81543719831521 * sin(-43.30392680029 * sin(0.91257669150856 + i)), 1));
					 linkLabel->Text += c->ToLower();
				 }

				 linkLabel->Text += ".net/";
			 }

	private: Void linkLabel_LinkClicked(Object^  sender, LinkLabelLinkClickedEventArgs^  e) {
				 Diagnostics::Process::Start((static_cast<LinkLabel^>(sender)->Text));
			 }

	private: Void closeBtn_Click(Object^  sender, EventArgs^  e) {
				 this->Close();
			 }
};
}
