#include "clove.h"
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

CLOVE_TEST(LL_Remove_Item) 
{
    String_Item my_linked_list = NULL;
    
    List_Node t0 = list_append((List_Head)&my_linked_list,(List_Node)new_string_item("test000"));
    List_Node t1 = list_append((List_Head)&my_linked_list,(List_Node)new_string_item("test001"));
    List_Node t2 = list_append((List_Head)&my_linked_list,(List_Node)new_string_item("test002"));
    List_Node t3 = list_append((List_Head)&my_linked_list,(List_Node)new_string_item("test003"));
    List_Node t4 = list_append((List_Head)&my_linked_list,(List_Node)new_string_item("test004"));

    list_remove_item((List_Head)&my_linked_list,t1);
    list_print_Debug((List_Head)&my_linked_list,"Removed test001");
    list_remove_item((List_Head)&my_linked_list,t4);
    list_print_Debug((List_Head)&my_linked_list,"Removed test004");
    list_remove_item((List_Head)&my_linked_list,t0);
    list_print_Debug((List_Head)&my_linked_list,"Removed test000");
   
    CLOVE_PTR_EQ(list_pop((List_Head)&my_linked_list),t2);
    CLOVE_PTR_EQ(list_pop((List_Head)&my_linked_list),t3);
    CLOVE_PTR_EQ(list_pop((List_Head)&my_linked_list),NULL);
}


CLOVE_TEST(LL_Reverse_List)
{
    String_Item my_linked_list = NULL;
    
    List_Node t0 = list_append((List_Head)&my_linked_list,(List_Node)new_string_item("test000"));
    List_Node t1 = list_append((List_Head)&my_linked_list,(List_Node)new_string_item("test001"));
    List_Node t2 = list_append((List_Head)&my_linked_list,(List_Node)new_string_item("test002"));

    list_print_Debug((List_Head)&my_linked_list,"Before Reversing");
    list_reverse((List_Head)&my_linked_list);
    list_print_Debug((List_Head)&my_linked_list,"After Reversing");

    CLOVE_PTR_EQ(list_pop((List_Head)&my_linked_list),t2);
    CLOVE_PTR_EQ(list_pop((List_Head)&my_linked_list),t1);
    CLOVE_PTR_EQ(list_pop((List_Head)&my_linked_list),t0);

}
    
    
    



