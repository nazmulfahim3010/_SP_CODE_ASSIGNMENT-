/*Create a function to find the quadrant of an (x,y) point. If the point falls
 upon an axis or the origin, print so*/
 #include<iostream>
 using namespace std;
 void quad(int x,int y){
    if(x==0&&y==0){
        cout<<"origin";
    }
    else if(x>0&&y>0){
        cout<<"1st quadrant";
    }
    else if(x>0&&y<0){
        cout<<"4th quadrant";
    }
    else if(x<0 && y<0){
        cout<<"3rd quadrant";
    }
    else if(x<0 && y>0){
        cout<<"2nd quadrant";
    }
    else if(x==0){
        cout<<"y axies";
    }
    else if(y==0){
        cout<<"x axies";
    }
 }
 int main (){
    int x,y;
    cin >>x>>y;
    quad(x,y);

 }