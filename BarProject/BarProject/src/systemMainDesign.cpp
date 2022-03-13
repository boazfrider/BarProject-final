#include "../headfiles/MyForm.h"

using namespace System;
using namespace System ::Windows::Forms;

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BarProject::MyForm form;
	Application::Run(% form);
}

