//
//  main.c
//  Binary_Tree_Preorder_Traversal
//
//  Created by 龔星宇 on 2022/8/4.
//

#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
 int val;
 struct TreeNode *left;
 struct TreeNode *right;
};


int* preorderTraversal(struct TreeNode* root, int* returnSize){

    int* ret = malloc(sizeof(int) * 101);
    *returnSize = 0;
    if (root == NULL) {
        return ret;
    }

    struct TreeNode* stk[101];
    struct TreeNode* node = root;
    int stk_top = 0;
    while (stk_top > 0 || node != NULL) {
        while (node != NULL) {
            ret[(*returnSize)++] = node->val;
            stk[stk_top++] = node;
            node = node->left;
        }
        node = stk[--stk_top];
        node = node->right;
    }
    return ret;

}

struct TreeNode* newNode(int key)
{
    struct TreeNode* temp = (struct TreeNode*) malloc(sizeof (struct TreeNode));
    temp->val = key;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

int main(int argc, const char * argv[]) {
    
    //https://www.geeksforgeeks.org/inorder-tree-traversal-without-recursion/
    /* Constructed binary tree is
              1
            /   \
          2      3
        /  \
      4     5
    */
    struct TreeNode *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);
    
//    struct TreeNode* root = newNode(1);
//    root->right = newNode(2);
//    root->right->left = newNode(3);
    
    int returnSize = 3;
    
    int *p = preorderTraversal(root, &returnSize);
    
    for (int i = 0; i<5; i++) {
        printf("%d ",p[i]);
    }
    
    printf("\nHello, World!\n");
    return 0;
}
