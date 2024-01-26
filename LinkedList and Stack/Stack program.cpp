#include <stdio.h>

struct Stack {
  int data;
  struct Stack *next;
};

struct Stack *top = NULL;

void push(int data) {
  struct Stack *new_node = malloc(sizeof(struct Stack));
  new_node->data = data;
  new_node->next = top;
  top = new_node;
}

int pop() {
  if (top == NULL) {
    return -1;
  }

  int data = top->data;
  struct Stack *temp = top;
  top = top->next;
  free(temp);
  return data;
}

int peek() {
  if (top == NULL) {
    return -1;
  }

  return top->data;
}

int isEmpty() {
  return top == NULL;
}

void print_stack() {
  struct Stack *temp = top;
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

int main() {
  top = NULL;

  push(10);
  push(20);
  push(30);

  printf("The stack is: ");
  print_stack();

  int data = pop();
  printf("Popped element: %d\n", data);

  printf("The stack is now: ");
  print_stack();

  return 0;
}

