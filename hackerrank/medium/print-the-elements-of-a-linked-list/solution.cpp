

// Complete the printLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode* head) {
    if (head == NULL){
        return;
    }
    SinglyLinkedListNode* current = head;
    while(current != NULL){
        cout << current->data << "\n";
        current = current->next;
    }
}

