void enqueue(int pages) {
    if (rear==MAX_SIZE){
        printf("Queue is full.Cannot enqueue.\n");
        return;
    }
    queue[rear]=pages;
    printf("Print job with %d pages is enqueued.\n",pages);
    rear++;
    return;
}

void dequeue() {
    if(front>=rear){
        printf("Queue is empty.\n");
        return;
    }
    printf("Processing print job:%d pages\n",queue[front]);
    front++;
    
    if(rear==front){
        rear=front=0;
    }
    return;
    
}

void display() {
    if(front>=rear){
        printf("Queue is empty.\n");
        return;
    }
    
    printf("Print jobs in the queue: ");
    for(int i=front;i<rear;i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
    return;
}
