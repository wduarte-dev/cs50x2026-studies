#include <stdio.h>
int main(void) {
    char s1[4] = "Hi!";
    char s2[4] = "No!";
    printf("%c\n", s1[4]);           /* If you try to acess s1[4], you will acess s2[0], bc s2 memory adress is adjacent to s1 memory adress 
                                    that only happens if the compiler allocate in this way, if not working, the compiler allocated the adress 
                                    memory of this two separated */
    char* test1 = "Yes!";
    printf("%10s\n", test1);          // Prints with 10 maximum spaces if the string doesn't have this size
    printf("%.3s\n", test1);          // Prints 3 characters (without "!"), independent of string's size

    char* w1 = "Hello."; /* Makes automatically (but you can do manually)
                            w1[0] = 'H';
                            w1[1] = 'e'; 
                            w1[2] = 'l'; 
                            w1[3] = 'l'; 
                            w1[4] = 'o'; 
                            w1[5] = '.'; 
                            w1[6] = '\0';
                        */
    char* my_sentence[3];               // Creates 3 pointers
    my_sentence[0] = "Today ";          // In each pointer, I create another pointer, that points to the first characters
    my_sentence[1] = "I'm learning ";
    my_sentence[2] = "C language!\n";
    printf("%s%s%s", my_sentence[0], my_sentence[1], my_sentence[2]);  /* You have to use my_sentence[i] because %s 
                                                                                expects a char*, e not a char** 
                                                                               */
    printf("%c%c%c%c%c\n", my_sentence[0][0], my_sentence[0][1], my_sentence[0][2], 
           my_sentence[0][3], my_sentence[0][4]); // I can also print letter by letter

    char* my_sentence1[] = {"Today ", "I'm learning ", "C language!\n"}; /* You can also put elements on every index in one line, in this
                                                                                        case you dont need to specify the number of pointers */

}