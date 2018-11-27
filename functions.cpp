#include <iostream>

#include "functions.h"
#include "typedef.h"

using namespace std;

void addToTree(int newValue, tree *T)
{
    if (T->value > newValue) // Add to left
    {
        if (T->left == NULL)
        {
            T->left = create_node(newValue);
        }
        else
        {
            addToTree(newValue, T->left);
        }    
    }
    else // Add to right
    {  
        if (T->right == NULL)
        {
            T->right = create_node(newValue);
        }
        else{
            addToTree(newValue, T->right);
        }
    }
}

tree* create_node(int val)
{
    // Allocate space for the node, set the fields.
    tree *newNode;
    newNode = (tree*) malloc(sizeof(tree));
    newNode->value = val;

    return newNode; // Return a pointer to the created node.
}

void printTree(tree T)
{
    if (T.left != NULL)
    {
        printTree(*T.left);
    }

    cout << T.value << " - ";

    if (T.right != NULL)
    {
        printTree(*T.right);
    }
}

/*  
              50 
           /     \ 
          30      70 
         /  \    /  \ 
       20   40  60   80 */
