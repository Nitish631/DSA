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
    //// FOR LOOP
    for(int i=1;i<=200;i+=2){
        cout<<i<<" ";
    }
    cout<<"\n";
    //// Sum of numbers from 1 to n
    int sum=0;
    n=55;
    for(int i =1;i<=n;i++){
        sum+=i;
    }
    cout<<"SUM IS : "<<sum<<endl;
    //// BREAK AND CONTINUE
    for(int i =1;i<=50;i++){
        cout<<i<<" ";
        if(i==5){break;}
    }
    cout<<"\n";
    for(int i =1 ; i<=10;i++){
        if(i==5){
            continue;
        }
        cout<<i<<" ";
    }
    cout<<"\n";
    //// DO WHILE LOOP
    n=0;
    do{
        cout<<"\n Hello world!";
        n++;
    }while(n<=10);
    cout<<"\n";

    //// CHECK IF PRIME OR NOT
    n=21;
    bool isPrime=true;
    for(int i=2;i*i<=n;i++){
        if (n%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime){
        cout<<"PRIME"<<endl;
    }else{
        cout<<"COMPOSITE"<<endl;
    }
    ///// NESTED LOOP
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}