// Input:  {240, 301, 479, 884, 856, 623, 905, 270, 981, 371} 
// Output: mid value: 856

#include <stdlib.h>
#include <stdio.h>

struct node {
    int data;
    struct node *next;
};
typedef struct node Node;

void insert_node(Node **head_node, Node **last_node, int value)
{
    // printf("%d\n", value);
    
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node -> data = value;
    new_node -> next = NULL;
    
    if(*head_node == NULL)
        *head_node = new_node;
    else
        (*last_node) -> next = new_node;
    (*last_node) = new_node;
    // printf("head : %d, last : %d\n", (*head_node) -> data, (*last_node) -> data);
}

void gen_test_case(Node **head_node, Node **last_node, int data_num)
{
    int idx;
    srand(100);
    
    for (idx = 0; idx < data_num; idx++)
    {
        insert_node(head_node, last_node, rand() % 1000);
    }
}

void show_test_case(Node **head_node)
{
    printf("Show Test Case : ");
    Node *tmp = *head_node;
    while( tmp -> next != NULL){
        printf("%d -> ", tmp -> data);
        tmp = tmp -> next;
    }
    printf("%d\n", tmp -> data);
}

int find_list_length(Node **head_node){
    int length = 0;
    Node *tmp = *head_node;
    while( tmp -> next != NULL){
        length++;
        tmp = tmp -> next;
    }
    length++;
    return length;
}

void find_middle_node(Node **head_node)
{
    Node *tmp = *head_node;
    int list_length = find_list_length(head_node);
    int i;
    for(i = 0;i < list_length / 2 - 1; i++)
        tmp = tmp -> next;
    printf("Mid Value : %d\n", tmp -> data);
}

int main(void)
{
    Node *head_node = NULL;
    Node *last_node = NULL;

    gen_test_case(&head_node, &last_node, 10);
    
    show_test_case(&head_node);
    
    find_middle_node(&head_node);
    return 0;
}
