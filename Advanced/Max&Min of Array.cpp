#include <stdio.h>    //Max & min Array//
int main() {
    int n,i,no,max,min;
    int arr[100];
    printf("Enter the number of elements:");
    scanf("%d",&no);
    printf("Enter the Array elements:");
    for(i=0;i<no;i++)
    {
      scanf("%d",&arr[i]);
    }
    n = sizeof(arr) / sizeof(arr[0]);
    max = arr[0];
    min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
   return 0;
}