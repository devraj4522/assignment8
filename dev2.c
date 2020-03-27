#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i ;
    printf("Please Enter 5 values for the array: ");
    
    int arr[6], changing;
    for (i=0; i<=5; i++)
        {   
            scanf("%d",&n);
            printf("Enter Another value:");
            arr[i] = n;
        }
    changing = arr[0];
    arr[0] = arr[5];
    arr[5] = changing;
    changing = arr[2];
    arr[2] = arr[4];
    arr[4]  = changing;
    changing = arr[2];
    arr[2] = arr[3];
    arr[3]  = changing;

    
    for (i=0; i<=5; i++)
        {
            printf("\nn[%d] = %d\n",i,arr[i]);
        } 
    return 0;

}
