//Form3.h home page for users with admin access

#pragma once
//headers referenced in this program
#include "Form5.h"
#include "Form6.h"
#include "Form7.h"
namespace Final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		//form to pass on employee data
		Form3(Employee^ employee)
		{
			InitializeComponent();

		}
		//void form
		Form3(void)
		{
			InitializeComponent();
		}

	protected:
		//destructor
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ WelcomeText;//Label welcoming admin
	private: System::Windows::Forms::Button^ PunchIn;//Button to punch in
	private: System::Windows::Forms::Button^ PunchOut;//Button to punch out
	private: System::Windows::Forms::Button^ LogOut;//Button to log out
	private: System::Windows::Forms::Button^ ViewSchedule;//Button to view schedule
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;//Large calender to view
	private: System::Windows::Forms::Button^ CreateEmployee;//Button to open form to create employee
	private: System::Windows::Forms::Button^ RemoveEmployee;//Button to open form to remove employee

	protected:

	private:
		System::ComponentModel::Container^ components;

		//where the magic happens
#pragma region 
		void InitializeComponent(void)
		{
			this->WelcomeText = (gcnew System::Windows::Forms::Label());
			this->PunchIn = (gcnew System::Windows::Forms::Button());
			this->PunchOut = (gcnew System::Windows::Forms::Button());
			this->LogOut = (gcnew System::Windows::Forms::Button());
			this->ViewSchedule = (gcnew System::Windows::Forms::Button());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->CreateEmployee = (gcnew System::Windows::Forms::Button());
			this->RemoveEmployee = (gcnew System::Windows::Forms::Button());
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
			this->PunchIn->Click += gcnew System::EventHandler(this, &Form3::PunchIn_Click);
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
			this->PunchOut->Click += gcnew System::EventHandler(this, &Form3::PunchOut_Click);
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
			this->ViewSchedule->Click += gcnew System::EventHandler(this, &Form3::ViewSchedule_Click);
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
			this->CreateEmployee->Click += gcnew System::EventHandler(this, &Form3::CreateEmployee_Click);
			// 
			// RemoveEmployee
			// 
			this->RemoveEmployee->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->RemoveEmployee->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveEmployee->Location = System::Drawing::Point(733, 435);
			this->RemoveEmployee->Name = L"RemoveEmployee";
			this->RemoveEmployee->Size = System::Drawing::Size(221, 67);
			this->RemoveEmployee->TabIndex = 9;
			this->RemoveEmployee->Text = L"Remove Employee";
			this->RemoveEmployee->UseVisualStyleBackColor = false;
			this->RemoveEmployee->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1188, 552);
			this->Controls->Add(this->RemoveEmployee);
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
	public:
		Employee^ employee = nullptr;
		//closes form when clicked, sets employee to not online
	private: System::Void LogOut_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Employee^ employee = gcnew Employee;
		employee->online = false;
		MessageBox::Show("Logged out!");//displays message punched out
		this->Close();
	}
		   //button that "punches in" the employee
	private: System::Void PunchIn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show("Punched In!");
	}
		   //button that "punches out" the employee
	private: System::Void PunchOut_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show("Punched Out!");
	}
		   //button that opens form7 to create employee
	private: System::Void CreateEmployee_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Form7^ form7 = gcnew Form7;
		form7->Show();
	}
		   //button that removes employee
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Form6^ form6 = gcnew Form6;
		form6->Show();
	}
		   //button to view schedule
	private: System::Void ViewSchedule_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Form5^ form5 = gcnew Form5;
		form5->Show();
	}
	};
}