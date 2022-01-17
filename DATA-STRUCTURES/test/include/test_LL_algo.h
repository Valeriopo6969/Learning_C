#include "clove.h"
#include "LinkedLists.h"
#include "StringItem.h"


CLOVE_TEST(LL_Remove_First_Item) 
{
    String_Item my_linked_list = NULL;
    
    List_Node t0 = LIST_APPEND(my_linked_list,"test000");
    List_Node t1 = LIST_APPEND(my_linked_list,"test001");
    
    String_Item result = (String_Item)LIST_REMOVE(my_linked_list,t0);

    CLOVE_STRING_EQ("test000",result->string);
}    



CLOVE_TEST(LL_Remove_Last_Item) 
{
    String_Item my_linked_list = NULL;
    
    List_Node t0 = LIST_APPEND(my_linked_list,"test000");
    List_Node t1 = LIST_APPEND(my_linked_list,"test001");
    
    String_Item result = (String_Item)LIST_REMOVE(my_linked_list,t1);

    CLOVE_STRING_EQ("test001",result->string);
}    

CLOVE_TEST(LL_Remove_Middle_Item) 
{
    String_Item my_linked_list = NULL;
    
    List_Node t0 = LIST_APPEND(my_linked_list,"test000");
    List_Node t1 = LIST_APPEND(my_linked_list,"test001");
    List_Node t2 = LIST_APPEND(my_linked_list,"test002");
    
    String_Item result = (String_Item)LIST_REMOVE(my_linked_list,t1);

    CLOVE_STRING_EQ("test001",result->string);
}    

CLOVE_TEST(LL_Remove_NULL_Item) 
{
    String_Item my_linked_list = NULL;
    
    List_Node t0 = LIST_APPEND(my_linked_list,"test000");
    List_Node t1 = LIST_APPEND(my_linked_list,"test001");
    
    String_Item result = (String_Item)LIST_REMOVE(my_linked_list,NULL);

    CLOVE_NULL(result);
}    


CLOVE_TEST(LL_Reverse_List)
{
    String_Item my_linked_list = NULL;
    
   
    List_Node t0 = LIST_APPEND(my_linked_list,"test000");
    List_Node t1 = LIST_APPEND(my_linked_list,"test001");
    List_Node t2 = LIST_APPEND(my_linked_list,"test002");
   
    LIST_REVERSE(my_linked_list);

    String_Item result = (String_Item)LIST_POP(my_linked_list);

    CLOVE_STRING_EQ("test002",result->string);
}
    


    
    
    



