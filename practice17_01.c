/*
Program to find exam result(grade) 
find_exam_grade.c
practice17.c

This code is being run 1st time,3rd time,5th time; but shows error in 2nd time,4th time,6th time. 
*/

#include <stdio.h>
#include <conio.h>

void main(){
    int s;
    printf("\n Enter your score: ");
    scanf("%d", &s);

    if((s>80) && (s<=100))
    printf("\n your grade is A+ ");
    else if((s>=70) && (s<=80))
    printf("\n your grade is A ");
    else if((s>=60) && (s<=70))
    printf("\n your grade is A- ");     // I wrote prinf instead of printf and ; is not written after ; the prinf is also accepted. 
    else if((s>=50) && (s<=60))        // but else is red underline instead of prinf , so remember it. 
    printf("\n your grade is B ");
    else if((s>=40) && (s<=50))
    printf("\n your grade is C ");
    else if((s>=33) && (s<=40))
    printf("\n your grade is D ");
    else
    printf("\n your grade is F ");

    getch();
}




