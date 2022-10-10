# include "math.h"
# include "area01.h"
# include "iostream"
using namespace std;

inline void area01::cal()
{
    s1 = M_PI*r*r;
    cout<<"...calculating(定义在类外的成员函数)..."<<endl;    
}