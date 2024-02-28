// basic stl, vector, deque, list,
// stack, queue, set,map, Algorith
#include<iostream>
#include<array>
using namespace std;
int main(){
    int basic[3]={1,2,3};
array<int,4> a = {1,2,3,4};

for(int i=0;i<a.size();i++){
    
    cout<<a[i]<<" ";
}
cout<<endl;
cout<<"Element at 2nd Index "<< a.at(2) <<endl;
cout<<"Empty or not " << a.empty() <<endl;
cout<<"first Element "<< a.front()<<endl;
cout<<"last Element "<< a.back()<<endl;
}
