//Form5.h schedule viewer for all employees

#pragma once
#include "Employee.h"
namespace Final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	public ref class Form5 : public System::Windows::Forms::Form
	{
	public:
		//constructor that takes employee, sets employees schedule to one taken from database
		Form5(Employee^ employee)
		{
			//query assigning values to the employees schedule
			InitializeComponent();
			int ID = employee->id;
			String^ connection = "Data Source=(localdb)\\localsql;Initial Catalog=customerdb; Integrated Security=True";
			SqlConnection sqlConn(connection);
			sqlConn.Open();
			String^ sqlQuery = "SELECT * FROM Schedule WHERE Id=ID;";
			SqlCommand command(sqlQuery, % sqlConn);
			//Employee^ employee2 = gcnew Employee;
			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read())
			{
				employee->id = reader->GetInt32(0);
				employee->Sunday = reader->GetString(1);
				employee->Monday = reader->GetString(2);
				employee->Tuesday = reader->GetString(3);
				employee->Wednesday = reader->GetString(4);
				employee->Thursday = reader->GetString(5);
				employee->Friday = reader->GetString(6);
				employee->Saturday = reader->GetString(7);
				//sets label's text to what was taken from the database
				SunWork->Text = "" + employee->Sunday;
				MonWork->Text = "" + employee->Monday;
				TueWork->Text = "" + employee->Tuesday;
				WedWork->Text = "" + employee->Wednesday;
				ThuWork->Text = "" + employee->Thursday;
				FriWork->Text = "" + employee->Friday;
				SatWork->Text = "" + employee->Friday;
			}
		}
		//constructor
		Form5(void)
		{
			InitializeComponent();
		}
	protected:
		//destructor
		~Form5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Sun;//Labels for the weekdays
	private: System::Windows::Forms::Label^ Mon;
	private: System::Windows::Forms::Label^ Tue;
	private: System::Windows::Forms::Label^ Wed;
	private: System::Windows::Forms::Label^ Thu;
	private: System::Windows::Forms::Label^ Sat;
	private: System::Windows::Forms::Label^ Fri;
	private: System::Windows::Forms::Label^ SunWork;//Labels that display user's scheduled hours
	private: System::Windows::Forms::Label^ MonWork;
	private: System::Windows::Forms::Label^ TueWork;
	private: System::Windows::Forms::Label^ WedWork;
	private: System::Windows::Forms::Label^ ThuWork;
	private: System::Windows::Forms::Label^ FriWork;
	private: System::Windows::Forms::Label^ SatWork;
	private: System::Windows::Forms::Button^ Back;//button to go back
	protected:


	private:
		System::ComponentModel::Container^ components;

#pragma region
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Sun = (gcnew System::Windows::Forms::Label());
			this->Mon = (gcnew System::Windows::Forms::Label());
			this->Tue = (gcnew System::Windows::Forms::Label());
			this->Wed = (gcnew System::Windows::Forms::Label());
			this->Thu = (gcnew System::Windows::Forms::Label());
			this->Sat = (gcnew System::Windows::Forms::Label());
			this->Fri = (gcnew System::Windows::Forms::Label());
			this->SunWork = (gcnew System::Windows::Forms::Label());
			this->MonWork = (gcnew System::Windows::Forms::Label());
			this->TueWork = (gcnew System::Windows::Forms::Label());
			this->WedWork = (gcnew System::Windows::Forms::Label());
			this->ThuWork = (gcnew System::Windows::Forms::Label());
			this->FriWork = (gcnew System::Windows::Forms::Label());
			this->SatWork = (gcnew System::Windows::Forms::Label());
			this->Back = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Sun
			// 
			this->Sun->AutoSize = true;
			this->Sun->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Sun->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sun->Location = System::Drawing::Point(151, 117);
			this->Sun->Name = L"Sun";
			this->Sun->Size = System::Drawing::Size(90, 39);
			this->Sun->TabIndex = 0;
			this->Sun->Text = L"SUN";
			// 
			// Mon
			// 
			this->Mon->AutoSize = true;
			this->Mon->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Mon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mon->Location = System::Drawing::Point(247, 117);
			this->Mon->Name = L"Mon";
			this->Mon->Size = System::Drawing::Size(97, 39);
			this->Mon->TabIndex = 1;
			this->Mon->Text = L"MON";
			// 
			// Tue
			// 
			this->Tue->AutoSize = true;
			this->Tue->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Tue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tue->Location = System::Drawing::Point(350, 117);
			this->Tue->Name = L"Tue";
			this->Tue->Size = System::Drawing::Size(86, 39);
			this->Tue->TabIndex = 2;
			this->Tue->Text = L"TUE";
			// 
			// Wed
			// 
			this->Wed->AutoSize = true;
			this->Wed->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Wed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Wed->Location = System::Drawing::Point(442, 117);
			this->Wed->Name = L"Wed";
			this->Wed->Size = System::Drawing::Size(97, 39);
			this->Wed->TabIndex = 3;
			this->Wed->Text = L"WED";
			// 
			// Thu
			// 
			this->Thu->AutoSize = true;
			this->Thu->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Thu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Thu->Location = System::Drawing::Point(545, 117);
			this->Thu->Name = L"Thu";
			this->Thu->Size = System::Drawing::Size(88, 39);
			this->Thu->TabIndex = 4;
			this->Thu->Text = L"THU";
			// 
			// Sat
			// 
			this->Sat->AutoSize = true;
			this->Sat->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Sat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sat->Location = System::Drawing::Point(735, 117);
			this->Sat->Name = L"Sat";
			this->Sat->Size = System::Drawing::Size(85, 39);
			this->Sat->TabIndex = 6;
			this->Sat->Text = L"SAT";
			// 
			// Fri
			// 
			this->Fri->AutoSize = true;
			this->Fri->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Fri->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Fri->Location = System::Drawing::Point(639, 117);
			this->Fri->Name = L"Fri";
			this->Fri->Size = System::Drawing::Size(72, 39);
			this->Fri->TabIndex = 7;
			this->Fri->Text = L"FRI";
			// 
			// SunWork
			// 
			this->SunWork->AutoSize = true;
			this->SunWork->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SunWork->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SunWork->Location = System::Drawing::Point(173, 201);
			this->SunWork->Name = L"SunWork";
			this->SunWork->Size = System::Drawing::Size(38, 39);
			this->SunWork->TabIndex = 9;
			this->SunWork->Text = L"0";
			// 
			// MonWork
			// 
			this->MonWork->AutoSize = true;
			this->MonWork->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->MonWork->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MonWork->Location = System::Drawing::Point(267, 201);
			this->MonWork->Name = L"MonWork";
			this->MonWork->Size = System::Drawing::Size(68, 39);
			this->MonWork->TabIndex = 10;
			this->MonWork->Text = L"9-5";
			// 
			// TueWork
			// 
			this->TueWork->AutoSize = true;
			this->TueWork->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TueWork->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TueWork->Location = System::Drawing::Point(368, 201);
			this->TueWork->Name = L"TueWork";
			this->TueWork->Size = System::Drawing::Size(68, 39);
			this->TueWork->TabIndex = 11;
			this->TueWork->Text = L"9-5";
			// 
			// WedWork
			// 
			this->WedWork->AutoSize = true;
			this->WedWork->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->WedWork->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WedWork->Location = System::Drawing::Point(468, 201);
			this->WedWork->Name = L"WedWork";
			this->WedWork->Size = System::Drawing::Size(68, 39);
			this->WedWork->TabIndex = 12;
			this->WedWork->Text = L"9-5";
			// 
			// ThuWork
			// 
			this->ThuWork->AutoSize = true;
			this->ThuWork->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ThuWork->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ThuWork->Location = System::Drawing::Point(563, 201);
			this->ThuWork->Name = L"ThuWork";
			this->ThuWork->Size = System::Drawing::Size(68, 39);
			this->ThuWork->TabIndex = 13;
			this->ThuWork->Text = L"9-5";
			// 
			// FriWork
			// 
			this->FriWork->AutoSize = true;
			this->FriWork->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->FriWork->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FriWork->Location = System::Drawing::Point(655, 201);
			this->FriWork->Name = L"FriWork";
			this->FriWork->Size = System::Drawing::Size(68, 39);
			this->FriWork->TabIndex = 14;
			this->FriWork->Text = L"9-5";
			// 
			// SatWork
			// 
			this->SatWork->AutoSize = true;
			this->SatWork->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SatWork->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SatWork->Location = System::Drawing::Point(760, 201);
			this->SatWork->Name = L"SatWork";
			this->SatWork->Size = System::Drawing::Size(38, 39);
			this->SatWork->TabIndex = 15;
			this->SatWork->Text = L"0";
			// 
			// Back
			// 
			this->Back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Back->Location = System::Drawing::Point(380, 332);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(221, 67);
			this->Back->TabIndex = 16;
			this->Back->Text = L"BACK";
			this->Back->UseVisualStyleBackColor = false;
			this->Back->Click += gcnew System::EventHandler(this, &Form5::Back_Click);
			// 
			// Form5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(1038, 505);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->SatWork);
			this->Controls->Add(this->FriWork);
			this->Controls->Add(this->ThuWork);
			this->Controls->Add(this->WedWork);
			this->Controls->Add(this->TueWork);
			this->Controls->Add(this->MonWork);
			this->Controls->Add(this->SunWork);
			this->Controls->Add(this->Fri);
			this->Controls->Add(this->Sat);
			this->Controls->Add(this->Thu);
			this->Controls->Add(this->Wed);
			this->Controls->Add(this->Tue);
			this->Controls->Add(this->Mon);
			this->Controls->Add(this->Sun);
			this->Name = L"Form5";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//close the form
	private: System::Void Back_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}

	};
}
