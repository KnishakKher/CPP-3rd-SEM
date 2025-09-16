#include <stdio.h>
int strlength(char *s) {
    int length = 0;
    while(*s != '\0'){
        length++;
        s++;
    } 
    return length;
}
int main() {
    char str[] = "Hello";
    int l = strlength(str);
    printf("the length of the string is %d",l);
    return 0;
}