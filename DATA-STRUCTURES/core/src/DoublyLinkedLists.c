#include <stddef.h>
#include "DoublyLinkedLists.h"


D_List_Node dlist_get_tail(D_List_Head head)
{
    D_List_Node current_node = *head;
    D_List_Node previous_node = NULL;
    

    while (current_node)
    {
        previous_node = current_node;
        current_node = current_node->next;
    }
    
    return previous_node;
}

D_List_Node dlist_append(D_List_Head head, D_List_Node item)
{
    D_List_Node tail = dlist_get_tail(head);

    if(!tail)
    {
        *head = item;
    }
    else
    {
        tail->next = item;
    }

    item->previous = tail;
    item->next = NULL;
    return item;
}

D_List_Node dlist_remove_item(D_List_Head head ,D_List_Node item)
{
    if(!*head || !item) return NULL;

    D_List_Node current_node = *head;

    if(current_node == item)
    {
        *head = item->next;
        //perchè fare current_node = item->next è sbagliato?? :/
    }
       
    if((item)->next)
    {
        item->next->previous = item ->previous;
    }

    if((item)->previous)
    {
        item->previous->next = item ->next;
    }

    return item;
    
}

void dlist_insert_before(D_List_Head head,D_List_Node target_item,D_List_Node item_to_insert)
{
    if(!head || !target_item || !item_to_insert) return;

    item_to_insert-> previous = target_item->previous;
    item_to_insert-> next  = target_item;

    if(!target_item->previous)
    {
        (*head)->previous = item_to_insert;
        (*head)= item_to_insert;
    }
        
    else
    {
        target_item->previous = item_to_insert;
        item_to_insert->previous->next = item_to_insert;
    }
}

   
    


void dlist_insert_after(D_List_Node target_item, D_List_Node item_to_insert)
{
    if(!target_item || !item_to_insert) return;

    item_to_insert->previous = target_item;
    item_to_insert->next = target_item->next;
    target_item->next = item_to_insert;

    if(item_to_insert->next) item_to_insert->next->previous = item_to_insert;
}
    
    


D_List_Node get_first_item(D_List_Head head)
{
    return *head;
}




        


    

