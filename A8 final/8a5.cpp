/*Create a function to check if a number is divisible by
 5 and 6, or not. The function
 should return a boolean value (true/false)*/
 #include<iostream>
 using namespace std;
 bool bolli(int num){
   bool bel = true;
    
    if(num%5==0&&num%6==0){
       return bel=true;

    }
    else{
        return bel = false;
    }
 }
 int main (){
    int num;
    cin>>num;
    bool bel=bolli(num);
    if(bel==1){
      cout<<"true";
    }
    else{
      cout<<"false";
    }

 }