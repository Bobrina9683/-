#include "MyForm.h"
#include <Windows.h>
using namespace Prott; // �������� ������� � �������� namespace (����������) ������ ���� �����������; 
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);

}

