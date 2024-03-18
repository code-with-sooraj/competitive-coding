#include<stdio.h>
int main()
{
    int arr[100],n,key,flag=0;
    int i;
    printf("enter the size of list\n");
    scanf("%d",&n);
    printf("enter the element\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter the key element\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("Element not found.");
    else
    printf("Element is found at %d.",i+1);
}
