#include <stdio.h> 
#include <stdlib.h> 
  
// A linked list node 
struct Node 
{ 
  int data; 
  struct Node *next; 
}; 

//inserting in the beginning of list
void insertAtBeginning(struct Node** ref, int data) {

  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));


  new_node->data = data;
  new_node->next = (*ref);

  (*ref) = new_node;
}

//inserting in the after of list
void insertAfter(struct Node* node, int data) {
  if (node == NULL) {
    printf("the given previous node cannot be NULL");
    return;
  }

  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = data;
  new_node->next = node->next;
  node->next = new_node;
}

//inserting in the end of list
void insertAtEnd(struct Node** ref, int data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  struct Node* last = *ref;

  new_node->data = data;
  new_node->next = NULL;

  if (*ref == NULL) {
    *ref = new_node;
    return;
  }

  while (last->next != NULL)
    last = last->next;

  last->next = new_node;
  return;
}

//deleting a node
void deleteNode(struct Node **head_ref, int key) 
{  
    struct Node* temp= *head_ref, *prev; 
  
    if (temp != NULL && temp->data == key) 
    { 
        *head_ref = temp->next;   
        free(temp);               
        return; 
    } 

    while (temp != NULL && temp->data != key) 
    { 
        prev = temp; 
        temp = temp->next; 
    } 

    if (temp == NULL) return; 
    prev->next = temp->next; 
  
    free(temp);  
} 
  
// appending or adding to a list
void append(struct Node** head_ref, int new_data) 
{ 
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
  
    struct Node *last = *head_ref; 
    new_node->data  = new_data; 
    new_node->next = NULL; 
    if (*head_ref == NULL) 
    { 
       *head_ref = new_node; 
       return; 
    } 
    while (last->next != NULL) 
        last = last->next; 

    last->next = new_node; 
    return; 
} 
  
// print list
void printList(struct Node *node) 
{ 
  while (node != NULL) 
  { 
     printf(" %d ", node->data); 
     node = node->next; 
  } 
} 

//main function  
int main() 
{ 
  struct Node* head = NULL; 

  append(&head, 6); 
  append(&head, 4); 

  insertAtBeginning(&head, 7);
  insertAtEnd(&head, 1);


  deleteNode(&head, 4); 
  printf("\n Created Linked list is: "); 
  insertAfter(head->next, 5);
  printList(head); 
  
  return 0; 
} 