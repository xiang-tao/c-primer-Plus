#include<iostream>
using namespace std;
#include<string>
class Person
{
    public:
        Person(int age)
        {
            m_age =new int(age);
        }
        int *m_age;
        ~Person()
        {
            if(m_age != NULL)
            {
                delete m_age;
                m_age = NULL;
            }
        }
};


int main()
{
    Person p1(18);
    Person p2(20);
    p2 = p1;
    cout<<*p1.m_age<<endl;
    cout<<*p2.m_age<<endl;
    return 0;
}
