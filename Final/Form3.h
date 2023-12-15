#pragma once

namespace Final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
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
		~Form3()
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
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::Button^ CreateEmployee;
	private: System::Windows::Forms::Button^ button1;

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->WelcomeText = (gcnew System::Windows::Forms::Label());
			this->PunchIn = (gcnew System::Windows::Forms::Button());
			this->PunchOut = (gcnew System::Windows::Forms::Button());
			this->LogOut = (gcnew System::Windows::Forms::Button());
			this->ViewSchedule = (gcnew System::Windows::Forms::Button());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->CreateEmployee = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// WelcomeText
			// 
			this->WelcomeText->AutoSize = true;
			this->WelcomeText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WelcomeText->Location = System::Drawing::Point(500, 93);
			this->WelcomeText->Name = L"WelcomeText";
			this->WelcomeText->Size = System::Drawing::Size(386, 55);
			this->WelcomeText->TabIndex = 1;
			this->WelcomeText->Text = L"Welcome Admin";
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
			this->LogOut->Location = System::Drawing::Point(733, 320);
			this->LogOut->Name = L"LogOut";
			this->LogOut->Size = System::Drawing::Size(221, 67);
			this->LogOut->TabIndex = 5;
			this->LogOut->Text = L"Log Out";
			this->LogOut->UseVisualStyleBackColor = false;
			this->LogOut->Click += gcnew System::EventHandler(this, &Form3::LogOut_Click);
			// 
			// ViewSchedule
			// 
			this->ViewSchedule->BackColor = System::Drawing::Color::Yellow;
			this->ViewSchedule->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewSchedule->Location = System::Drawing::Point(423, 320);
			this->ViewSchedule->Name = L"ViewSchedule";
			this->ViewSchedule->Size = System::Drawing::Size(221, 67);
			this->ViewSchedule->TabIndex = 6;
			this->ViewSchedule->Text = L"View Schedule";
			this->ViewSchedule->UseVisualStyleBackColor = false;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->CalendarDimensions = System::Drawing::Size(1, 2);
			this->monthCalendar1->Location = System::Drawing::Point(66, 146);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 7;
			// 
			// CreateEmployee
			// 
			this->CreateEmployee->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->CreateEmployee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CreateEmployee->Location = System::Drawing::Point(423, 435);
			this->CreateEmployee->Name = L"CreateEmployee";
			this->CreateEmployee->Size = System::Drawing::Size(221, 67);
			this->CreateEmployee->TabIndex = 8;
			this->CreateEmployee->Text = L"Create Employee";
			this->CreateEmployee->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(733, 435);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(221, 67);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Remove Employee";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1188, 552);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->CreateEmployee);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->ViewSchedule);
			this->Controls->Add(this->LogOut);
			this->Controls->Add(this->PunchOut);
			this->Controls->Add(this->PunchIn);
			this->Controls->Add(this->WelcomeText);
			this->Name = L"Form3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form3";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TimeClock_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void LogOut_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
