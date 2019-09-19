#include <stdio.h>

void bin(char n);

int main(void) {
    // unsigned int *i = malloc(sizeof(int));
    // *i = 261;
    // int *p = i;
    // char *c = i;

    // 0x4C5FE314 = 01001100 01011111 11100011 00010100
    // unsigned int i = 1281352468;
    unsigned int i = 260;
    int *p = &i;
    char *c = &i;
    printf("p: %i at %p\n", *p, &p);
    printf("c: %c at %p\n", *c, &c);

    printf("i (hex): %x, (int): %u\n", i, i);


    // print every byte of i
    printf("\nprint every byte of i:\n");
    for (int x = 0; x < sizeof(unsigned int); x++, c++) {
        printf("%d byte of i is %hhu (uint), %hhx (uhex) at %p\n", x, *c, *c, c);
    }

    // add 1 to every byte of i:
    printf("\nadd 1 to every byte of i:\n");
    for (int x = 0; x < sizeof(unsigned int); x++, c++) {
        c[x]++;
        printf("%d byte of i is %hhu (uint), %hhx (uhex) at %p\n", x, c[x], c[x], c);
        printf("i (hex): %x, (int): %u\n", i, i);
    }


}

void bin(char n)
{
    if (n > 1)
    bin(n>>1);
    printf("%d", n & 1);
}
