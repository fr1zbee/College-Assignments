#include<stdio.h>

void add(void);
void mul(void);


int i,j,m,n,x,y,k;
int *p,*q;


int main()
{
    int ch;
    label:
    printf("\n1 - Matrix Addition\n2 - Matrix Multiplication");
    printf("\n\nEnter your choice - ");
    scanf("%d",&ch);
    
    switch(ch)
    {
        case 1:
        add();
        goto label;
        break;
        
        case 2:
        mul();
        goto label;
        break;
        
        default:
        printf("\nInvalid choice");
        
        return 0;
        
    }

}

void add()
{
    printf("\nEnter the number of rows of 1st matrix - ");
    scanf("%d",&n);
    printf("\nEnter the number of columns of 1st matrix - ");
    scanf("%d",&m);
    int a[m][n];
    p=&a[0][0];
    
    printf("\nEnter the elements of 1st matrix - ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\na[%d][%d] = ",i,j);
            scanf("%d",p+(i*m)+j);
        }
    }
    
    printf("\nEnter the number of rows of 2nd matrix - ");
    scanf("%d",&x);
    printf("\nEnter the number of columns of 2nd matrix - ");
    scanf("%d",&y);
    
    int b[x][y];
    q=&b[0][0];
    
    printf("\nEnter the elements of 2nd matrix - ");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("\nb[%d][%d] = ",i,j);
            scanf("%d",q+(i*y)+j);
        }
    }
    
    int c[n][m];
    
    if(n==x&&m==y)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                c[i][j]=*(p+(i*m)+j)+*(q+(i*y)+j);
                
            }
        }
    }
    else
    {
        printf("\nInvalid Input - The number of rows and columns of both matrices must be same.");
    }
    
    printf("\nThe addition of two matrices are - ");
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",c[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}

void mul()
{
    printf("\nEnter the number of rows of 1st matrix - ");
    scanf("%d",&n);
    printf("\nEnter the number of columns of 1st matrix - ");
    scanf("%d",&m);
    int a[m][n];
    p=&a[0][0];
    
    printf("Enter the elements of 1st matrix - ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\na[%d][%d] = ",i,j);
            scanf("%d",p+(i*m)+j);
        }
    }
    
    printf("\nEnter the number of rows of 2nd matrix - ");
    scanf("%d",&x);
    printf("\nEnter the number of columns of 2nd matrix - ");
    scanf("%d",&y);
    
    int b[x][y];
    q=&b[0][0];
    
     printf("\nEnter the elements of 2nd matrix - ");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("\nb[%d][%d] = ",i,j);
            scanf("%d",q+(i*y)+j);
        }
    }
    
    int c[n][y];
    for(i=0;i<n;i++)
    {
        for(j=0;j<y;j++)
        {
            c[i][j]=0;
        }
    }
    
    if(m==x)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<y;j++)
            {
                for(k=0;k<m;k++)
                {
                    c[i][j]=c[i][j]+(*(p+(i*m)+k))*(*(q+(k*y)+j));
                }
            }
        }
    }
    else
    {
        printf("\nMatrix condition not met");
    }
    
    printf("\nThe multiplication of matrices are - ");
     printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d",c[i][j]);
            printf("\t");
        }
        printf("\n");
    }
  
}

