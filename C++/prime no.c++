// Check number is prime or non -prime...

#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int i;

    for(int i=2;i<n; i++){
        if(n%2==0){
            cout<<"Non-prime"<<endl;
            break;
        }
    }
    if(i==n){
    cout<<"Prime"<<endl;
    }
    return 0;
}