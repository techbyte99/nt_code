#include<iostream>
#include <stdio.h>
#include <string.h>
#include<cstdlib>
using namespace std;


void extractIpAddress(char  *sourceString, long  *ipAddress)
{
     long len=0;
     char  oct[4]={0}, cnt=0, cnt1=0, i, buf[5];
    len=strlen(sourceString);
    for(i=0;i<len;i++)
    {
        if(sourceString[i]!='.')
        {
            buf[cnt++] =sourceString[i];
        }
        if(sourceString[i]=='.' || i==len-1){
            buf[cnt]='\0';
            cnt=0;
            oct[cnt1++]=atoi(buf);
        }
    }
    ipAddress[0]=oct[0];
    ipAddress[1]=oct[1];
    ipAddress[2]=oct[2];
    ipAddress[3]=oct[3];
}

int main()
{
    char ip[20]={0};
    long ipAddress[4];

    cout<<"Enter IP Address (xxx.xxx.xxx.xxx format): ";
    cin>>ip;

    extractIpAddress(ip,&ipAddress[0]);

       cout<<ipAddress[0],ipAddress[1],ipAddress[2],ipAddress[3];

    if(ipAddress[0]>=0 && ipAddress[0]<=127)
        cout<<"\nClass A Ip Address.\n";
     else if(ipAddress[0]>127 && ipAddress[0]<191)
        cout<<"Class B Ip Address.\n";
     else if(ipAddress[0]>191 && ipAddress[0]<224)
        cout<<"Class C Ip Address.\n";
    else if(ipAddress[0]>224 && ipAddress[0]<=239)
        cout<<"Class D Ip Address.\n";
     else if(ipAddress[0]>239)
        cout<<"Class E Ip Address.\n";
   else
    cout<<" \nWrong IP address entered \n";
    return 0;
}
