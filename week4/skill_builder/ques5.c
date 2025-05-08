void enqueue(int d) {
    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=d;
    newnode->next=NULL;
    if(front==NULL){
        front=newnode;
        rear=newnode;
        return;
    }
    rear->next=newnode;
    rear=newnode;
    return;

}

void printFrontRear() {
    printf("Front: %d, Rear: %d\n",front->data,rear->data);
    return;
}

void dequeue() {
    struct Node *temp=front;
    front=front->next;
    free(temp);
    return;
}
