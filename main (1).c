#include<stdio.h>

int main()
{
    int i,j,k=0,n,m;
    printf("Enter the size of 1st array :-");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of 1st array :-");
    for(i=0;i<n;i++)
    {
        printf("a[%d] =",i);
        scanf("%d",&a[i]);
    }
    
     printf("Enter the size of 2nd array :-");
    scanf("%d",&m);
    int b[m];
    printf("Enter the elements of 2nd array :-");
    for(i=0;i<m;i++)
    {
        printf("b[%d] =",i);
        scanf("%d",&b[i]);
    }
    
    int c[100];
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
        k++;
    }
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                break;
            }
           
            
    }
      if(j>=n)
      {
          c[k]=b[i];
          k++;
      }
    } 
    printf("The union of array elements are :-");
    for(i=0;i<k;i++)
    {
        printf("\n%d",c[i]);
    }
    
    

    return 0;
}
