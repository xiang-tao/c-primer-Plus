#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//常用的查找算法 find

//查找内置数据类型 例如vector

void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    //查找容器中是否有5这个元素
    vector<int>::iterator it = find(v.begin(), v.end(), 50);
    if (it == v.end())
    {
        cout << "没有找到！" << endl;
    }
    else
    {
        cout << "找到了！" << endl;
    }
}

//查找自定义数据类型

class Person
{
public:
    Person(string name, int age)
    {
        this->m_name = name;
        this->m_age = age;
    }

    //重载==符号，让find知道如何对比Person数据类型

    bool operator==(const Person &p)
    {
        if(this->m_name == p.m_name && this->m_age == p.m_age)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    string m_name;
    int m_age;
};

void test02()
{
    vector<Person> v;
    Person p1("aaa",10);
    Person p2("bbb",20);
    Person p3("ccc",30);
    Person p4("ddd",40);
    Person p5("eee",50);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    vector<Person>::iterator it = find(v.begin(), v.end(), p2);
    if (it == v.end())
    {
        cout << "没有找到！" << endl;
    }
    else
    {
        cout << "找到了！" << endl;
    }
}

int main()
{
    //test01();
    test02();
    return 0;
}