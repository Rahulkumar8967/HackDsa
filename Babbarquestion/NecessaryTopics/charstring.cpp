#include<iostream>
using namespace std;
// char toLower(char ch){
//   if(ch >='a'&& ch <='z' )
//   {
//     return ch;
//   }else{
//     char temp = ch-'A'+'a';
//     return temp;

//   }

// }

// bool checkPalindrome(char a[] ,int n){
//     int s=0;
//     int e = n-1;
//     while(s<=e){
//         if(toLower(a[s]) != toLower(a[e])){
//             return 0;
//         }else{
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }
// void reverse(char name[],int n){
// int s = 0;
// int e = n-1;
// while(s<e){
//     swap(name[s++],name[e--]);
// }
// }
// int getLength(char name[]){
//     int count = 0;
//     for(int i =0 ;name[i] != '\0'; i++){
//        count++; 
//     }
//     return count;
// }

char getMaxOccCharacter(string s){
int arr[26] = {0};

//create an array of count of characters
for(int i =0 ;i<s.length();i++){
    char ch = s[i];
    int number =0;
    //lowercase
     if( ch >='a'&& ch<='z'){
   number =ch-'a';
     }else{//uppercase
 number = ch-'A';
     }
    arr[number]++;
}

// find maximum occ character
int maxi = -1,ans = 0;
for(int i = 0;i<26;i++){
    if(maxi < arr[i]){
        ans = i;
        maxi = arr[i];
    }
}
char finalAns = 'a'+ans;
return finalAns;
}
int main(){
//  char name[20];
// cout<<"Enter your name"<<endl;
// cin>> name;
// // name[2] = '\0';
// cout<<"your name is ";
// cout<< name<<endl;
// int len = getLength(name);

// cout<<"length:"<<len<<endl;
// reverse(name,len);
// cout<<"your name is ";
// cout<< name<<endl;
// cout<<"palindrome or not:"<<checkPalindrome(name,len) <<endl;

//  cout<<"character is "<<toLower('b')<<endl;
//  cout<<"character is "<<toLower('C')<<endl;
 
string s;
cin >> s;
cout << getMaxOccCharacter(s) <<endl;
    return 0;
}
