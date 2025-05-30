/*Create a function to check if an
 English letter is uppercase or lowercase. 
 The function should
 return a boolean value. (true/false)*/
 #include<iostream>
 using namespace std;
 bool bolli(char x){
   bool bel=true;
    if((x>='A'&&x<='z')||(x>='a'&&x<='z')){
      return true; 
    }
    else {
        return bel = false;
    }
 }
 int main (){
    char x;
    cin>>x;
    bool bel =bolli(x);
    if(bel==1){
      cout<<"true";
    }
    else {
      cout<<"false";
    }

 }