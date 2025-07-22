/*
Example of else if Statement
char_cap_or_small.c
practice19.c
*/

#include<stdio.h>
#include<conio.h>
void main(){
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    if((ch >= 'A') && (ch<= 'Z'))
    printf("\nYou entered a capital letter : %c", ch);
    else if((ch >= 'a') && (ch <= 'z'))
    printf("\nYou entered a small letter : %c", ch);
    else
    printf("\nThe letter you entered is not a character. ");


    getch();
}                 // End of main 








