

/*
Tree cons(Tree left, int value, Tree right)
{
    void * const p = std::malloc(sizeof(Node));
    Node * const pi = static_cast<Node *>(p);
    pi -> value = value;
    pi -> left = left; 
    pi -> right = right; 
    return pi;
}
*/


/*(2)
void destroyTree(Tree tree)
{
    if(tree != nullptr)
    {
        destroyTree(tree -> left);
        destroyTree(tree -> right);
        std::free(tree);
    }
}
*/

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstdlib>

struct Node
{
    int value;
    Node *left;
    Node *right;
};
using Tree = Node *;

Tree cons(Tree left, int value, Tree right)
{
    void * const p = std::malloc(sizeof(Node));
    Node * const pi = static_cast<Node *>(p);
    pi -> value = value;
    pi -> left = left; 
    pi -> right = right; 
    return pi;
}

Tree createTree(int const *begin, int const *end)
{
    int const * const mid = begin + (end - begin) / 2;
    return begin == end
        ? nullptr
        : cons(createTree(begin, mid), *mid, createTree(mid + 1, end));
}

#include <ostream>
#include <string>

std::ostream &printTree(std::ostream &out, Tree const tree, bool right, std::string const &prefix)
{
    if(tree != nullptr)
    {
        out << prefix << (right ? "└──" : "├──" ) << tree->value << std::endl;
        printTree(out, tree->left, false, prefix + (right ? "    " : "│   "));
        printTree(out, tree->right, true, prefix + (right ? "    " : "│   "));
    }
    return out;
}
std::ostream &operator<<(std::ostream &out, Tree const tree)
{
    return printTree(out, tree, true, "");
}


int main()
{
    int a[7] = {0, 1, 2, 3, 4, 5, 6};
    Tree drevo = createTree(a, a + 7);
    std::cout << drevo;
}

