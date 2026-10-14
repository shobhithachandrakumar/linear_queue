#include <stdio.h>
#define SIZE 5
int s1[SIZE], s2[SIZE];
int top1 = -1, top2 = -1;
void enqueue(int val)
{
 // Write Code Here
 if (top1 == SIZE - 1)
 {
 printf("\nOverflow");
 return;
 }
 s1[++top1] = val;
 printf("\nEnqueued: %d", val);
}
int dequeue()
{
 // Write Code Here
 if (top2 == -1)
 {
 while (top1 != -1)
 s2[++top2] = s1[top1--];
 }
 if (top2 == -1)
 {
 printf("\nUnderflow");
 return -1;
 }
 return s2[top2--];
}
int main()
{
 enqueue(10);
 enqueue(20);
 enqueue(30);
 printf("\nDequeued: %d", dequeue());
 printf("\nDequeued: %d", dequeue());
 enqueue(40);
 printf("\nDequeued: %d", dequeue());
 printf("\nDequeued: %d", dequeue());
 return 0;
}
