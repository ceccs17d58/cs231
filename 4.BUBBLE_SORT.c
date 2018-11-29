#include<stdio.h>
 int main()
{
    int array[50],n,i,j,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    
    for(i=0;i<n;++i)
        scanf("%d",&array[i]);
        
    for(i=1;i<n;++i)
        for(j=0;j<(n-i);++j)
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
            
    printf("\nArray after sorting: ");
    for(i=0;i<n;++i)
        printf("%d ",array[i]);
 
    return 0;
}
