//#include <stdio.h>
//#include <stdlib.h>
//struct Node{
//    int data;
//    struct Node *next;
//};
//void linkedListTransversal(struct Node *ptr){
//    while(ptr != NULL){
//        printf("Elements are: %d\n",ptr->data);
//        ptr=ptr->next;
//    }
//}
//int main() {
//    struct Node *head;
//    struct Node *second;
//    struct Node *third;
//    struct Node *fourth;
//    
//    head = (struct Node*)malloc(sizeof(struct Node));
//    second = (struct Node*)malloc(sizeof(struct Node));
//    third = (struct Node*)malloc(sizeof(struct Node));
//    fourth = (struct Node*)malloc(sizeof(struct Node));
//    
//    head->data = 23;
//    head->next = second;
//    
//     second->data = 33;
//    second->next = third;
//    
//     third->data = 9;
//    third->next = fourth;
//    
//     fourth->data = 11;
//    fourth->next = NULL;
//    
//    linkedListTransversal(head);
//
//    return 0;
//}






////#include <stdio.h>
//// #include <stdlib.h>
//
//// struct Node {
////     int data;
////     struct Node* next;
//// };
//
//// struct Node* createNode(int data) {
////     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
////     newNode->data = data;
////     newNode->next = NULL;
////     return newNode;
//// }
//
//// void insertInAscendingOrder(struct Node** head, int data) {
////     struct Node* newNode = createNode(data);
//
////     if (*head == NULL || data < (*head)->data) {
////         newNode->next = *head;
////         *head = newNode;
////         return;
////     }
//
////     struct Node* current = *head;
////     while (current->next != NULL && current->next->data < data) {
////         current = current->next;
////     }
//
////     newNode->next = current->next;
////     current->next = newNode;
//// }
//
//// // Function to display the elements of the linked list
//// void display(struct Node* head) {
////     printf("Linked List: ");
////     while (head != NULL) {
////         printf("%d ", head->data);
////         head = head->next;
////     }
////     printf("\n");
//// }
//
//// // Function to free the memory used by the linked list
//// void freeLinkedList(struct Node* head) {
////     struct Node* current = head;
////     struct Node* next;
//
////     while (current != NULL) {
////         next = current->next;
////         free(current);
////         current = next;
////     }
//// }
//
//// int main() {
////     struct Node* head = NULL;
//
////     // Inserting elements in ascending order
////     insertInAscendingOrder(&head, 4);
////     insertInAscendingOrder(&head, 2);
////     insertInAscendingOrder(&head, 6);
////     insertInAscendingOrder(&head, 1);
////     insertInAscendingOrder(&head, 3);
//
////     // Displaying the linked list
////     display(head);
//
////     // Freeing the memory used by the linked list
////     freeLinkedList(head);
//
////     return 0;
//// }
//
//




