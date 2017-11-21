#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void sender();
//void receiver();


int main()
{
    int choice=0;
    do
    {
        cout<<" \t\tM E N U \n\n";
        cout<<" 1. Sender \n";
        cout<<" 2. Receiver\n";
        cout<<" 9. Exit \n";
        switch(choice)
        {
        case 1:
            sender();
          //  system("pause");
            break;
        //case 2:
          //  receiver();
           // system("pause");
          //  break;
        case 9:
            cout<<"Have a nice day \n";
            break;
        default:
            cout<<"Wrong choice entered :try again ";
        }

    }while(choice!= 9); // end of do while loop

} //end of the main function.

void sender()
{

    int i=0;
    int F[11];
    cout<<" \tEnter 7 one by one \n";
    cout<<"\n First bit : "; cin>>F[2];
    cout<<"\n Second bit : "; cin>>F[4];
    cout<<"\n Third bit : "; cin>>F[5];
    cout<<"\n Fourth bit : "; cin>>F[6];
    cout<<"\n Fifth bit : "; cin>>F[8];
    cout<<"\n Sixth bit : "; cin>>F[9];
    cout<<"\n Seventh bit : "; cin>>F[10];
    F[0]= F[2]^F[4]^F[6]^F[8]^F[10];
    F[1]= F[2]^F[5]^F[6]^F[9]^F[10];
    F[3]= F[4]^F[5]^F[6];
    F[7]= F[8]^F[9];

    cout<<" Sender Frame : \n";
    for( i=10;i>=0;i--)
    {
        cout<<F[i];
    }//end of for
}//end of the sender function
