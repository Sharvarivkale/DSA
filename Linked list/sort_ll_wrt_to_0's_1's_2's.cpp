Node* sortList(Node* head)
{
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    Node* curr = head;

    // Step 1: Count 0s, 1s and 2s
    while (curr != NULL)
    {
        if (curr->data == 0)
        {
            count0++;
        }
        else if (curr->data == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }

        curr = curr->next;
    }

    // Step 2: Put 0s
    curr = head;

    while (count0 != 0)
    {
        curr->data = 0;
        count0--;
        curr = curr->next;
    }

    // Step 3: Put 1s
    while (count1 != 0)
    {
        curr->data = 1;
        count1--;
        curr = curr->next;
    }

    // Step 4: Put 2s
    while (count2 != 0)
    {
        curr->data = 2;
        count2--;
        curr = curr->next;
    }

    return head;
}
