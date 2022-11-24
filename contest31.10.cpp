/*struct Node
{
    int value;
    Node *next;
};


(1)Node *createNode(int a, Node * n)
{
    void * const p = std::malloc(sizeof(Node));
    Node * const pi = static_cast<Node *>(p);
    pi -> value = a;
    pi -> next = n; 
    return pi;
}
void  deleteNode(Node * b)
{
    std::free(b);
}
*/

/*
(2)using List = Node *;
List cons(int i, List list)
{
    void * const p = std::malloc(sizeof(Node));
    Node * const pi = static_cast<Node *>(p);
    pi -> value = i;
    pi -> next = list; 
    return pi;
}
*/

/*(3)List prepend(Node *node, List list)
{
    node -> next = list;
    return node;
}
*/


/*(4)struct ListUncons
{
    Node *head;
    List tail;
};


ListUncons uncons(List list)
{
    return 
    {
        list, 
        list -> next
    };
}
*/

/*void destroyList(List list)
{
    while (list != nullptr)
    {
        auto u = uncons(list);
        list = u.tail;
        std::free(u.head);
    }
}

#include "../uncons.h"
void destroyList(List const list)
{
    if(list == nullptr)
        return;
    auto const [x, xs] = uncons(list);

    std::free(x);
    destroyList(xs);
}*/