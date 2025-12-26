#include <iostream>
#include <vector>
using namespace std;
struct Node
{ int data;
    Node* next;
};

class List{
    Node* head;
    Node* tail;
public:
    List(){
        head = tail = NULL;
    }
    void push_back(int val){
        Node* newNode = new Node();
        newNode->data = val;
        newNode -> next = NULL;
        if(head == NULL){
            head = tail = newNode;
        }else{
            tail -> next = newNode;
            tail = newNode;
        }
    }
    int middle(){
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow->data ;
    }
};


int main() {
    List ll;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int val;
    cin>>val;
    ll.push_back(val);
}
int mid = ll.middle();
cout<<mid;
    return 0;
}