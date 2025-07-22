/*
Displaying a text in several times 
display_text_several.c
practice20.c 
best for turbo c , if run on visual studio code , should use " int main " instead of " main() " 
*/

#include<stdio.h>
#include<conio.h>

main()
{
    int i, n;
    char text[50];
    printf("Enter the text: ");
    scanf("%[^\n]", text);              // with advanced specifier 
                //gets(text);
    printf("How many times display ? ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    printf("%s \n", text);
}
















