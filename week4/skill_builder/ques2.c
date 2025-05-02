int isEmpty() {

    return front>rear ||front==-1;
}

int isFull() {
    return rear==MAX_SIZE-1;
}

int enqueue(int ticketID) {
     if( isFull()){
         printf("Queue is full. cannot enqueue.\n");
         return 0;
     }
    if(front==-1){
        front=0;
    }
    rear++;
    ticketIDs[rear]=ticketID;
    printf("Helpdesk Ticket ID %d is enqueued.\n",ticketID);
    return 0;
    
}

int dequeue() {
    if (isEmpty()){
        return 0;
    }
    lastDequeued=ticketIDs[front];
    front++;
    return 1;
    
}

void display() {
    if(isEmpty()){
        printf("Queue is empty.\n");
        return;
    }
    printf("Helpdesk Ticket IDs in the queue are:");
    int temp=front;
    for (int i = front; i<=rear;i++){
        printf("%d ",ticketIDs[i]);
    }
    printf("\n");
    
}
