//
// Created by User on 15-09-2026.
//

#include <stdio.h>

int main()
{
    printf("This is the line number one!");
    printf("This is the line number two.");
    printf("This is the line number three.");

    // This is the line number one!This is the line number two.This is the line number three. OUTPUT OF THE ABOVE CODE. TO FIX THIS WE CAN USE THE NEWLINE CHARACTER. '\n'


    printf("\nusing two newline in a row will give us a blank space.\n\n");

    printf("\nThis is the line number one!\n");
    printf("This is the line number two.\n");
    printf("This is the line number three.\n");

    /*
    printf("This is the line number number one!");
    printf("This is the line number two.");
    printf("This is the line number three."); THIS IS THE OUTPUT OF THE NEW CODE WITH NEWLINE USED !
    */

    /*
     What Exactly is a /n :-

     /n is called a Escape Sequence.

     Escape Sequences start with a backslash and represent special characters that cannot be typed directly.

     in this case, \n tells program to move the cursor to the beginning of the next line.

     Here are some of the commonly used Escape Sequences used:-

     /t inserts a horizontal tab.
     // inserts a backslash character.
     /" inserts a double quote character.

    */

    printf("\nthis is use of tab escape sequence.\t some text here :3");

    printf("\nthis is the use of horizontal backslah character.\\");


    printf("\nThis is the use of \"Double quotes\" to highlight words!");



    return 0;
}