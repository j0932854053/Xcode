//
//  main.c
//  Same_Tree
//
//  Created by 龔星宇 on 2022/6/9.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct TreeNode {
    
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* newNode(int data)
{
    struct TreeNode* TreeNode = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    TreeNode->val  = data;
    TreeNode->left  = NULL;
    TreeNode->right = NULL;
 
    return TreeNode ;
}

bool isSameTree(struct TreeNode* p, struct TreeNode* q){

    if (p==NULL && q==NULL) {
        return true;
        
    }else if (p==NULL || q==NULL){
        return false;
    }
    
    if (p->val!=q->val) {
        return false;
    }
    
    return isSameTree(p->left, q->left)&&isSameTree(p->right, q->right);
}



int main(int argc, const char * argv[]) {
    //int p1[3] = {1,2,3};
    //int q1[3] = {1,2,3};
    
    
    struct TreeNode *root1 = newNode(1);
    
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left  = newNode(4);
    root1->left->right = newNode(5);
 
    struct TreeNode *root2 = newNode(1);
    root2->left = newNode(2);
    root2->right = newNode(3);
    root2->left->left = newNode(4);
    root2->left->right = newNode(5);
 
    if(isSameTree(root1, root2))
        printf("Both tree are identical.");
    else
        printf("Trees are not identical.");
 
    printf("\n");
    return 0;
}
