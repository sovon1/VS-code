// C Program to print Array 
// of strings
#include <stdio.h>


int main()
{
char arr[][12] = {"2 apples", 
					"2 oranges", "6 bananas"};
                    //row is automatically declared
                    //but column is the ultimate factor here
                    //we can use array of pointers here
printf("String array Elements are:\n");
//wastage of huge memory
for (int i = 0; i < 3; i++) 
{
	printf("%s\n", arr[i]);
}
return 0;
}
