//
//  main.c
//  3Node_Link_List
//
//  Created by 龔星宇 on 2022/6/9.
//

#include <stdio.h>


struct node{
    int data;
    struct node* next;
};

typedef struct node Node;


int main(int argc, const char * argv[]) {
    
    
    Node a,b,c;
    
    Node *ptr = &a;
    
    a.data = 10;
    a.next = &b;
    b.data = 11;
    b.next = &c;
    c.data = 12;
    c.next = NULL;
    
    while (ptr!=NULL) {
        printf("current address: %p \n",ptr);
        printf("data: %d \n",ptr->data);
        printf("next address   : %p \n\n",ptr->next);
        ptr = ptr->next;
    }
    
    
    
    printf("\n");
    return 0;
}
