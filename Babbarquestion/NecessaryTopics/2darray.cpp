#include<iostream>
#include <climits>
using namespace std;
//element searching in array
bool isPresent(int arr[][3],int target,int i ,int j){
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if( arr[i][j] ==target){
            return 1;
        };
    }
} 
return 0;  
}
//to print row wise sum
void printSum(int arr[][3],int i,int j){
    cout<<"printing sum ->"<<endl;
    for(int i =0;i<3;i++){
        int sum = 0;
        for(int j=0;j<3;j++){
            sum += arr[i][j];
        }
        cout<<sum <<" ";
    }
}
int largestRowSum(int arr[][3],int i,int j){
    int maxi = INT_MIN ;
    int rowIndex = -1;
     for(int i =0;i<3;i++){
        int sum = 0;
        for(int j=0;j<3;j++){
            sum += arr[i][j];
        }
        if(sum > maxi ){
            maxi = sum;
            rowIndex = i;
        }
    }
    cout <<"the maximum sum is"<< maxi <<endl;
    return rowIndex;
}
int main(){
int arr[3][3];

 /*cout <<"enter the elements"<<endl;


for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin >> arr[i][j];
    }
}
// taking input -> col wise input
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cin >> arr[j][i];
//     }
// }print

cout <<"printing the array"<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout << arr[i][j] << " ";
    }
    cout <<endl;
}
cout <<"Enter the element to search"<<endl;
int target;
cin >> target;

if(isPresent(arr,target,3,4)){
    cout <<"Element found"<<endl;
}
else{
    cout <<"Not found" <<endl;
}

printSum(arr,3,3);
*/
cout<<"Max row is at index "<<largestRowSum(arr,3,3)<<endl;
    return 0;
}