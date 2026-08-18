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
int main(){
    cout<<"Enter a number ";
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        int b=decimalToBinary(i);
        cout<<"Decimal "<<i<<" = "<<b<<"\n";
    }
    return 0;
}