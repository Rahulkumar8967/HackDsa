#include<bits/stdc++.h>
using namespace std;

int main(){

string s;
cout<<"Enter a string ";
cin >> s;

// pre compute
int hash[13] = {0};
for(int i =0;i<s.size();i++){
    hash[s[i]- 'a']++;
}
int q;
cout<<"how many elements are search ";
cin >> q;
while (q--)
{
   char c;
   cout<<"Enter  what char is to be search";
   cin >> c;

   // fetch
   cout<< hash[c-'a']<<endl;
}


    return 0;
}