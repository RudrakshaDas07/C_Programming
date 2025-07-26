#include<stdio.h>                   //convert cent to ferhen//

int main()
{
    int cent,f;
    printf("Enter the Ferhenite value:");
    scanf("%d/n",&f);
    cent=(f-32)/9*(5);
    printf(" The Centegrade value is %d°",cent);
    return 0;
}