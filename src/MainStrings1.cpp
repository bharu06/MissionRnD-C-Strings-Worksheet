/*

Use MainStrings1 File for testing any other function in other Cpp files of the Strings Project.

DO NOT write main function in any other File or else your Build Fails.

Objectives of Strings-1 Lesson:

->Basics of Strings / Char Arrays .
->Learn about 2D Strings
->Convert Numbers/Floats into Strings
->Manipulating Strings

*/
#include <stdio.h>
#include "FunctionHeadersStrings1.h"

int main(){
	int len=21;
	//Test KthIndexFromEnd 

	//TestNumbertoStr

	//removeSpaces

	//StrWordsinRev

	//commonWords

	
	float number = -34.456;
	char str[20];
	number_to_str(number, str, 3);
	printf("%s", str);
	return 0;
}