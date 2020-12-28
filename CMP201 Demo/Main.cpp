#include "Main.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

void Main(array<String ^ >^args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    CMP201Demo::Main form;
    Application::Run( % form);
}