/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        vector<Node*> v;
        while(head!=NULL){
            v.push_back(head);
            head=head->next;
        }
        int n = v.size();
        return v[n/2]->data;
        
    }
};