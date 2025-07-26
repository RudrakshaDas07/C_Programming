#include <stdio.h>                            //present or not in Array//
int main() {
    int n,i,a,no,found=0;
    int arr[100];
    printf("Enter the number of elements:");
    scanf("%d",&no);
    printf("Enter the Array elements:");
    for(i=0;i<no;i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to check:");
    scanf("%d",&a);
    for (i = 0; i < no; i++) {
        if (arr[i]==a) {
        found=1;
        break ;
        }
    }
    if(found==1)
    {
     printf("%d is present and it's position is %d",a,i);
    }
    else
    {
      printf("%d is not present and it's position is -1",a);
    } 
    return 0;
}