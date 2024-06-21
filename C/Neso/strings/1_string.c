


#include<stdio.h>
int main()
{
    char s1[30];
    printf("Enter your full name :  ");
    gets(s1);

    printf("full name= %s",s1);

}




#include<stdio.h>
int main()
{
    char s1[] = "sovon";
    int i = 0;
    while(s1[i]!='\0')
    {

          printf("%c\n",s1[i++]);
      

    }
}




#include<stdio.h>
int main()
{
    char s1[]= "Shohidul islam sovon";


    int len = strlen(s1);
    printf(" Length  : %d  ",len);
}




#include<stdio.h>
int main()
{
    char s1[]= "Shohidul islam sovon";
    int i=0, len=0;
    while(s1[i]!='\0')
    {

       i++;
       len++;
    }
    printf("length = %d ",len);

}

#include<stdio.h>
int main()
{
    char source[] = "C programming";
    char target[20];

    strcpy(target,source);
    printf("source string = %s\n",source);
    printf("target string =  %s\n",target);

}

//concatenation using strcat (adding)
#include<stdio.h>
int main()
{
    char str1[] = "My name is ";
    char str2[] = "Shohidul islam sovon";

                  strcat(str1, str2);
    printf("%s\n",str1);
    printf("%s\n",str2);

}

#include<stdio.h>
int main()
{
    char str1[] = "My name is ";
    //char str2[] = "Shohidul islam sovon";

                  strcat(str1,"Shohidul islam sovon");
    printf("%s\n",str1);


}


//concatenation without strcat
#include<stdio.h>
int main()
{
    char str1[50] = "My name is ";
    char str2[] = "Shohidul islam sovon";

    int i =0 , len =0 , j= 0;
    while(str1[i]!='\0')
    {

        i++;
        len++;

    }
while(str2[j]!='\0')
{
    str1[len+j]=str2[j];
    j++;
}

    printf("%s\n",str1);


}
 //comparing string



#include<stdio.h>

int main()
{
    char str1[] = "Shohidul islam sovon";
    char str2[] = "Shohidul islam sovon";
    int d = strcmp(str1,str2) ;

    if(d==0)
        printf("strings are equal");
    if(d!=0)
        printf("strings are not equal");


}



//reversing string

#include<stdio.h>
int main()
{
    char str[] = "Shohidul islam sovon" ;
    printf("str = %s\n",str);

    strrev(str);
    printf("str = %s\n",str);

}




#include<stdio.h>
int main()
{
    char str1[30] = "Shohidul islam sovon" ;
    char str2[300];


    int i = 0,len=0,j;
    while(str1[i] != '\0')
    {
        i++;
        len++;
    }
     for(j=0,i=len-1;i>=0;i--,j++)
    {
        str2[j] = str1[i];


    }
     str2[j] = '\0';


     printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);





}


//check weather a string is palindrome or not
#include<stdio.h>
int main()

{
    char str1[]="madam";
    char str2[30];
    int i=0,len=0,j;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        str2[j]=str1[i];


    }
    str2[j]='\0';
    printf("%s",str2);
    int d = strcmp(str1,str2);
    if(d==0)
    {

        printf("\n it's a palindromal string");

    }
    else
        printf("Not a palindromal string");



}


//string swapping
#include<stdio.h>
int main()

{
    char str1[30]="Bangladesh ";
    char str2[30]="india";
    char temp[30];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    printf("str1 is : %s \n",str1);
    printf("str2 is : %s",str2);





}




//string upper string lower
#include<stdio.h>
int main()

{
     char str1[]="shohidul islam sovon";
    strupr(str1);
    printf("%s \n",str1);
    char str2[]="IN SHA ALLLAH";
    strlwr(str2);
    printf("%s",str2);
}


#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[100],ch;
    printf("Enter a string : ");
    gets(str);
    int i, vowel, consonant, digit, word, other;
    i = vowel = consonant = digit = word = other = 0;

    while ((ch = str[i]) != '\0') {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vowel++;
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonant++;
        } else if (ch >= '0' && ch <= '9') {
            digit++;
        } else if (ch == ' ') {
            word++;
        } else {
            other++;
        }

        i++;
    }
    word++; // for word space matters

    printf("Numbers of vowels = %d\n", vowel);
    printf("Numbers of consonants = %d\n", consonant);
    printf("Numbers of words = %d\n", word);
    printf("Numbers of digits = %d\n", digit);
    printf("Numbers of other characters = %d\n", other);

    return 0;
}

/*
#include<stdio.h>
#include<ctype.h>

int main() {
    char str[100], ch;
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    int i, vowel, consonant, digit, word, other;
    i = vowel = consonant = digit = word = other = 0;

    while ((ch = str[i]) != '\0') {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowel++;
        } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonant++;
        } else if (ch >= '0' && ch <= '9') {
            digit++;
        } else if (ch == ' ') {
            word++;
        } else {
            other++;
        }

        i++;
    }
    word++; // for word space matters

    printf("Numbers of vowels = %d\n", vowel);
    printf("Numbers of consonants = %d\n", consonant);
    printf("Numbers of words = %d\n", word);
    printf("Numbers of digits = %d\n", digit);
    printf("Numbers of other characters = %d\n", other);

    return 0;
}
*/
//check capital and small letters on your own
//capital small
#include<stdio.h>

int main() {
    char str[100];

    // Prompt user for input
    printf("Enter a string: ");

    // Read a line of input and store it in 'str'
    fgets(str, sizeof(str), stdin);

    int i;
    // Variables to count uppercase letters, lowercase letters, and digits
    int uppercaseCount = 0, lowercaseCount = 0, digitCount = 0;

    // Loop through each character in the input string
    for (i = 0; str[i] != '\0'; ++i) {
        // Check if the current character is an uppercase letter
        if (str[i] >= 'A' && str[i] <= 'Z') {
            uppercaseCount++;
        }
        // Check if the current character is a lowercase letter
        else if (str[i] >= 'a' && str[i] <= 'z') {
            lowercaseCount++;
        }
        // Check if the current character is a digit
        else if (str[i] >= '0' && str[i] <= '9') {
            digitCount++;
        }
    }

    // Display the counts
    printf("Uppercase letters count: %d\n", uppercaseCount);
    printf("Lowercase letters count: %d\n", lowercaseCount);
    printf("Digit count: %d\n", digitCount);

    return 0;
}

/*
#include <stdio.h>

int main() {
    char str[100];

    // Prompt user for input
    printf("Enter a string: ");

    // Read a line of input and store it in 'str'
    fgets(str, sizeof(str), stdin);

    int i;
    // Variables to count uppercase letters, lowercase letters, and digits
    int uppercaseCount = 0, lowercaseCount = 0, digitCount = 0;

    // Loop through each character in the input string
    for (i = 0; str[i] != '\0'; ++i) {
        char currentChar = str[i];

        // Check if the current character is an uppercase letter
        if (currentChar >= 65 && currentChar <= 90) {  // ASCII values for A-Z
            uppercaseCount++;
        }
        // Check if the current character is a lowercase letter
        else if (currentChar >= 97 && currentChar <= 122) {  // ASCII values for a-z
            lowercaseCount++;
        }
        // Check if the current character is a digit
        else if (currentChar >= 48 && currentChar <= 57) {  // ASCII values for 0-9
            digitCount++;
        }
    }

    // Display the counts
    printf("Uppercase letters count: %d\n", uppercaseCount);
    printf("Lowercase letters count: %d\n", lowercaseCount);
    printf("Digit count: %d\n", digitCount);

    return 0;
}
*/