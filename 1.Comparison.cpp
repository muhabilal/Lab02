#include<iostream>
using namespace std;
int main(){
    int person1_age=25;
    int person2_age=18;
    bool result= (person1_age==person2_age);
    cout<<"The Result of Comparison Operator is: "<<result<<endl;
    bool res=(person1_age>person2_age);
    cout<<"The Result of Comparison Operator is: "<<res<<endl;
    bool res1=(person1_age!=person2_age);
    cout<<"The Result of Comparison Operator is: "<<res1<<endl;
    cout<<"The Result of Comparison Operator is: "<<res1<<endl; 

    int a=20, b=10;
    bool res2=(a>=b);
    cout<<"The Result of Comparison Operator a and b is: "<<res2<<endl;

    char grade='A';
    cout<<grade;
}