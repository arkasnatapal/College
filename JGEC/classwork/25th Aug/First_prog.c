//Binary search in Descending order sorted array 
#include<stdio.h>
int main()
{
    int n,i,mid,low,high,key,flag=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in descending order:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            flag=1;
            break;
        }
        else if(a[mid]<key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(flag==1)
    {
        printf("Element found at position %d\n",mid+1);
    }
    else
    {
        printf("Element not found\n");
    }
    return 0;
}