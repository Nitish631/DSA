#include<iostream>
using namespace std;
int decimalToBinary(int n){
    int pow=1;
    int binNum=0;
    while (n>0){
        int rem=n%2;
        binNum+=rem*pow;
        n/=2;
        pow*=10;
    }
    return binNum;
}
int binaryToDecimal(int b){
    int pow=1;
    int dec=0;
    while(b>0){
        int rem=b%10;
        dec+=rem*pow;
        pow*=2;
        b/=10;
    }
    return dec;
}
int main(){
    ///DECIMAL TO BINARY
    cout<<"Enter a number ";
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        int b=decimalToBinary(i);
        cout<<"Decimal "<<i<<" = "<<b<<"\n";
    }

    ///BINARY TO DECIMAL
    cout<<"Enter the binary number: ";
    int b;
    cin>>b;
    int dec=binaryToDecimal(b);
    cout<<"Decimal of "<<b<<" is "<<dec<<"\n";
    return 0;
}