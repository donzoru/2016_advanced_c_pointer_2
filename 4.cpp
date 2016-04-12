#include<iostream>
using namespace std;
int ma=0,pa;
int mi=100000,pi;
int main()
{
    void input_data(int *);
    void handle_val(int *);
    void output_data(int *);
    int a[10];
    input_data(a);
    handle_val(a);
    output_data(a);
    return 0;
}
void input_data(int *number)
{
    for(int i=0;i<10;++i){
        std::cin>>*(number+i);
        if(*(number+i)>ma) {ma=*(number+i); pa=i;}
        if(*(number+i)<mi) {mi=*(number+i); pi=i;}
    }
    return;
}
void handle_val(int *number)
{
    int t;
    if(pa!=9)
    {
       t=*(number+9);
       *(number+9)=*(number+pa);
       *(number+pa)=t;
    }
    if(pi)
    {
       t=*(number);
       *(number)=*(number+pi);
       *(number+pi)=t;
    }
    return;
}
void output_data(int *number)
{
    for(int i=0;i<10;++i){
        std::cout<<*(number+i)<<((i==9)?'\n':' ');
    }
    return;
}
