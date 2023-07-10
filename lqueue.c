#include<stdio.h>   
#include<stdlib.h>  
struct node   
{  
	int data;   
	struct node *next;  
};  
struct node *front;  
struct node *rear;
   
void enqueue()  
{  
	struct node *t;  
    int e;   
    t = (struct node *) malloc (sizeof(struct node));     
    printf("Enter value: ");  
	scanf("%d",&e);  
    t -> data = e;  
    if(front == NULL)  
    {  
        front = t;  
        rear = t;   
        front -> next = NULL;  
        rear -> next = NULL;  
    }  
    else   
    {  
        rear -> next = t;  
        rear = t;  
        rear->next = NULL;  
    }    
}  
   
void dequeue()  
{  
    struct node *t;  
    if(front == NULL)  
    {  
        printf("Queue is empty\n");  
        return;  
    }  
    else   
    {  
    	printf("Dequeue: %d\n",front->data);
        t = front;  
        front = front -> next;  
    }  
}  

void display()  
{  
    struct node *t;  
    t = front;      
    if(front == NULL)  
    {  
        printf("Queue is empty\n");  
    }  
    else  
    {
        while(t != NULL)   
        {  
            printf("%d\t",t -> data);  
            t = t -> next;  
        }  
    } 
	printf("\n"); 
}  

int menu()
{
	int choice;
	printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice: ");
	scanf("%d",&choice);
	return choice;
}
void main ()  
{  
    int choice;
	for(choice=menu();choice!=4;choice=menu())
	{ 
        switch(choice)  
        {  
          	case 1:
          		enqueue();
          		break;
        	case 2:
        		dequeue();
        		break;
        	case 3:
        		display();
        		break;
        	case 4:
        		break;
        	default:
        		printf("Wrong Choice\n");
        		break;
        }  
    }  
}  
