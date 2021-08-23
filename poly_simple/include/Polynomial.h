#ifndef Polynomial_h
#define Polynomial_h
#include <iostream>
#include <string>
using namespace std;
namespace XT {
namespace PolynomialSimplification{
class Polynomial
{
    public:
        Polynomial()
        {
            cout<<"调用成功"<<endl;
            data = "";
            size = data.size();
        }
        Polynomial(const string &str)
        {
            data = str;
            size = data.size();
        }
        Polynomial& operator=(const string &str)
        {
            this->data = str;
            size = data.size();
            return *this;
        }
        ~Polynomial()
        {
            cout<<"析构函数调用"<<endl;
        }
    //private:
        string data;//需要处理的字符串
        //string *charry;//字符串数组
        //int *molecular;//分子
        //int *Denominator;//分母
        int size;//需要化简字符串的长度
        //搜寻分子
};

}//end of namespace PolynomialSimplification
}//end of namespace XT
#endif // end of Polynomial_h
