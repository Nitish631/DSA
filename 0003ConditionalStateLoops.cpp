#include<iostream>
using namespace std;
int main(){
    int n=44;
    //// NEGATIVE OR POSITIVE
    if(n>=0){
        cout<<"Positive"<<endl;
    }else{
        cout<<"Negative"<<endl;
    }
    //// ODD OR EVEN
    if(n%2==0){
        cout<<"EVEN"<<endl;
    }else{
        cout<<"ODD"<<endl;
    }
    //// GRADING SYSTEM
    int marks=55;
    if (marks>=90){
        cout<<"A"<<endl;
    }else if (marks>=80){
        cout<<"B"<<endl;
    }else{
        cout<<"Fail"<<endl;
    }
    //// UPPER CASE LOWER CASE
    // char ch;
    // cin>>ch;
    // if(ch>='a' && ch<='z'){
    //     cout<<"LOWER CASE"<<endl;
    // }else if (ch>='A' && ch<='Z'){
    //     cout<<"UPPER CASE"<<endl;
    // }

    ////TERNARY OPERATOR
    cout<<(n>=0?"Positive":"Negative")<<endl;

    //// LOOPS
    //// WHILE LOOP
    int count =1;
    while(count<=5){
        cout<<count<<" ";
        count++;
    }

    
    return 0;
}