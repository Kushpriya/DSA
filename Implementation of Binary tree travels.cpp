/*Algorithm: PREORDER
Step 1: Repeat Steps 2 to 4 while TREE != NULL
Step 2:     Write TREE -> DATA
Step 3:     PREORDER(TREE -> LEFT)
Step 4:     PREORDER(TREE -> RIGHT)
        [END OF LOOP]
Step 5: END

Algorithm: POSTORDER
Step 1: Repeat Steps 2 to 4 while TREE != NULL
Step 2:     POSTORDER(TREE -> LEFT)
Step 3:     POSTORDER(TREE -> RIGHT)
Step 4:     Write TREE -> DATA
        [END OF LOOP]
Step 5: END

Algorithm: INORDER
Step 1: Repeat Steps 2 to 4 while TREE != NULL
Step 2:     INORDER(TREE -> LEFT)
Step 3:     Write TREE -> DATA
Step 4:     INORDER(TREE -> RIGHT)
        [END OF LOOP]
Step 5: END
*/
#include <stdio.h>
#include <stdlib.h>

  struct tnode {
        int data;
        struct tnode *left, *right;
  };

  struct tnode *root = NULL;

  /* creating node of the tree  and fill the given data */
  struct tnode * createNode(int data) {
        struct tnode *newNode;
        newNode  = (struct tnode *) malloc(sizeof(struct tnode));
        newNode->data = data;
        newNode->left = NULL;
        newNode->right = NULL;
        return (newNode);
  }

  /* inserting a new node into the tree */
  void insertion(struct tnode **node, int data) {
        if (!*node) {
                *node = createNode(data);
        } else if (data < (*node)->data) {
                insertion(&(*node)->left, data);
        } else if (data > (*node)->data) {
                insertion(&(*node)->right, data);
        }
  }

  /* post order tree traversal */
  void postOrder(struct tnode *node) {
        if (node) {
                postOrder(node->left);
                postOrder(node->right);
                printf("%d  ", node->data);
        }
        return;
  }

  /* pre order tree traversal */
  void preOrder(struct tnode *node) {
        if (node) {
                printf("%d  ", node->data);
                preOrder(node->left);
                preOrder(node->right);
        }
        return;
  }

  /* inorder tree traversal */
  void inOrder(struct tnode *node) {
        if (node) {
                inOrder(node->left);
                printf("%d  ", node->data);
                inOrder(node->right);
        }
        return;
  }

  int main() {
        int data, ch;
        while (1) {
                printf("\n1. Insertion\n2. Pre-order\n");
                printf("3. Post-order\n4. In-order\n");
                printf("5. Exit\nEnter your choice:");
                scanf("%d", &ch);
                switch (ch) {
                        case 1:
                                printf("Enter ur data:");
                                scanf("%d", &data);
                                insertion(&root, data);
                                break;
                        case 2:
                                preOrder(root);
                                break;
                        case 3:
                                postOrder(root);
                                break;
                        case 4:
                                inOrder(root);
                                break;
                        case 5:
                                exit(0);
                        default:
                                printf("U've entered wrong opetion\n");
                                break;
                }
        }
        return 0;
  }
