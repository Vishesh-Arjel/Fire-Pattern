This code works only in windows OS.
To make it run in other OS, remove the following code:
------------------------------------------------------
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO c;
 	GetConsoleCursorInfo(h, &c);
  	c.bVisible = FALSE;
   	SetConsoleCursorInfo(h, &c);
------------------------------------------------------
Also remove the headerfile "windows.h"
------------------------------------------------------
By removing this piece of code the cursor will not
appear on the console, making the animation more clean.
