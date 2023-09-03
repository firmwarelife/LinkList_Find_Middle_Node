// Input:  {240, 301, 479, 884, 856, 623, 905, 270, 981, 371} 
// Output: mid value: 856, largest value: 884

#include <stdlib.h>
#include <stdio.h>

struct node {
    int data;
    struct node *next;
};
typedef struct node Node;

void insert_node(Node **head_nod, Node **last_node, int value)
{

}

void gen_test_case(Node **head_nod, Node **last_node, int data_num)
{
    int idx;
    srand(100);
    
    for (idx = 0; idx < data_num; idx++)
    {
        insert_node(head_nod, last_node, rand() % 1000);
    }
}

void show_test_case(Node **head_node)
{

}

void find_middle_node(Node **head_node)
{
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
