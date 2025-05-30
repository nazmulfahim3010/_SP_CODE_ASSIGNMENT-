/*Create a structure named Book to store book details like
title, author, genre, and price. Write a C program to 
input details for five books, find the most expensive and 
the lowest priced books, and display their information. 
Create two separate functions displayCostliest() and 
displayCheapest() to solve the problem.*/
#include<iostream>
using namespace std;
struct book{
    char name[25];
    char author[10];
    char gener[10];
    double price;
};
void displayCheapest(double min,double max,book books[5]){
    int index_min;
    int index_max;
    for(int i=0;i<5;i++){
        if(min==books[i].price){
            index_min=i;
            break;
        }
    }
    for(int i=0;i<5;i++){
        if(max==books[i].price){
            index_max=i;
            break;
        }
    }
    cout<<books[index_min].name<<books[index_min].author<<books[index_min].gener<<books[index_min].price;
    cout<<books[index_max].name<<books[index_max].author<<books[index_max].gener<<books[index_max].price;

}
void displayCostliest(book books[5]){
    double min=books[0].price;
    double max=books[0].price;
    for(int i=0;i<5;i++){
        if (min>books[i].price){
            min=books[i].price;
        }
        if(max<books[i].price){
            max=books[i].price;
        }
    }
    displayCheapest(min,max,books);
}

int main(){
    struct book books[5];
    for(int i=0;i<5;i++){
        cin>>books[i].name>>books[i].author>>books[i].gener>>books[i].price;
    }
    displayCostliest(books);
    


}