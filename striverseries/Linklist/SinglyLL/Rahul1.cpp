#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    Node(int data1, Node* next1){
        data = data1;
        next = next1; 
    }
     Node(int data1){
        data = data1;
        next = nullptr; 
    }
};
int main(){
vector<int> arr = {1,5,8,7};
Node* y = new Node(arr[2]);
cout<<y->data;

    return 0;
}