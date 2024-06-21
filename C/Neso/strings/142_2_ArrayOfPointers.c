// C Program to print Array of pointers

#include <stdio.h>

int main()
{
char *arr[] = {"2 apples", "2 oranges","6 bananas"};
//using one dimensional array only where pointer hold the adress of that particular 


printf("String array Elements are:\n");
//pointer points to the adress of the firt element stored in an one dimensional array
//no wastage of memory
for (int i = 0; i < 3; i++) 
{
	printf("%s\n", arr[i]);
}
return 0;
}
