#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     if(n>0){
//         cout<<"n is positive number."<<endl;
//     }else{
//         cout<<"n is negetive number"<<endl;
//     }
    
// }

// int main(){

//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         cout<<i<<endl;
//         i++;
//     }
// }
//   sum of numbers
// int main(){
//     int n; 
//     cout<<"Enter the value of N";
//     cin>>n;

//     int sum =0;
//     int i=1;
//     while(i<=n){
//         sum = sum+i;
//         i++;
//     }
//     cout<<sum<<endl;
// }

// find sum of all even no.

// int main(){
//     int n;
//     cout<<"enter the value of n "<<endl;
//     cin>>n;
//     int i=1;
//     int sum = 0;
//     while(i<=n){
//         if(i%2==0){
//             sum = sum +i;
//         }
//         i++;
//     }
//     cout<<sum<<endl;
// }


// pettern

// int main(){

//     int n;
//     cout<<"Enter the value of N "<<endl;
//     cin>>n;
//      int i = 1;
//      while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

int main(){
    int n;
    cout<<"Enter the value of n ";
    cin>>n;

    int i =1;
    while(i<=n){
        int j= 1;
        while(j<=n){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++; 
    }
}