#include<iostream>
#include<iomanip>
using namespace std;
typedef struct li{
    int id;
    char n[20];
    double a,b,c,avg;
}stu;
stu a[20];
int n,k;
double ma;
int main()
{
    void input();
    void smax();
    void output();
    cin>>n;
    ma=0;
    input();
    smax();
    output();
    return 0;
}
void input()
{
    for(int i=0;i<n;++i){
        std::cin>>(*(a+i)).id>>(*(a+i)).n>>(*(a+i)).a>>(*(a+i)).b>>(*(a+i)).c;
        (*(a+i)).avg=((*(a+i)).a+(*(a+i)).b+(*(a+i)).c)/3.0;
    }
}
void smax()
{
    for(int i=0;i<n;++i){
        if((*(a+i)).avg > ma) {ma=(*(a+i)).avg; k=i;}
    }
}
void output()
{
    cout<<(*(a+k)).id<<' '
        <<(*(a+k)).n<<' '
        <<setprecision(1)<<std::fixed<<(*(a+k)).a<<' '
        <<setprecision(1)<<std::fixed<<(*(a+k)).b<<' '
        <<setprecision(1)<<std::fixed<<(*(a+k)).c<<' '
        <<setprecision(2)<<std::fixed<<(*(a+k)).avg<<endl;
}
