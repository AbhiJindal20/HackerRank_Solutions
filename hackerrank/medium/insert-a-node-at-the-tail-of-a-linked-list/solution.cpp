

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    if (head == nullptr) {
        return newNode;
    }
    SinglyLinkedListNode* current = head;
    while(current->next != nullptr){
        current = current->next;
    }
    current->next = newNode;
    return head;

}

