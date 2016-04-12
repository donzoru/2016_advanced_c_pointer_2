#include<iostream>
using namespace std;
int main()
{
    void swa(int *,int *);
    int a,b,c,*pa,*pb,*pc;
    pa=&a;pb=&b;pc=&c;
    cin>>a>>b>>c;
    swa(pa,pb);
    swa(pa,pc);
    swa(pb,pc);
    cout<<a<<' '<<b<<' '<<c<<endl;
    return 0;
}
void swa(int *a,int *b)
{
    if(*a>*b)
    {
        int t;
        t=*a;
        *a=*b;
        *b=t;
    }
    return;
}
