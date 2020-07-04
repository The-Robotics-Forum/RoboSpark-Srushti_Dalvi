/*
    Postorder Traversal , Insertion and Search
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node //structure with data and left/right pointers
{
    int data;
    struct node *left, *right;

}node;

struct node* newNode(int data) //function for allocating data
{ 
    struct node* node = (struct node*) malloc(sizeof(struct node)); 
    node->data = data; 
    node->left = NULL; 
    
    node->right = NULL; 
    return(node); 
} 

struct node* insert(struct node* node, int key) //insert function 
{ 
    if (node == NULL) return newNode(key); //If the tree is empty, return a new node

    if (key < node->data)                   //Otherwise, recur down the tree
        node->left  = insert(node->left, key); 
    else if (key > node->data) 
        node->right = insert(node->right, key);    
    return node; 
} 

struct node* search(struct node* root, int key) 
{  
    if(root->data == key) 
    {
        printf("\nNumber found");
        return root;
    }
    else if(root->data < key) //key greater than root shift right
    {
        if(root->right==NULL)
            printf("Number not found\n");
        return search(root->right, key); 
    }
        
    else if(root->data > key)
    {
        if(root->left==NULL)
            printf("Number not found"\n);
        return search(root->left, key); //otherwise move left
    }
        
    
} 

void Postorder(struct node* node) // prints input in postorder
{ 
    if (node == NULL) 
    {
        return; 
    }
    Postorder(node->left);  // Traverse the left subtree
    Postorder(node->right); // Traverse the right subtree
    printf("%d ", node->data); //Visit the root
} 

int main() 
{ 
    struct node *root = NULL; 
    int x,c;
    while(1)  //Infinite loop until choose to exit
    {
        printf("\nPress 1 for Insertion: ");
        printf("\nPress 2 for Postorder Traversal display: ");
        printf("\nPress 3 for Searching a number in tree: ");
        printf("\nPress 4 to exit: ");
        scanf("%d",&c);
        switch(c) // 4 choices given to user
        {
            case 1:   // insertion of values in BST tree form
            {
                int a, n;
                printf("Number of entries:");
                scanf("%d",&n);
                printf("Enter Root value: ");
                scanf("%d",&a);
                root = insert(root, a); 
                for(int i =0;i<n;i++)
                {
                    int j;
                    printf("Enter %d :",i+1);
                    scanf("%d",&j);
                    insert(root,j);
                }
                break;
            }
            case 2: // Execution the tree from case 1
            {
                printf("\nPostorder traversal \n"); 
                Postorder(root);
                printf("\n");
                break;
            }
            case 3: // search of value provided by user in BST tree from case 1
            {
                printf("\nEnter value to search \n");
                scanf("%d",&x);
                search(root,x);
                break;
            }
            case 4: //exit
            {
                exit(0);
                break;
            }
            default:
                printf("\nInvalid choice!!!");
        }

    }
    
    getchar(); 
    return 0; 
} 