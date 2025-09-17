#include <stdio.h>
int minimum(int *arr ) {
    int min = arr[0];
for( int i = 1; i<5;i++){
    if(*(arr+i)<min){
        min = *(arr+i);
    }
}printf("The minimum value of the array is %d\n",min);
 return 0;

}
 int maximum(int *arr) {
int max = arr[0];
for( int i = 1; i<5;i++){
    if(*(arr+i)>max){
        max = *(arr+i);
    }
}printf("The maximum value of the array is %d\n",max);
 return 0;
}
int main() {
    int arr[5] ;
    printf("Enter the elements of the array\n");
for (int i = 0; i < 5; i++) {
    scanf("%d",&arr[i]);
}
minimum(arr);
maximum(arr);


return 0;
}