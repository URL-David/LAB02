#include "HVST.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Lab02DavidRodríguez1164619::HVST mainForm;
	Application::Run(% mainForm);
	return 0;

}