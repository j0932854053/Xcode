//
//  main.c
//  Reverse_Linked_List
//
//  Created by 龔星宇 on 2022/8/2.
//

#include <stdio.h>
#include <stdlib.h>



struct ListNode {
 int val;
 struct ListNode *next;
};

struct ListNode* reverseBetween(struct ListNode* head, int left, int right){

    struct ListNode *dummy = malloc(sizeof(struct ListNode));
    dummy -> val = -1;
    dummy -> next = head;
    struct ListNode *pre = dummy;
    
    //把指標移到left前
    for (int i = 0;i < left-1;i++)
        pre = pre -> next;
    
    struct ListNode *cur = pre->next;
    struct ListNode *next;
    for (int i = left;i < right;i++) {
        next = cur -> next;
        cur -> next = next -> next;
        next -> next = pre -> next;
        pre -> next = next;
    }
    return dummy -> next;
}





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
    head1->next->next->next = newNode(4);
    head1->next->next->next->next = newNode(5);
    
  
    printf("Given linked list\n");
    printList(head1);
    printf("\n");
    struct ListNode* head2 = reverseBetween(head1, 2, 4);
    printf("reverse a to b linked list\n");
    printList(head2);
    
    printf("\nHello, World!\n");
    return 0;
}
