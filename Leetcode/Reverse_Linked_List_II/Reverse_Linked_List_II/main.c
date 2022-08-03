//
//  main.c
//  Reverse_Linked_List_II
//
//  Created by 龔星宇 on 2022/8/3.
//

#include <stdio.h>
#include <stdlib.h>



struct ListNode {
 int val;
 struct ListNode *next;
};


//雙指標遞迴
struct ListNode* reverseList(struct ListNode* head){

    struct ListNode* cur = head;
    struct ListNode* pre = NULL;
    while (cur) {
        //保存下一個節點
        struct ListNode* temp = cur->next;
        //反转结点
        cur->next = pre;
        //更新 cur 和 pre 指標
        pre = cur;
        cur = temp;
    }
    return pre;
}

/* Function to push a node */
//void push(struct ListNode** head_ref, int new_data)
//{
//    struct ListNode* new_node
//        = (struct ListNode*)malloc(sizeof(struct ListNode));
//    new_node->val = new_data;
//    new_node->next = (*head_ref);
//    (*head_ref) = new_node;
//}
  
/* Function to print linked list */
void printList(struct ListNode* head)
{
    struct ListNode* temp = head;
    while (temp != NULL) {
        printf("%d  ", temp->val);
        temp = temp->next;
    }
}

struct ListNode* newNode(int key)
{
    struct ListNode* temp = (struct ListNode*) malloc(sizeof (struct ListNode));
    temp->val = key;
    temp->next = NULL;
    return temp;
}

int main(int argc, const char * argv[]) {
    //struct ListNode * head = NULL;
      
    struct ListNode* head1 = newNode(1);
    head1->next = newNode(2);
    head1->next->next = newNode(3);
    
  
    printf("Given linked list\n");
    printList(head1);
    printf("\n");
    struct ListNode* head2 = reverseList(head1);
    printf("reverse linked list\n");
    printList(head2);
    
    printf("\nHello, World!\n");
    return 0;
}
