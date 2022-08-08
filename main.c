#include <stdio.h>
#include <stdlib.h>
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
  printf("\n");
}
void insertend(int val) {
  struct node *temphead = head;
  while (temphead->right != NULL) {
    temphead = temphead->right;
  }
  struct node *lastnode = createnode(val);
  temphead->right = lastnode;
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
  display(head);
  insertend(5);
  display(head);
  insertend(6);
  display(head);
  return 0;
}