#include<iostream>
// #include <boost/multiprecision/cpp_int.hpp>
// using namespace boost::multiprecision;
using namespace std;
void printhello(){
    cout<<"Hello\n";
}
int sum(int a,int b ,int c){
    a+=10;
    b+=10;
    c+=10;
    return a+b+c;
}
int sumN(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int sumDigit(int n){
    int sum=0;
    while(n!=0){
       int r=n%10;
        n/=10;
        sum+=r;
    }
    return sum;
}
long long factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}


long long nCr(int n,int r){
    return factorial(n)/(factorial(n-r)*factorial(r));
}

int nthFibonacci(int n){
    switch (n)
    {
    case 1:
        return 1;
        break;
    case 2:
        return 2;
        break;
    default:
        return nthFibonacci(n-1)+nthFibonacci(n-2);
        break;
    }
}

int main(){
    printhello();
    int a=sum(5,66,4);
    cout<<a<<"\n";
    cout<<"Natural sum of 5 is "<<sumN(5)<<"\n";

    //PASS BY VALUE
    int x=5;
    int y=6;
    int z=7;
    a=sum(x,y,z);//PASSED BY VALUE
    cout<<a<<"\n";
    
    //PASS BY REFERENCE WILLBE COVERED IN THE POINTER CHAPTER


    ///FACTORIAL
    cout<<"Factorial of 20 is"<<factorial(20)<<"\n";
    ///CALCULATE THE SUM OF ITS DIGITS
    cout<<"SUM OF DIGITS OF 34667 IS "<<sumDigit(34667)<<"\n";
    /// BINOMIAL COEFFICIENT
    cout<<"20C7 is "<<nCr(20,7)<<"\n";
    /// NTH FIBONACCI
    cout<<"7 th fibonacci number is "<<nthFibonacci(7)<<"\n";

    cout<<"PROGRAM ENDED";

}