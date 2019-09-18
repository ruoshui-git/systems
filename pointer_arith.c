#include <stdio.h>

int main(void) {
    // unsigned int *i = malloc(sizeof(int));
    // *i = 261;
    // int *p = i;
    // char *c = i;

    unsigned int i = 263;
    int *p = &i;
    char *c = &i;
    printf("p: %i at %p\n", *p, &p);
    printf("c: %c at %p\n", *c, &c);

    printf("i (hex): %x, (int): %u\n", i, i);


    // print every byte of i
    for (int x = 0; x < sizeof(unsigned int); x++, c++) {
        printf("%d byte of i is %hhu (uint), %hhx (uhex) at %p\n", x, *c, *c, c);
    }

    for (int x = 0; x < sizeof(unsigned int); x++, c++) {
        *c = *c + 1;
        printf("%d byte of i is %hhu (uint), %hhx (uhex) at %p\n", x, *c, *c, c);

        printf("i (hex): %x, (int): %u\n", i, i);
    }
}
