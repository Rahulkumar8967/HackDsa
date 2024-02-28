#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of the Array ";
    cin >> n;
int arr[100], b;
for(int i=0;i<n;i++){
    cin >> arr[i];
}
while(b !=3){ // choice
    cout<<" Enter 1 for inserting "<<endl;
     cout<<" Enter 2 for Deleting "<<endl;
      cout<<" Enter 3 for Exit "<<endl;
      cin >> b;
      switch(b){

      case 1:
     int c;
     cout<<"Enter the inserting elements which you want "<<endl;
     cin >> c;
     arr[n] = c;
     n++;

     cout<<"Array After inserting ";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
      break;

      case 2:
      cout<<"Enter the number to be deleted "<<endl;
      cin >> c;
      for(int i=0;i<n;i++){
        if(c == arr[i]){
            for(int j=0;j<n;j++){
                arr[j] = arr[j+1];
            }
            n--;
              cout << "Array after deletion" << endl;
                        for (int i = 0; i < n; i++) {
                            cout << arr[i] << " ";
                        }
            break;
        }else if(i == n){
            cout<<"elements not found !!";
        }
      }
      n--;
      break;



     case 3:
     break;


      default:
      cout<<"Invalid Choice ";


      }
}

    return 0;
}