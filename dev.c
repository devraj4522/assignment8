#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i ;
    printf("Please Enter any value: ");
    scanf("%d",&n);
    int arr[7];
    for (i=0; i<=6; i++)
        {
            arr[i] = n;
            n=  n*3;
        }
    for (i=0; i<=6; i++)
        {
            printf("n[%d] = %d\n",i,arr[i]);
        } 
    return 0;

}
