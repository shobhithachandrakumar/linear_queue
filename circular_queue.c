#include <stdio.h>
#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;
void enqueue(int x)
{
 // Write Code Here
 if ((rear + 1) % SIZE == front)
 {
 printf("\nOverflow: %d not added", x);
 return;
 }
 if (front == -1)
 front = 0;
 rear = (rear + 1) % SIZE;
 queue[rear] = x;
 printf("\nEnqueued: %d", x);
}
int dequeue()
{
 // Write Code Here
 if (front == -1)
 {
 printf("\nUnderflow");
 return -1;
 }
 int x = queue[front];
 if (front == rear)
 front = rear = -1;
 else
 front = (front + 1) % SIZE;
 return x;
}
void display()
{
 // Write Code Here
 if (front == -1)
 {
 printf("\nQueue is empty");
 return;
 }
 printf("\nQueue: ");
 int i = front;
 while (1)
 {
 printf("%d ", queue[i]);
 if (i == rear)
     break;
     i = (i + 1) % SIZE;
}
}
int main()
{
 enqueue(10);
 enqueue(20);
 enqueue(30);
 printf("\nDequeued: %d", dequeue());
 enqueue(40);
 enqueue(50);
 display();
 enqueue(60);
 display();
 enqueue(70);
 return 0;
}


