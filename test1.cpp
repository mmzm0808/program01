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
        cout<<i<<"...��������1..."<<endl;
    }
    void cal();//�������������ⲿ����

};

inline void area01::cal()
{
    s1 = M_PI*r*r;
    cout<<"...calculating(����������ĳ�Ա����)..."<<endl;    
}

int main()
{
    area01 a1;
    double r0;
    cout<<"������������Բ�İ뾶��";
    cin>>r0;
    a1.set1(r0);   
    a1.set1(0);
    a1.cal();
    cout<<"�뾶Ϊ"<<r0<<"m��Բ�����Ϊ"<<a1.s1<<"m^2."<<endl;
    //cout<<a1.r<<endl;#

    return 0;
}