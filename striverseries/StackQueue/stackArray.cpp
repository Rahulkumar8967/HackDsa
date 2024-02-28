 #include<bits/stdc++.h>
using namespace std;

// Stack class.
class Stack {
    
public:
int size;
int *arr;
int topIndex;
    
    Stack(int capacity) {
       this->size = capacity;
       arr = new int[size];
       topIndex=-1;
    }

    void push(int num) {
       if(!isFull()){
           topIndex++;
           arr[topIndex] = num;
       }else
           return;
    }

    int pop() {
       if(!isEmpty()){
        int x = arr[topIndex];
        topIndex--;
        return x;
       } else
           return -1;
    }
    
    int top() {
       if(topIndex == -1) return -1;
     else return arr[topIndex];
    }
    
    int isEmpty() {
        if(topIndex==-1)return 1;
        else return 0;
    }
    
    int isFull() {
        if(topIndex == size-1){
          return 1;
        }else
            return 0;
    }
    
};

int main(){
   Stack stack(10);
   stack.push(5);
    stack.push(7);
     stack.push(15);

     cout<<stack.topIndex<<endl;
     cout<<"POpping element from stack "<<" ";
     while(stack.isEmpty()){
        cout<< stack.pop();
     }
cout<<endl;
    return 0;
}
