#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v;
    vector<int> a(5,1);  // five elements ko 1 se initialise
cout<<"print a"<<endl;
for(int i:a) {
    cout<<i<<" ";
}

vector<int> last(a);

cout<<"print last"<<endl;
for(int i:last) {
    cout<<i<<" ";
}cout<<endl;


    cout << "capacity"<<v.capacity()<<endl;  // kitne memory allocate hui ha initially 0

    v.push_back(1);
       cout << "capacity"<<v.capacity()<<endl;
        v.push_back(2);
       cout << "capacity"<<v.capacity()<<endl;
        v.push_back(3);
       cout << "capacity"<<v.capacity()<<endl;
        v.push_back(5);
       cout << "capacity"<<v.capacity()<<endl;
        v.push_back(7);
       cout << "capacity"<<v.capacity()<<endl;
       cout<<"size->"<<v.size()<<endl;

       cout<<"element at 2nd index " <<v.at(2)<<endl;

       cout <<"front "<<v.front()<<endl;
       cout<<" back "<<v.back()<<endl;

    //    pop= last element ko nikal ke fek do
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" "<<endl;
    }
    cout<<endl;
    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" "<<endl;
    }
   cout<<"before clear size "<<v.size()<<endl;
v.clear();
   cout<<"after clear size "<<v.size()<<endl;
}