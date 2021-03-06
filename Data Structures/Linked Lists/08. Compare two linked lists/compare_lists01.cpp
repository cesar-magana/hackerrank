bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {     
    while ( head1 && head2 && head1->data == head2->data ) {
        head1 = head1->next;
        head2 = head2->next;
    }
    if ( !head1 && !head2 )
        return true;
    return false;
}