
// problem Statement: count number of white spaces

// INPUT  :MARVEL LOUS
// OUTPUT :1

// INPUT  :AK SHAY SHR IRAM
// OUTPUT :3


#include<stdio.h>

int CountWhiteSpace(char *str)
{   
    int iCnt=0;

     while (*str != '\0')
    {
        if(*str == ' ') // '__'  single quote contains white space .
        {
            iCnt++;
        }

        str++;
    }
    return iCnt;

}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);
    

    iRet=CountWhiteSpace(Arr);

    printf("Number of white spaces are : %d\n",iRet);


    return 0;
}