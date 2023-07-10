#include<stdio.h>   
#include<stdlib.h>  
struct node   
{  
    int data;   
    struct node *next;  
};  
struct node *front;  
struct node *rear;   
void enqueue();  
void dequeue();  
void display();  
void main ()  
{  
    int choice;   
    while(choice != 4)   
    { 
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");  
        printf("Enter your choice ");  
        scanf("%d",& choice);  
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
            exit(0);  
            break;  
            default:   
            printf("\nEnter valid choice\n");  
        }  
    }  
}  
void enqueue()  
{  
    struct node *ptr;  
    int item;   
    ptr = (struct node *) malloc (sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    else  
    {   
        printf("Enter value\n");  
        scanf("%d",&item);  
        ptr -> data = item;  
        if((front == NULL)&&(rear==NULL))
        {  
            front = ptr;  
            rear = ptr;   
            rear -> next = front;  
        }  
        else   
        {  
            rear -> next = ptr;  
            rear = ptr;  
            rear->next = front;  
        }  
    }  
}     
void dequeue()  
{  
    struct node *ptr;  
    if((front == NULL)&&(rear==NULL)) 
    {  
        printf("\nUNDERFLOW\n");  
        return;  
    }  
    else if(front==rear)
    {
    	front=rear=NULL;
	}
    else   
    {   
        front = front -> next;  
        rear->next=front;
        printf("\n Element deleted\n");
    }  
}  
void display()  
{  
    struct node *ptr;  
    ptr = front;      
    if((front == NULL) &&(rear==NULL))
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   
        do   
        {  
        	printf("%d\t",ptr -> data);  
            ptr = ptr -> next;  
        } while(ptr != front);
    }
	printf("\n");   
}  
