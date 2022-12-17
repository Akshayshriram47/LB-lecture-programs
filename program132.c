
// problems on string...

// Problem statement:Accept input full name and display on screen
// INPUT  : Akshay Shriram
// OUTPUT : Akshay 


#include<stdio.h>


int main()
{   
    
    char Arr[50];

    printf("Please enter full name\n");
    scanf("%s",&Arr);  // till space... 

    printf("Your name is : %s",Arr);
    
    return 0;
}