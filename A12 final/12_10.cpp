/*Define a structure Sample with members int x, char y, and float z. Print the size of the structure.*/
#include<bits/stdc++.h>
using namespace std;
struct itsme{
int x;
char y;
double z;
};
int main()
{
    itsme s;
    cout<<sizeof(s);
    return 0;
}