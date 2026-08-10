Node* uniqueSortedList(Node* head)
{
    if (head == NULL)
        return NULL;

    Node* prev = head;
    Node* curr = head->next;

    while (curr != NULL)
    {
        if (prev->data == curr->data)
        {
            // Duplicate found
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        }
        else
        {
            // Different value
            prev = curr;
            curr = curr->next;
        }
    }

    return head;
}