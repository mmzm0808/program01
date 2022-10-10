# include "math.h"
# include "iostream"
using namespace std;

class area01
{
private:
    double r;
public:
    double s1;

    void set1(double a)
    {
        r = a;
    }
    void set1(int i)
    {
        cout<<i<<"...函数重载1..."<<endl;
    }
    void cal();//声明函数，在外部定义

};

inline void area01::cal()
{
    s1 = M_PI*r*r;
    cout<<"...calculating(定义在类外的成员函数)..."<<endl;    
}

int main()
{
    area01 a1;
    double r0;
    cout<<"输入待求面积的圆的半径：";
    cin>>r0;
    a1.set1(r0);   
    a1.set1(0);
    a1.cal();
    cout<<"半径为"<<r0<<"m的圆的面积为"<<a1.s1<<"m^2."<<endl;
    //cout<<a1.r<<endl;#

    return 0;
}