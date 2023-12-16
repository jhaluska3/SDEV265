#include "Form1.h"
#include "Form2.h"
#include "Form3.h"
#include "Form4.h"
#include "Form5.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;


bool runEmp= true;

[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Final::Form form1;
	form1.ShowDialog();
	Employee^ employee = form1.employee;

	{
		if (employee != nullptr && employee->isAdmin)
		{
			Final::Form3 form3(employee);
			Application::Run(% form3);
		}
		else if (employee != nullptr)
		{
			while (runEmp)
			{
				Final::Form2 form2(employee);
				Application::Run(% form2);

			}




		}

	}


}

/*	
Final::Form form1;
	form1.ShowDialog();
	Employee^ employee = form1.employee;*/