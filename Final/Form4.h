//Form4.h Rules form

#pragma once

namespace Final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		//constructor
		Form4(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		//destructor
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Disclaimer;//Label for disclaimer message
	private: System::Windows::Forms::Label^ Rules;//Label to hold rules
	private: System::Windows::Forms::PictureBox^ pictureBox1;//Fancy warning sign image

	private:

		System::ComponentModel::Container^ components;
		//Where the magic happens
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form4::typeid));
			this->Disclaimer = (gcnew System::Windows::Forms::Label());
			this->Rules = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Disclaimer
			// 
			this->Disclaimer->AutoSize = true;
			this->Disclaimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Disclaimer->Location = System::Drawing::Point(91, 47);
			this->Disclaimer->Name = L"Disclaimer";
			this->Disclaimer->Size = System::Drawing::Size(254, 42);
			this->Disclaimer->TabIndex = 0;
			this->Disclaimer->Text = L"DISCLAIMER";
			this->Disclaimer->Click += gcnew System::EventHandler(this, &Form4::Disclaimer_Click);
			// 
			// Rules
			// 
			this->Rules->AutoSize = true;
			this->Rules->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Rules->Location = System::Drawing::Point(12, 292);
			this->Rules->Name = L"Rules";
			this->Rules->Size = System::Drawing::Size(418, 259);
			this->Rules->TabIndex = 1;
			this->Rules->Text = L"IT IS AGAINST THE LAW \r\nTO PUNCH IN OR OUT \r\nFOR ANYBODY ELSE. \r\nANYONE CAUGHT \r\n"
				L"STEALING TIME WILL \r\nBE FIRED IMMEDIATELY!\r\n\r\n";
			this->Rules->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Rules->Click += gcnew System::EventHandler(this, &Form4::Rules_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(120, 110);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(197, 167);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Red;
			this->ClientSize = System::Drawing::Size(429, 634);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Rules);
			this->Controls->Add(this->Disclaimer);
			this->Name = L"Form4";
			this->Text = L"Form4";
			this->Load += gcnew System::EventHandler(this, &Form4::Form4_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//not much to this file
	private: System::Void Rules_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Disclaimer_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Form4_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
