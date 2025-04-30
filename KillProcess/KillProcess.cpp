#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	while (true)
	{
		system("taskkill /f /im wgc_api.exe");
		system("taskkill /f /im WorldOfTanks.exe");
		system("taskkill /f /im WoTTweakerPlus.1.16.1.exe");
		Sleep(1000*60*2);  // Каждые 2 минут перезапуск // 1000(млсек)*60(сек)*1(минут) = 1 минута
 	}
}