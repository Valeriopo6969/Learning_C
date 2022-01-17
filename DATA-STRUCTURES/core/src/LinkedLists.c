#include <stddef.h> //required for NULL
#include "LinkedLists.h"
#include <stdio.h>
#include <stdlib.h>

List_Node list_get_tail(List_Head head)
{
    List_Node current_node = *head;
    List_Node previous_node = NULL;

    while (current_node)
    {
        previous_node = current_node;
        current_node = current_node->next;
    }
    
    return previous_node;
}

List_Node list_append(List_Head head, List_Node item)
{
    List_Node tail = list_get_tail(head);
    if(!tail)
    {
        *head = item;
    }
    else
    {
        tail->next = item;
    }

    item->next = NULL;
    return item;
}

List_Node list_pop(List_Head head)
{
    List_Node current_head = *head;

    if(!current_head)
    {
        return NULL;
    }  

    *head =(*head)->next;
    current_head->next = NULL;

    return current_head;
}

List_Node list_remove_item(List_Head head, List_Node item)
{
    if(!*head || !item) return NULL;

    List_Node current_node  = *head;
    List_Node previous_node = NULL;
    
    while (current_node)
    {
        if(current_node==item)
        {
            if(!previous_node)
            {
                *head = current_node->next;
                current_node->next=NULL;
                return current_node;
            }
            previous_node->next = current_node->next;
            current_node->next = NULL;
            return current_node;
        }

        previous_node = current_node;
        current_node = current_node->next;
    }
    
    return NULL;
}

void list_reverse(List_Head head)
{
    if(!*head) return;

    List_Node current_node = *head;
    List_Node previous_node = NULL;
    List_Node next_node = NULL;
   
    while (current_node)
    {
        next_node = current_node->next;
        current_node->next = previous_node;
        previous_node = current_node;
        current_node = next_node;
    }
    *head = previous_node;

   
}

List_Node list_get_item(List_Head head, List_Node item)
{
    if(!head || !item) return NULL;

    List_Node current_node = *head;
    List_Node previous_node = NULL;
    
    while (current_node)
    {
        if(current_node==item)
        {
           
            
            return item;
            
        }
        previous_node = current_node;
        current_node = current_node->next;
    }
            
    return NULL;      
}
           
        
       
            
   

        

    


    
    

    
    
    
    
    






