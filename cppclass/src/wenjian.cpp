#include <iostream>
#include <fstream>
using namespace std;

void test01()
{
    ofstream ofs;
    ofs.open("test.dat", ios::out);

    ofs << "x y" << endl;
    ofs << "1 1" << endl;
    ofs << "2 2" << endl;
    ofs << "3 3" << endl;
    ofs << "4 4" << endl;
    ofs << "5 5" << endl;
    ofs << "6 6" << endl;

    ofs.close();
}

int main()
{

    test01();

    return 0;
}