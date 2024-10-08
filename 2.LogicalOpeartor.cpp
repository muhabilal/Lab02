#include<iostream>
using namespace std;
int main(){
    int a=10, b=20;
    bool res=(a==b) && (b==a);
    cout<<res<<endl;

    int x=0;
    int check = !x;
    cout<<"Change "<<check<<endl;
}