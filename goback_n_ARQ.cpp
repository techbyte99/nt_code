#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int  main()
{
char sender[50],receiver[50];
int i,winsize;
 cout<<"\n ENTER THE WINDOWS SIZE : ";
  cin>>winsize;
 cout<<"\n SENDER WINDOW IS EXPANDED TO STORE MESSAGE OR WINDOW \n";
 cout<<"\n ENTER THE DATA TO BE SENT : ";
fflush(stdin);
gets(sender);
for(i=0;i<winsize;i++)
receiver[i]=sender[i];
receiver[i]=NULL;
 cout<<"\n MESSAGE SEND BY THE SENDER:\n";
 puts(sender);
 cout<<"\n WINDOW SIZE OF RECEIVER IS EXPANDED\n";
 cout<<"\n ACKNOWLEDGEMENT FROM RECEIVER \n";
for(i=0;i<winsize;i++);
cout<<i;
 cout<<"\n MESSAGE RECEIVED BY RECEIVER IS : ";
 puts(receiver);
 cout<<"\n WINDOW SIZE OF RECEIVER IS SHRINKED \n";
getch();
}
