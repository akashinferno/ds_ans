int insertq(int *data)
{
    if (rear==max-1){
        return 0;
    }
    
    if(front==-1){
        front=0;
    }
    rear++;
    queue[rear]=*data;
    return 1;
}

int delq()
{
   if(front==-1 || front>rear){
       printf("Queue is empty.\n");
    return 0;
   }
   
   printf("Deleted number is: %d\n",queue[front]);
   front++;
   return 0;
    
}

void display()
{
    if(front==-1 || front>rear){
        printf("Queue is empty.\n");
        return;
    }
    printf("Elements in the queue are:");
    for(int i =front;i<=rear;i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
}
