#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number ";
    int n;
    cin>>n;
    int pow=1;
    int binNum=0;
    while (n>0){
        int rem=n%2;
        binNum+=rem*pow;
        n/=2;
        pow*=10;
    }
    cout<<"\nBinary number of "<<n<<" is "<<binNum<<"\n";
    return 0;
}