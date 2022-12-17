
// problem Statement: character convert in upper case

// INPUT  : a
// OUTPUT : A

// INPUT  : z
// OUTPUT : Z


#include<stdio.h>
char ToupperX(char ch)
{
    return ch-32;

}

int main()
{
    char cValue='\0';
    char cRet='\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);
    

    cRet= ToupperX(cValue);

    printf("Character in the upper case is : %c\n",cRet);

    return 0;
}