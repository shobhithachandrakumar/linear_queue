#include <stdio.h>
#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;
void enqueue(int x)
{
 // Write Code Here
 if (rear == SIZE - 1)
 {
 printf("\nOverflow: %d not added", x);
 return;
 }
 if (front == -1)
 front = 0;
 queue[++rear] = x;
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
 front++;
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
 for (int i = front; i <= rear; i++)
 printf("%d ", queue[i]);
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
 return 0;
}


