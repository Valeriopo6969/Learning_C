#include <clove.h>
#include "DoublyLinkedLists.h"
#include "DStringItem.h"


CLOVE_TEST(DLL_Remove_First_Item)
{
    DString_Item my_doubly_linked_list = NULL;
   
    D_List_Node t0 = DLIST_APPEND_STRING(my_doubly_linked_list,"test000");
    D_List_Node t1 = DLIST_APPEND_STRING(my_doubly_linked_list,"test001");
    
    DString_Item result = (DString_Item)DLIST_REMOVE(my_doubly_linked_list,t0);
    
    CLOVE_STRING_EQ("test000",result->string);
}

CLOVE_TEST(DLL_Remove_NULL_Item)
{
    DString_Item my_doubly_linked_list = NULL;
   
    D_List_Node t0 = DLIST_APPEND_STRING(my_doubly_linked_list,"test000");
    D_List_Node t1 = DLIST_APPEND_STRING(my_doubly_linked_list,"test001");
    
    DString_Item result = (DString_Item)DLIST_REMOVE(my_doubly_linked_list,NULL);
    
    CLOVE_NULL(result);
}       
    
CLOVE_TEST(DLL_Remove_Middle_Item)
{
    DString_Item my_doubly_linked_list = NULL;
   
    D_List_Node t0 = DLIST_APPEND_STRING(my_doubly_linked_list,"test000");
    D_List_Node t1 = DLIST_APPEND_STRING(my_doubly_linked_list,"test001");
    D_List_Node t2 = DLIST_APPEND_STRING(my_doubly_linked_list,"test002");
    
    DString_Item result = (DString_Item)DLIST_REMOVE(my_doubly_linked_list,t1);
    
    CLOVE_STRING_EQ("test001",result->string);
}    

CLOVE_TEST(DLL_Remove_Last_Item)
{
    DString_Item my_doubly_linked_list = NULL;
   
    D_List_Node t0 = DLIST_APPEND_STRING(my_doubly_linked_list,"test000");
    D_List_Node t1 = DLIST_APPEND_STRING(my_doubly_linked_list,"test001");
    
    
    DString_Item result = (DString_Item)DLIST_REMOVE(my_doubly_linked_list,t1);
    
    CLOVE_STRING_EQ("test001",result->string);
}    

CLOVE_TEST(DLL_Insert_Before_First_Item)
{
    DString_Item my_doubly_linked_list = NULL;
   
    D_List_Node t0 = DLIST_APPEND_STRING(my_doubly_linked_list,"test000");

    DLIST_INSERT_STRING_BEFORE(my_doubly_linked_list,t0,"test001");
    
    CLOVE_STRING_EQ("test001", my_doubly_linked_list->string);
}    
    


CLOVE_TEST(DLL_Insert_Before_Item)
{
    DString_Item my_doubly_linked_list = NULL;
   
    D_List_Node t0 = DLIST_APPEND_STRING(my_doubly_linked_list,"test000");
    D_List_Node t1 = DLIST_APPEND_STRING(my_doubly_linked_list,"test001");

    DLIST_INSERT_STRING_BEFORE(my_doubly_linked_list,t1,"test002");
   
    DString_Item result = (DString_Item)DLIST_GET_FIRST(my_doubly_linked_list)->next;

    CLOVE_STRING_EQ("test002", result->string);
}   

CLOVE_TEST(DLL_Insert_After_Last_Item)
{
    DString_Item my_doubly_linked_list = NULL;
   
    D_List_Node t0 = DLIST_APPEND_STRING(my_doubly_linked_list,"test000");

    DLIST_INSERT_STRING_AFTER(t0,"test001");
    
    CLOVE_STRING_EQ("test000",my_doubly_linked_list->string);
}    

CLOVE_TEST(DLL_Insert_After_Item)
{
    DString_Item my_doubly_linked_list = NULL;
   
    D_List_Node t0 = DLIST_APPEND_STRING(my_doubly_linked_list,"test000");
    D_List_Node t1 = DLIST_APPEND_STRING(my_doubly_linked_list,"test001");

    DLIST_INSERT_STRING_AFTER(t0,"test001");
    
    DString_Item result = (DString_Item)DLIST_GET_FIRST(my_doubly_linked_list)->next;

    CLOVE_STRING_EQ("test001",result->string);
}    

 









    


    
    
    
    
    

   






   

   




    
    
    
   