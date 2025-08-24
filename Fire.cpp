#include <iostream>
#include <windows.h>
using namespace std;
int b[2080];
int main(){
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO c;
	GetConsoleCursorInfo(h, &c);
	c.bVisible = FALSE;
	SetConsoleCursorInfo(h, &c);
	while (1){
		cout << "\x1b[H";
		for(int j = 0; j < 2080; j++){
			if (j < 2000){
				b[j] = (b[j + 81] + b[j + 79] + b[j + 80] + b[j] + b[j + 1]) / 5;
				if ((j % 80) != 0) cout << " .,-~+:;"[b[j]>>6];
				else cout << endl;
			} 
			else{
				if (rand() % 3){
					b[j] = 0;
				}
				else {
					b[j] = 456;
				}
			}
		}
	}
}
