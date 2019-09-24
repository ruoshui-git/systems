#include <stdio.h>

int ave(const int* const arr, const int size);
void arrcopy(const int* src, int* tar, const int size);
int slen(const char* str);
int print_inta(const int* a, int size);

int main(void) {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("ave: %d\n", ave(arr, 10));

    char* s = "hahahahahaha";
    printf("len of '%s': %d\n", s, slen(s));


    int b[10];
    print_inta(arr, 10);
    print_inta(b, 10);
    arrcopy(arr, b, 10);
    print_inta(b, 10);


    return 0;

}

int ave(const int* const arr, const int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum / size;
}

void arrcopy(const int* src, int* tar, const int size) {
    for (int i = 0; i < size; i++) {
        tar[i] = src[i];
    }
}

int slen(const char* str) {
    int i = 0;
    while (str[i] != '\0') {
        printf("char: %c at %d\n", str[i], i);
        i++;
    }
    return i;
}

int print_inta(const int* a, int size) {
    printf("--------------------print array\n");
    for (int i = 0; i < size; i++) {
        printf("%d at %d\n", i[a], i);
    }
    printf("-------------------------------\n");
}
