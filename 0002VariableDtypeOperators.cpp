#include<iostream>
using namespace std;
int main(){
    int a=10;
    float PI=3.14f;
    char ch='A';
    string c="Nitish kumar rajbanshi";
    bool d=true;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(PI)<<endl;
    cout<<sizeof(ch)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(d)<<endl;
    /// TYPE CASTING
    ///// Implicit type casting
    int g=ch;
    cout<<g<<endl;
    ///// Explicit type casting
    double price=100.99;
    int newPrice=(int)price;
    cout<<newPrice<<endl;
    /// TAKING INPUT IN C++
    cout<<"Please enter your name";
    string name;
    getline(cin,name);
    
    cout<<"Your name is "<<name<<endl;

    /// OPERATOR IN C++
    ///// Arithmetic operator
    a=5;
    int b=6;
    int sum=a+b;
    cout<< sum <<endl;
    cout<< a-b <<endl;
    cout<< a*b <<endl;
    cout<< a/b <<endl;
    cout<< a%b <<endl;
    float f=5;
    a=2;
    cout<< f/a <<endl;
    cout<<(5/(double)2)<<endl;
    ///// Relational Operator
    cout<<(5>4)<<endl;
    cout<<(5<4)<<endl;
    cout<< (5>=5)<<endl;
    cout<< (3<=3)<<endl;
    cout<< (5==4)<<endl;
    cout<<(4!=4)<<endl;
    ///// Logical Operator
    cout<<!(3>1)<<endl;
    cout<<((3<4)&&(4==4))<<endl;
    cout<<((3>4)||(4==4))<<endl;
    ///// Unary operator
    a++;
    b--;
    ++a;
    --b;
    return 0;

}