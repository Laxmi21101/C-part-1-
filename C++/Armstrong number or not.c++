#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    
    int sum=0;
    int originaln=0;
    while(n>0){

        int lastdigit= n%10;
        sum+= pow(lastdigit,3);
        n=n/10;
    }
    if(sum== originaln){
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<"Not armstrong number"<<endl;
    }

    return 0;
}