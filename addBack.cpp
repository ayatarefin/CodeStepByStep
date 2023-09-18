// Write a function named addBack that accepts a reference to a pointer to a ListNode representing the front of a linked list, along with an integer value. Your function should insert the given value into a new node at the end of the list. For example, suppose a variable named front points to the front of a list containing the following sequence of values:

// {8, 23, 19, 7, 102}
// The call of addBack(front, 42); should change the list to store the following:

// {8, 23, 19, 7, 102, 42}
// The other values in the list should retain the same order as in the original list.

// Constraints: Do not modify the data field of existing nodes; change the list by changing pointers only. Do not use any auxiliary data structures to solve this problem (no array, vector, stack, queue, string, etc).

// Assume that you are using the ListNode structure as defined below:

void addBack(ListNode*& n, int data)
{
    if(n == nullptr)
    {
        n = new ListNode(data);
        return;
    }
    
    ListNode* head = n;

    while (head->next != nullptr)
    {
        head = head->next;
    }
    ListNode* notun = new ListNode(data);
    head->next = notun;
}