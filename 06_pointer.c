#include <stdio.h>

int main(void) {
    // char c = 'c';
    // int i = 1;
    // long l = 52345234523452345L;
    //
    //
    // printf("char: %p\nint: %p\nlong: %p\n", &c, &i, &l);
    // printf("char: %c\nint: %d\nlong: %li\n", c, i, l);
    //
    // char *s = &i;
    // printf("char*: %p\n", s);
    //
    // *s = 0;
    // printf("int again: %d\n", i);
    //
    // return 0;

    int y = 72;
 char *n = y;
 printf("Here's the test case: %lu.\n", *n);
 y = 96;
 printf("Value of original int: %d", y);
 return 0;

}
