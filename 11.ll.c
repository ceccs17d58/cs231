#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;

};
int main()
{
    int key,x,c,l,n;
    struct node *head,*temp,*ptr,*ptr1;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=0;
    head->link=NULL;
    do
    {
        ptr=head;
        printf("\nMENU\n1.insertion(begin)\n2.Insertion(end)\n3.Insertion(after key)\n4.Deletion(front)\n5.Deletion(end)\n6.Deletion(key)\n7.Search\n8.Display\nEnter choice:");
        scanf("%d",&c);

        if(c==1)
        {
            temp=(struct node*)malloc(sizeof(struct node));
            temp->link=ptr->link;
            ptr->link=temp;
            printf("enter the data:");
            scanf("%d",&x);
            temp->data=x;
    
        }
        else if(c==2)
        {
            while(ptr->link!=NULL)
            {
                ptr=ptr->link;
            }
            temp=(struct node*)malloc(sizeof(struct node));
            ptr->link=temp;
            printf("enter the data");
            scanf("%d",&x);
            temp->data=x;
            temp->link=NULL;
        }
        else if(c==3)
        {
            printf("enter key:");
            scanf("%d",&key);
            ptr1=ptr->link;
            while(ptr!=NULL)
            {
                if(ptr->data==key)
                {
                    temp=(struct node*)malloc(sizeof(struct node));
                    ptr1=ptr->link;
                    ptr->link=temp;
                    temp->link=ptr1;
                    printf("enter the data");
                    scanf("%d",&x);
                    temp->data=x;
                }
                ptr=ptr->link;
            }
        }
        else if(c==4)
        {
            ptr=head;
            ptr1=ptr->link;
            ptr->link=ptr1->link;
            free(ptr1);
        }
        else if(c==5)
        {
            while(ptr->link!=NULL)
            {
                ptr1=ptr;
                ptr=ptr->link;

            }
            ptr1->link=NULL;
        }
        else if(c==6)
        {
            if(ptr->link==NULL)
            {
                printf("list is empty");

            }
            else
            {
                printf("enter the key");
                scanf("%d",&key);
                l=0;
                while(ptr->link!=NULL)
                {
                    ptr1=ptr;
                    ptr=ptr->link;
                    if(ptr->data==key)
                    {
                        ptr1->link=ptr->link;
                        free(ptr);
                        l+=1;

                    }
                    if(l==0)
                    {
                        printf("key not found");
                    }
                }

            }
        }
        else if(c==7)
        {
            ptr=head;
			n=0;
            if(ptr->link==NULL)
            {
                printf("empty list");
            }
            else
            {   
                ptr=ptr->link;
                l=0;
                printf("enter key");
                scanf("%d",&key);
                while(ptr!=NULL)
                {
                    n=n+1;
                    if(ptr->data==key)
                    {
                        printf("\n element found at %d",n);
                        l+=1;
                        break;
                    }
                    ptr=ptr->link;
                }
                if(l==0)
                {
                    printf("\n element not found");
                }   
            }
            
        }
        else if(c==8)
        {
            ptr=ptr->link;
            while(ptr!=NULL)
            {
                printf("%d->",ptr->data);
                ptr=ptr->link;
            }
            printf("NULL");
        }
        
        
    }while(c==1||c==2||c==3||c==4||c==5||c==6||c==7||c==8);
}