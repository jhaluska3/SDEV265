#pragma once

namespace Final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ WelcomeText;

	private: System::Windows::Forms::Button^ PunchIn;
	private: System::Windows::Forms::Button^ PunchOut;
	private: System::Windows::Forms::Button^ LogOut;
	private: System::Windows::Forms::Button^ ViewSchedule;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->WelcomeText = (gcnew System::Windows::Forms::Label());
			this->PunchIn = (gcnew System::Windows::Forms::Button());
			this->PunchOut = (gcnew System::Windows::Forms::Button());
			this->LogOut = (gcnew System::Windows::Forms::Button());
			this->ViewSchedule = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// WelcomeText
			// 
			this->WelcomeText->AutoSize = true;
			this->WelcomeText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WelcomeText->Location = System::Drawing::Point(580, 91);
			this->WelcomeText->Name = L"WelcomeText";
			this->WelcomeText->Size = System::Drawing::Size(231, 55);
			this->WelcomeText->TabIndex = 1;
			this->WelcomeText->Text = L"Welcome";
			// 
			// PunchIn
			// 
			this->PunchIn->BackColor = System::Drawing::Color::Lime;
			this->PunchIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PunchIn->Location = System::Drawing::Point(423, 215);
			this->PunchIn->Name = L"PunchIn";
			this->PunchIn->Size = System::Drawing::Size(221, 67);
			this->PunchIn->TabIndex = 3;
			this->PunchIn->Text = L"Punch In";
			this->PunchIn->UseVisualStyleBackColor = false;
			// 
			// PunchOut
			// 
			this->PunchOut->BackColor = System::Drawing::Color::Red;
			this->PunchOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PunchOut->Location = System::Drawing::Point(733, 215);
			this->PunchOut->Name = L"PunchOut";
			this->PunchOut->Size = System::Drawing::Size(221, 67);
			this->PunchOut->TabIndex = 4;
			this->PunchOut->Text = L"Punch Out";
			this->PunchOut->UseVisualStyleBackColor = false;
			// 
			// LogOut
			// 
			this->LogOut->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->LogOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogOut->Location = System::Drawing::Point(733, 338);
			this->LogOut->Name = L"LogOut";
			this->LogOut->Size = System::Drawing::Size(221, 67);
			this->LogOut->TabIndex = 5;
			this->LogOut->Text = L"Log Out";
			this->LogOut->UseVisualStyleBackColor = false;
			this->LogOut->Click += gcnew System::EventHandler(this, &Form2::LogOut_Click);
			// 
			// ViewSchedule
			// 
			this->ViewSchedule->BackColor = System::Drawing::Color::Yellow;
			this->ViewSchedule->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewSchedule->Location = System::Drawing::Point(423, 338);
			this->ViewSchedule->Name = L"ViewSchedule";
			this->ViewSchedule->Size = System::Drawing::Size(221, 67);
			this->ViewSchedule->TabIndex = 6;
			this->ViewSchedule->Text = L"View Schedule";
			this->ViewSchedule->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(54, 57);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(255, 296);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form2::pictureBox1_Click);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(68, 372);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 8;
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1188, 552);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->ViewSchedule);
			this->Controls->Add(this->LogOut);
			this->Controls->Add(this->PunchOut);
			this->Controls->Add(this->PunchIn);
			this->Controls->Add(this->WelcomeText);
			this->Name = L"Form2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TimeClock_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void LogOut_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
