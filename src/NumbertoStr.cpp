/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>
#include<math.h>

void str_rev(char* str, int start, int end);
void number_to_str(float number, char *str,int afterdecimal){
	int n = (int)number;
	float f = number - n;
	int i = 0,j,neg=0;
	
	if (n < 0)
	{
		str[0] = '-'; neg = 1; i++; n = n - 2*n;
		 f = -(number + n);
	}
	
	while (n > 0)
	{
		str[i++] = n % 10+'0';
		n = n / 10;
	}
	
	j = i;
	i--;
	char temp;
	while (neg < i)
	{
		temp = str[neg];
		str[neg] = str[i];
		str[i] = temp; neg++; i--;
	}

	if (afterdecimal > 0)
	{
		n = (int)(f*pow((float)10, afterdecimal));

		i = j; 
		str[i++] = '.'; j++;
		
	while (n > 0)
	{
		str[i] = n % 10 + '0';
		i++;
		n = n / 10;
	}

	neg = j;
	j = i--;
	
	while (neg < i)
	{
		temp = str[neg];
		str[neg] = str[i];
		str[i] = temp; neg++; i--;
	}
	}
	
	str[j] = '\0';
	
}
