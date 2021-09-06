#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(int val)
{
    cout << val << endl;
}

void test01()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    //for_each(v.begin(), v.end(), print);
    vector<int> v1;
    v1.resize(v.size());
    //copy(v.begin(), v.end(), v1.begin());
    copy_n(v.begin(), v.size(), v1.begin());
    for_each(v1.begin(), v1.end(), print);
}

int main()
{
    test01();
    return 0;
}
