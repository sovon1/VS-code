// C program to implement typedef with structures
#include <stdio.h>
#include <string.h>

// using typedef to define an alias for structure
typedef struct students {
	char name[50];
	char branch[50];
	int ID_no;
} stu; //now this stu is our new data type

// Driver code
int main()
{
	stu st;//first we had to use struct students st ,,,now only stu
	strcpy(st.name, "shohidul islam ");
	strcpy(st.branch, "Computer Science And Engineering");
	st.ID_no = 19;

	printf("Name: %s\n", st.name);
	printf("Branch: %s\n", st.branch);
	printf("ID_no: %d\n", st.ID_no);
	return 0;
}
