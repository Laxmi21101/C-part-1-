#include<iostream>
using namespace std;
int main(){

    char button;
    cout<<"Input a character:";
    cin>>button;

    // if(button=='a'){
    //    cout<<"Hello"<<endl;
    //}
    //else if(button=='b'){
    //    cout<<"Namaste"<<endl;
    //}
    //else if(button=='c'){
    //   cout<<"Salute"<<endl;
    //}
    //else {
    //   cout<<"I am still learning more........"<<endl;
    //}

   switch(button)
   {
    case 'a':
    cout<<"Hello"<<endl;
    break;
    case 'b':
    cout<<"Namaste"<<endl;
    break;
    case 'c':
    cout<<"Salute"<<endl;
    break;
    default:
    cout<<"I am still learning more....."<<endl;


   }

    return 0;
    }

