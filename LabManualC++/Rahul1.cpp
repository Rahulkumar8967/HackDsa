#include<bits/stdc++.h>
using namespace std;
// 7,10,11,15,18

class Node{
   public:
   int data;
   Node *next;

   Node(int data1, Node* next1){
      data = data1;
      next = next1;
   }
   Node(int data1){
      data = data1;
      next = nullptr;
   }
};

void insertAtFront(Node* &head, int data){
   Node *newNode = new Node(data);
   if(head == NULL){
      head = newNode;
      newNode->next = head;
      return;
   }
   Node *tail = head;
   while(tail->next != head){
      tail = tail->next;
   }
   tail->next = newNode;
   newNode->next = head;
   head = newNode;
}

Node* DeleteAtFront(Node* &head){
if(head == NULL){
   return NULL;
}
Node *tail = head;
while(tail->next != head){
   tail = tail->next;
}
Node* temp = head;
head = head->next;
tail->next = head;
delete (temp);
return head;
}

void display(Node* head){
   Node *temp = head;
   do
   {
      cout << temp->data << "->";
      temp = temp->next;
} while (temp != head);

}

int main(){
Node* head = nullptr;
int choice;

while(choice != 4){
   cout<<"1.for inserting the value at front"<<endl;
   cout << "2. for Deleting at the front elements" << endl;
   cout << "3. for display elements of the linklist" << endl;

   cout << "Enter your choice you want" << endl;
   cin >> choice;

   switch(choice){
      case 1:
         int num,  data;
         cout << "Enter the number of value you inserted" << endl;
         cin >> num;

         for (int i = 0; i < num;i++){
            cin >> data;
            insertAtFront(head, data);
         }
            break;

      case 2:
         cout << "Delete the front element" << endl;
         DeleteAtFront(head);
         break;

      case 3:
         cout << "display all elements of the linklist" << endl;
         display(head);
         break;

      case 4:
         break;

      default:

      break;
   }
}

return 0;
}