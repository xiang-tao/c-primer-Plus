#include<iostream>
using namespace std;
class test
{
    int a;
    int b;
    public:
        int c;
        test()
        {
            a = 10;
            b = 100;
        }
        void print()
        {
            cout<<a<<endl;
        }
};

int main()
{
    test A;
    //cout<<A.a<<endl;
    A.print();
    return 0;
}
