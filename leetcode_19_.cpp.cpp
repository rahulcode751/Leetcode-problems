Node* removeNthFromEnd(Node* head, int k) {
        Node* one = head;
        Node* two = head;
        
        while(k--){ /// k times
            two = two->next;
        }
        if(two==NULL){   /// length of ll = k  => delete head node
            return one->next;
        }
        while(two->next!=NULL){
            one = one->next;
            two = two->next;
        }
        
        /// delete kth node from end
        one->next = one->next->next;      /// memory leak
        
        return head;
    }
