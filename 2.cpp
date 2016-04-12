#include<iostream>
using namespace std;
int main()
{
    int scmp(char *,char *);
    char s1[20],s2[20];
    cin>>s1>>s2;
    cout<<scmp(s1,s2)<<endl;
    return 0;
}
int scmp(char * a,char * b)
{
    for(;*a==*b;++a,++b)
        if(*a=='\0') return 0;
    if(*a>*b) return 1;
    else return -1;
}
