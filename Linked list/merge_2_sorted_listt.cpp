Node* sortTwoLists(Node* first, Node* second)
{
    // Dummy node with value 0
    Node* dummy = new Node(0);

    // temp will build the merged list
    Node* temp = dummy;

    while (first != NULL && second != NULL)
    {
        if (first->data <= second->data)
        {
            temp->next = first;
            first = first->next;
        }
        else
        {
            temp->next = second;
            second = second->next;
        }

        temp = temp->next;
    }

    // If elements are remaining in first list
    if (first != NULL)
    {
        temp->next = first;
    }

    // If elements are remaining in second list
    if (second != NULL)
    {
        temp->next = second;
    }

    // Actual head is after dummy node
    Node* head = dummy->next;

    // Delete dummy node
    delete dummy;

    return head;
}