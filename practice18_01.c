/*
Example of if..else Control 
leap_year.c
practice18.c 
*/

#include<stdio.h>
void main(){
    int Year;
    int Rem4, Rem100, Rem400;
    printf("Enter the year to be tested: ");
    scanf("%d", &Year);
    Rem4 = Year%4;
    Rem100 = Year%100;
    Rem400 = Year%400;
    
    if( (Rem4==0 && Rem100 !=0) ||Rem400==0 )
    printf("\n%d is a leap year.", Year);
    else
    printf("\n%d is not a leap year.", Year);
}




