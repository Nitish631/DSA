#include<iostream>
using namespace std;
int main(){
    int n=4;
  
    
    // 1 2 3 4 
    // 1 2 3 4 
    // 1 2 3 4 
    // 1 2 3 4
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<"\n";
    // }


    // A B C D 
    // A B C D 
    // A B C D 
    // A B C D
    // for(int i=1;i<=n;i++){
    //     char ch='A';
    //     for(int j=1;j<=n;j++){
    //         cout<<ch<<" ";
    //         ch=ch+1;
    //     }
    //     cout<<endl;
    // }


    // 1  2  3  
    // 4  5  6  
    // 7  8  9
    // n=3;
    // int count=1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<count<<"  ";
    //         count++;
    //     }
    //     cout<<"\n";
    // }


    // * 
    // * * 
    // * * * 
    // * * * *
    // n=4;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<"\n";
    // }

    // 1 
    // 2 2 
    // 3 3 3 
    // 4 4 4 4 
    // n=4;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<(i+1)<<" ";
    //     }
    //     cout<<"\n";
    // }



    // A 
    // B B 
    // C C C 
    // D D D D 
    // E E E E E
    // n=5;
    // char ch='A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<ch<<" ";
    //     }
    //     cout<<"\n";
    //     ch=ch+1;
    // }


    // 1 
    // 1 2 
    // 1 2 3 
    // 1 2 3 4 
    // n=4;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<(j+1)<<" ";
    //     }
    //     cout<<"\n";
    // }

    // 1 
    // 2 1 
    // 3 2 1 
    // 4 3 2 1
    // n=4;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j>0;j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<"\n";
    // }


    // 1 
    // 2 3 
    // 4 5 6 
    // 7 8 9 10
    // n=4;
    // int count=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<"\n";
    // }


    // A 
    // B C 
    // D E F 
    // G H I J
    // n=4;
    // char ch='A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<ch<<" ";
    //         ch=ch+1;
    //     }
    //     cout<<"\n";
    // }



    // A 
    // B A 
    // C B A 
    // D C B A
    // n=4;
    // char ch='A';
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j>0;j--){
    //         cout<<((char)(ch+j-1))<<" ";
    //     }
    //     cout<<"\n";
    // }


    // 1 1 1 1 
    //   2 2 2 
    //     3 3 
    //       4 
    // n=4;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=n-i;j>0;j--){
    //         cout<<(i+1)<<" ";
    //     }
    //     cout<<"\n";
    // }

    
    //       1 
    //     1 2 1 
    //   1 2 3 2 1 
    // 1 2 3 4 3 2 1
    // n=8;
    // for(int i=0;i<n;i++){
    //     for(int j=n-i-1;j>0;j--){
    //         cout<<"  ";
    //     }
    //     for(int j=0;j<i+1;j++){
    //         cout<<j+1<<" ";
    //     }
    //     for(int j=i;j>0;j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<"\n";
    // }





//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *
//     n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         cout<<"*";
//         if(i==0){
//             cout<<"\n";
//             continue;
//         }
//         for(int j=0;j<2*i-1;j++){
//             cout<<" ";
//         }
//         cout<<"*"<<"\n";
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<" ";
//         }
//         cout<<"*";
//         if(i==n-2){
//             continue;
//         }
//         for(int j=0;j<2*(n-i-2)-1;j++){
//             cout<<" ";
//         }
//         cout<<"*"<<"\n";
//     }





    return 0;
}