#include <stdio.h>
struct node {
  int data;
  struct node *left;
  struct node *right;
} * head, *first, *second, *third;
struct node *createnode(int val) {
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  newnode->data = val;
  newnode->left = NULL;
  newnode->right = NULL;
  return newnode;
}
void display(struct node *head) {
  while (head != NULL) {
    printf("%d\t", head->data);
    head = head->right;
  }
}
int main() {
  first = createnode(1);
  second = createnode(2);
  third = createnode(3);
  first->right = second;
  second->right = third;
  head = first;
  display(head);
  insertend(4);
  return 0;
}