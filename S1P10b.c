#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3, d = 4, e = 5;
    int(*arr[5]) = {&a,&b,&c,&d,&e};
    for(int i = 0; i < 5; i++) {
        printf("%d",*arr[i]);
    }
    return 0;
}