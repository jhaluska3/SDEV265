//Form2.h this is the home page for non-admin employees.

#pragma once
//header files referenced in this form
#include "Employee.h"
#include "Form5.h"
#include "Form1.h"

namespace Final {//named Final after the program name
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(Employee^ employee)//sets employee as the user logged in
		{
			InitializeComponent();
			empLabel->Text = "User " + employee->id + "!";//changes the "empLabel" label text to the user's ID
			int id = employee->id;
		}

	protected:
		//destructor
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
		//components of form
	private: System::Windows::Forms::Label^ WelcomeText;//Label "Welcome"
	private: System::Windows::Forms::Button^ PunchIn;//Button to Punch In
	private: System::Windows::Forms::Button^ PunchOut;//Button to Punch out
	private: System::Windows::Forms::Button^ LogOut;//Button to Log Out
	private: System::Windows::Forms::Button^ ViewSchedule;//Button to view schedule
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;//displays calender
	private: System::Windows::Forms::Label^ empLabel;//Label outputs "User " user id "!"
	private: System::Windows::Forms::PictureBox^ clockPic;//nice fancy clock picture

	protected:

	private:
		//more components
		System::ComponentModel::Container^ components;

		//where the magic happens
#pragma region Windows Form Designer generated code

	public:
		//initialize
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->WelcomeText = (gcnew System::Windows::Forms::Label());
			this->PunchIn = (gcnew System::Windows::Forms::Button());
			this->PunchOut = (gcnew System::Windows::Forms::Button());
			this->LogOut = (gcnew System::Windows::Forms::Button());
			this->ViewSchedule = (gcnew System::Windows::Forms::Button());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->empLabel = (gcnew System::Windows::Forms::Label());
			this->clockPic = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clockPic))->BeginInit();
			this->SuspendLayout();
			// 
			// WelcomeText
			// 
			this->WelcomeText->AutoSize = true;
			this->WelcomeText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WelcomeText->Location = System::Drawing::Point(579, 45);
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
			this->PunchIn->Click += gcnew System::EventHandler(this, &Form2::PunchIn_Click);
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
			this->PunchOut->Click += gcnew System::EventHandler(this, &Form2::PunchOut_Click);
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
			this->ViewSchedule->Click += gcnew System::EventHandler(this, &Form2::ViewSchedule_Click);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(68, 372);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 8;
			// 
			// empLabel
			// 
			this->empLabel->AutoSize = true;
			this->empLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->empLabel->Location = System::Drawing::Point(640, 114);
			this->empLabel->Name = L"empLabel";
			this->empLabel->Size = System::Drawing::Size(92, 31);
			this->empLabel->TabIndex = 9;
			this->empLabel->Text = L"label1";
			// 
			// clockPic
			// 
			this->clockPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clockPic.Image")));
			this->clockPic->Location = System::Drawing::Point(68, 67);
			this->clockPic->Name = L"clockPic";
			this->clockPic->Size = System::Drawing::Size(227, 274);
			this->clockPic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->clockPic->TabIndex = 10;
			this->clockPic->TabStop = false;
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1188, 552);
			this->Controls->Add(this->clockPic);
			this->Controls->Add(this->empLabel);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->ViewSchedule);
			this->Controls->Add(this->LogOut);
			this->Controls->Add(this->PunchOut);
			this->Controls->Add(this->PunchIn);
			this->Controls->Add(this->WelcomeText);
			this->Name = L"Form2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->clockPic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	public:
		//button to view schedule
	private: System::Void ViewSchedule_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Form5^ form5 = gcnew Form5;
		form5->Show();
	}
		   //button to "Punch In"
	private: System::Void PunchIn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show("Punched In!");//displays message punched in
	}
		   //button to "Punch Out"
	private: System::Void PunchOut_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show("Punched Out!");//displays message punched out
	}
		   //button to log out
	private: System::Void LogOut_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Employee^ employee = gcnew Employee;
		employee->online = false;
		MessageBox::Show("Logged out!");//displays message punched out
		this->Close();
	}
	};
}
