#include<stdio.h>

void add(void);
void mul(void);
void saddle(void);


int i,j,m,n,x,y,k;
int *p,*q;


int main()
{
    int ch;
    do
    {
    
    printf("\n1 - Matrix Addition\n2 - Matrix Multiplication\n3 - Saddle point of a Matrix\n4 - Exit");
    printf("\n\nEnter your choice - ");
    scanf("%d",&ch);
    
    switch(ch)
    {
        case 1:
        add();
        break;
        
        case 2:
        mul();
        break;
        
        case 3:
        saddle();
        break;
    }
    }while(ch!=4); 
    
     return 0;
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

void saddle(void)
{
    int min,max;
    printf("\nEnter the number of rows of matrix - ");
    scanf("%d",&n);
   printf("\nEnter the number of columns of matrix - ");
    scanf("%d",&m);
    int a[n][m];
    
    printf("Enter the elements of the matrix - ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\na[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    
    for(i=0;i<n;i++)
    {
        min=a[i][0];
        
        for(j=0;j<m;j++)
        {
            if(a[i][j]<=min)
            {
                min=a[i][j];
                x=i;
                y=j;
            }
        }
        
        j=y;
        max=a[0][j];
        for(k=0;k<n;k++)
        {
            if(a[k][j]>=max)
            {
                max=a[k][j];
            }
        }
        if(max==min)
       {
        printf("\nSaddle point is %d,found in row %d and at location [%d,%d]",min,i+1,x,y);
       }
       else
       {
           printf("\nNo saddle point found in row %d",i+1);
       }
    
    }
    }
    


