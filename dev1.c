#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i ;
    printf("Please Enter 5 values for the array: ");
    
    int arr[5];
    for (i=0; i<=4; i++)
        {   
            scanf("%d",&n);
            printf("Enter Another value:");
            arr[i] = n;
        }
    for (i=0; i<=5 && arr[i]<=5; i++)
        {
            printf("n[%d] = %d\n",i,arr[i]);
        } 
    return 0;

}
