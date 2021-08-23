#include<iostream>
using namespace std;
#include<string>
class Person
{
    public:
        int age;
        string name;
        void show()
        {
            if (this == NULL)
            {
                return;
            }
            cout<<"age= "<<this->age<<endl;
        }
};

int main()
{
    Person p;
    p.age = 20;
    Person *p1 = &p;
    p1->show();
    return 0;
}
