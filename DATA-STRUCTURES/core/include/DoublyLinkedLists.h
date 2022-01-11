#pragma once

typedef struct doubly_list_node
{
    struct doubly_list_node *previous;
    struct doubly_list_node *next;
}doubly_list_node_t;

#define D_List_Node doubly_list_node_t*
#define D_List_Head doubly_list_node_t**

// D_List_Head list_append(D_List_Head head, D_List_Node node);
// D_List_Node list_get_tail(D_List_Head head);
// D_List_Node list_remove_item(D_List_Head head, D_List_Node item);

