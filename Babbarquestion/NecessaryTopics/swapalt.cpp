#include<iostream>
using namespace std;
void swapAlternative(int arr[],int size){
    for(int i = 0 ;i<size;i=i+2){ 
if(i+1<size){
    swap(arr[i],arr[i+1]);
    }
}
}
void printArray(int arr[],int n){
    for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
int even[8] = {5,8,2,9,2,1};
int odd[5]  = {3,9,0,4,1};
swapAlternative(even,8);
swapAlternative(odd,5);
printArray(even,8);
printArray(odd,5);
}