#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void president(void);
void student(int);
void display(void);
void total(void);
void delete(void);
struct abc
{
    int prn;
    char name[50];
    struct abc *add;
   
};

 int i,n,no;
 char nam[50];
struct abc *head,*temp,*new,*sec,*temp1;

int main()
{
   
   
    printf("\nEnter the total number of members in the club - ");
    scanf("%d",&n);
    
     president();
     student(n);
     display();
     delete();
     display();
     return 0;
     
   
    
}


void president(void)
{
    int no;
    char nam[50];
    head=(struct abc*)malloc(sizeof(struct abc));
    printf("\nEnter the PRN of the president - ");
    scanf("%d",&no);
    printf("\nEnter the name of the president - ");
    scanf("%s",nam);
   
   
    head->prn=no;
    strcpy(head->name,nam);
    head->add=NULL;
}

void student(int n)
{
    temp=head;
    for(i=1;i<n;i++)
    {
        if(i!=n-1)
        {
            new=(struct abc*)malloc(sizeof(struct abc));
            printf("\nEnter the PRN of the %d student - ",i);
            scanf("%d",&no);
             printf("\nEnter the name of the %d student - ",i);
             scanf("%s",nam);
             
             new->prn=no;
            strcpy(new->name,nam);
             new->add=NULL;
             temp->add=new;
             temp=temp->add;
        }
        else
        {
            new=(struct abc*)malloc(sizeof(struct abc));
            printf("\nEnter the PRN of the secretary - ");
            scanf("%d",&no);
             printf("\nEnter the name of the secretary - ");
             scanf("%s",nam);
             
             new->prn=no;
             strcpy(new->name,nam);
             new->add=NULL;
             temp->add=new;
             temp=temp->add;
             sec=new;
        }
        }
    }
    
void display(void)
{
        temp=head;
        for(i=1;i<=n;i++)
        {
            if(i==1)
            {
                printf("\nThe details of the president are - ");
                printf("\nPRN - %d",temp->prn);
                printf("\nName - %s",temp->name);
                printf("\n");
                temp=temp->add;
            }
            else if(i>1&&i<n)
            {
                printf("\nThe details of the students are - ");
                printf("\nPRN - %d",temp->prn);
                printf("\nName - %s",temp->name);
                printf("\n");
                temp=temp->add;
            }
            else
            {
                printf("\nThe details of the secretary are - ");
                printf("\nPRN - %d",temp->prn);
                printf("\nName - %s",temp->name);
                printf("\n");
                temp=temp->add;
            }
            }
} 

void delete(void)
{
    int ch;
    temp=head;
    printf("Select what you want to delete - ");
    for(i=1;i<=n;i++)
    {
        
        if(i==1)
        {
        
          printf("\n1- President");
          temp=temp->add;
        }
        else if(i>1&&i<n)
        {
          printf("\nStudents -");
          printf("%d - %s",i,temp->name);
          temp=temp->add;
        }
        else
        {
            
         printf("\n%d- Secretary",i);
        }
     }
    
     
     printf("\n\nEnter your choice - ");
     scanf("%d",&ch);
     
     temp=head;
     temp1=head;
     
     if(ch==1)
     {
       ////////////////////////////////////////////////////
        printf("\nPresident data deleted successfully");
     }
     else if(ch>1&&ch<n)
     {
         for(i=1;i<ch+1;i++)
         {
             temp1=temp1->add;
         }
         for(i=1;i<ch-1;i++)
         {
             temp=temp->add;
         }
         temp->add=temp1;
         printf("\nStudent data deleted successfully");
     }
     else
     {
          /*sec->prn=0;
         sec->name=NULL;
         printf("\nSecretary data deleted successfully");*/
     }
     
     

  }
      

             






