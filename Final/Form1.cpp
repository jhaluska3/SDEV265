//Form1.cpp 
//This is the main program, it starts by opening form1 to allow users to login. After
//a user logs in they are returns here with 2 bools, admin and online. If admin and online they start a loop from
//form3, if not admin but online they start a loop with form 2. When user clicks "log out" they will
//no longer be online and the loop will end
//
//header files used
#include "Form1.h"
#include "Form2.h"
#include "Form3.h"
#include "Form4.h"
#include "Form5.h"
#include "Employee.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;//the namespace that allows sql 

[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Final::Form form1;//opens form1
	form1.ShowDialog();
	Employee^ employee = form1.employee;//sets employee as who logged into form 1

	{
		if (employee != nullptr && employee->isAdmin && employee->online)//loop for online admins
		{
			Final::Form3 form3(employee);
			Application::Run(% form3);
		}
		else if (employee != nullptr && employee->online)//loop for online nonadmin
		{
			Final::Form2 form2(employee);
			Application::Run(% form2);
		}
		else
			MessageBox::Show("Have a nice day!");//message to say bye
	}

}

