/*(1)List concatList(List left, List right)
{
    if (left == nullptr)
    return right;
    List last = left;
    while(last->next != nullptr)
    last = last -> next;
    last->next = right;
    return left;
}*/

/*(2)ListIterator begin(List list)
{
return {list};
}

ListIterator end(List list)
{
return {nullptr};
}*/

/*(3)ListIterator next(ListIterator iterator, int n = 1)
{
    int k = 0;
    while(k < n)
    {
        iterator++;
        k++;
    }
    return iterator;
}*/

и т.д.