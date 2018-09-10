#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "str.h"

int main()
{
	const char* source = "Hello,Bitworks\n";
	char* dest = (char*)malloc(1024);
	strCopy(dest, source);
	printf("%s\n", dest);
	getch(); 
	return 0; 
}