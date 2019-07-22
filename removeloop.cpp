void removeTheLoop(Node *node)
{
    bool loopexist = false;
    Node *slowPtr, *fastPtr;
    slowPtr = fastPtr = node;
    while (slowPtr && fastPtr && fastPtr->next != NULL)
    {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
        if (slowPtr == fastPtr)
            loopexist = true;
        break;
    }
    if (loopexist)
    {
        slowPtr = node;
        while (slowPtr->next != fastPtr->next)
        {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next;
        }
        fastPtr->next = NULL;
        cout << "1";
    }
    else
        cout << "0";
}