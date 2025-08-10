#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;
public:
    List(){
        head = tail = NULL;
    }
    
    void push_front(int val){
        Node* NewNode = new Node(val);
        if(head == NULL){
            head = tail = NewNode;
        } else {
            NewNode->next = head;
            head = NewNode;
        }
    }

     void push_back(int val){
        Node* NewNode = new Node(val);
        if(head == NULL){
            head = tail = NewNode;
        } else {
            tail->next = NewNode;
            tail = NewNode;
        }
    }

    void pop_front(){
        if(head == NULL){
            cout <<"Head is empty\n";
            return;
        }
        Node*temp = head;
        head = head->next;
        temp->next=NULL;
        delete temp;
    }

    void pop_back(){
        if(head == NULL){
            cout <<"Head is empty\n";
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void Insert(int val, int pos){
        if(pos<0){
            cout <<"Invalid Position";
            return;
        }
        if(pos == 0){
            push_front(val);
        }
        Node* temp = head;
        for(int i=0; i<pos-1; i++){
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    int search(int val){
        Node* temp = head;
        int idx =0;

        while(temp != NULL){
            if(temp->data == val){
                return idx;
            } else {
                temp = temp->next;
                idx++;
            }  
        }
        return -1;
    }

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
    List ll;  
    ll.push_front(5);
    ll.push_front(8);
    ll.push_back(4);
    ll.push_back(2);
    ll.pop_front();
    ll.pop_back();

    ll.Insert(6,1);
    ll.print();

    cout << ll.search(6) << "";

    return 0;
}