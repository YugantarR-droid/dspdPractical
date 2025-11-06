#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node *next;
};
int main() {
struct Node *head = NULL;
struct Node *temp = NULL;
struct Node *newNode = NULL;
int num, count = 0;
printf("Enter elements (0 to stop): ");
while (1) {
scanf("%d", &num);
if (num == 0)
break;
newNode = (struct Node *)malloc(sizeof(struct Node));
newNode->data = num;
newNode->next = NULL;
if (head == NULL)
head = newNode;
else
temp->next = newNode;
temp = newNode;
count++;
}
temp = head;
printf("Linked List: ");
while (temp != NULL) {
printf("%d=>", temp->data);
temp = temp->next;
}
printf("NULL\nNumber of nodes: %d\n", count);
return 0;
}