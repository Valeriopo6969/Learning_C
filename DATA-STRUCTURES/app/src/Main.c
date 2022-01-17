#include <stdio.h>
#include "DoublyLinkedLists.h"
#include "DStringItem.h"
#include "LinkedLists.h"
#include "StringItem.h"

void list_print(List_Head head)
{
    if(!head) return;

    String_Item string_item = (String_Item)*head;
    printf("\n");
    while (string_item)
    {
        printf("%s\n", string_item->string);
        string_item = (String_Item)string_item->node.next;
    }
}

void dlist_print(D_List_Head head)
{
    if(!head) return;

    DString_Item string_item = (DString_Item)*head;
    printf("\n");
    while (string_item)
    {
        printf("%s\n", string_item->string);
        string_item = (DString_Item)string_item->node.next;
    }
}

void list_print_Debug(List_Head head, char* string)
{
    if(!head) return;

    String_Item string_item = (String_Item)*head;
    printf("----[%s]----\n\n",string);
    while (string_item)
    {
        printf("    -%s\n",string_item->string);
        string_item = (String_Item)string_item->node.next;
    }
    printf("\n");
}

int main(int argc, char* argv[])
{
    return 0;   
}
    

    
