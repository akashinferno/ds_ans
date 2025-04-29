#include <stdio.h>
#include <stdlib.h>
struct Node{
    char data;
    struct Node* next;
};
int main(){
struct Node *front=NULL;
struct Node *back=NULL;

int size=0;
while(1){
    int inp;
    scanf("%d",&inp);
    switch (inp){
        case 1:
        {
            char coffee;
            scanf(" %c\n",&coffee);
            struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
            newnode->data=coffee;
            newnode->next=NULL;
            if(size>=5){
                printf("Queue is full. Cannot enqueue more orders.\n");
                break;
            }
            if(front==NULL){
                front=newnode;
                back=newnode;
            }
            else{
                back->next=newnode;
                back=newnode;
            }
            printf("Order for %c is enqueued.\n",coffee);
            size++;
            break;
        }
        
        case 2:
        {
            
            struct Node *temp=front;
            if(front==NULL){
                printf("No orders in the queue.\n");
                break;
            }
            front=front->next;
            printf("Dequeued order: %c\n",temp->data);
            free(temp);
            size--;
            break;

        }
        case 3:
        {
            if(front==NULL){
                printf("Queue is empty. No orders available.\n");
                break;
            }
            printf("Orders in the queue are: ");
            struct Node *temp=front;
            while(temp!=NULL){
                printf("%c ",temp->data);
                temp=temp->next;
            }
            printf("\n");
            break;
        }
        case 4:{
            printf("Exiting program");
            return 0;
        }
    
        default:
            printf("Invalid option.\n");
    }
}
}//main
