using namespace std;
char toLower(char ch){
  if(ch >='a'&& ch <='z' )
  {
    return ch;
  }else{
    char temp = ch-'A'+'a';
    return temp;

  }

}