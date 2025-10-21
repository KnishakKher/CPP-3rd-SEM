#include<stdio.h>

int main(){
    int arr[50], n;
    int even=0, odd=0;
    int *ptr;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    printf("Enter %d elements: \n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    ptr=arr;
    for(int i=0; i<n; i++){
        if(*(ptr)%2==0){
            even=even+ *ptr;
        }
            else{
                odd=odd+ *ptr;
            }
        ptr++;
    }
    printf("Sum of even numbers: %d\n", even);
    printf("Sum of odd numbers: %d", odd);
    return 0;
}