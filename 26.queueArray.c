#include<stdio.h>
#include<stdlib.h>
void main()
{
	int q[50],i,front=0,c,end=0,data,cho,limit=50;
    	do
    	{
        	printf("\nchoose\n1.Insertion\n2.Deletion\n3.Display\n");
        	scanf("%d",&c);
        	switch(c)
        	{
            		case 1: printf("Enter the value of element: ");
                    		scanf("%d",&data);
                    		if(front==0)
                    		{
                        		front=1;
                        		end=1;
                        		q[end]=data;
                    		}
                    		else if(end==limit)
                    		{
                        		printf("Queue is FULL");
                    		}
                    		else
                    		{
                        		end=end+1;
                        		q[end]=data;
                    		}
                    		break;
            		case 2: if(front==0)
                    		{
                        		printf("Queue is EMPTY");
                    		}
                    		else if(front==end)
                    		{
                        		printf("Deleted %d",q[end]);
                        		front=0;
                        		end=0;
                    		}
                    		else
                    		{
                        		printf("Deleted %d",q[front]);
                        		front+=1; 
                    		}
                    		break;
            		case 3: if(front==0)
                    		{
                        		printf("Queue is EMPTY");
                    		}
                    		else
                    		{
                        		for(i=front;i<=end;i++)
                        		{
                            			printf("%d -> ",q[i]);
                        		}
                        		printf("\nFront: %d",front);
                        		printf("\nEnd: %d",end);
                    		}
        	}	 
    	}while(c==1 || c==2 || c==3);
}