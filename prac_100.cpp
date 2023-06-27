if (head == NULL || head->next == NULL)
    return NULL;
Node *slow = head;
Node *fast = head;
Node *prev = head;

while (fast->next != NULL && fast->next->next != NULL)
{
    slow = slow->next;
    fast = fast->next->next;

    if (slow == fast)
    {
        while (slow != prev)
        {
            slow = slow->next;
            prev = prev->next;
        }
        return slow;
    }
}
return NULL;