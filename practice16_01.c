/*
Finding whether a number is positive of negative 
find_pos_neg_num.c 
practice16.c
here we will use void main instead of int main. 
here insert means entering 

From chat gpt 
#include <conio.h> and clrscr() / getch()

These are only available in Turbo C (a very old DOS-based compiler).

Modern compilers like GCC do not support <conio.h>, so they will throw an error for clrscr() or getch().

No   return 0;    in main

If you use int main(), you should end with return 0;.


If You Really Want to Use Turbo C Style:
#include <stdio.h>
#include <conio.h>

void main() {
    int a;
    clrscr();

    printf("Insert a number: ");
    scanf("%d", &a);

    if (a > 0)
        printf("The number is positive.\n");
    else if (a < 0)
        printf("The number is negative.\n");
    else
        printf("It is zero.\n");

    getch();
}

But again, this only works in Turbo C.

Final Suggestion:
Use the modern version unless you're specifically told to use Turbo C for school/lab.

Let me know which compiler/IDE you are using (e.g., Turbo C++, GCC, Code::Blocks, Dev C++, etc.), and I can tailor it for you!


s

*/

#include <stdio.h>
#include <conio.h> 
void main(){

    int a; 
    clrscr();
    printf("Insert a number: ");
    scanf("%d",&a);
    if (a>0)
    printf("The number is positive. \n");
    else if(a<0)
    printf("The number is negative. \n");
    else 
    printf("It is zero. \n");
    getch();
    
}




