#include<iostream>
#include<string>
using namespace std;
//结构体的创建和使用
//1.创建学生数据类型：包含学生的姓名、年龄、分数

struct Student
{
    //成员列表
    //姓名
    string name;
    //年龄
    int age;
    //分数
    int score;
}s3;//s3就相当于顺便创建的结构体变量

//2.通过学生类型创建具体学生

int main()
{
//2.1 struct Student s1
//说明：在结构体创建变量时struct关键字可以省略即：Student s1；
    //struct Student s1;
    Student s1;
    //给s1属性赋值，通过.访问结构体变量中的属性
    s1.name = "zhangsan";
    s1.age = 18;
    s1.score = 100;
    cout<<"name:"<<s1.name<<"age:"<<s1.age<<"score:"<<s1.score<<endl;

//2.2 struct Student s2 = { ... }
    struct Student s2={"lisi",19,80};
    cout<<"name:"<<s2.name<<"age:"<<s2.age<<"score:"<<s2.score<<endl;

//2.3 在定义结构体时候顺便创建结构体变量
    s3.name = "wangwu";
    s3.age = 18;
    s3.score = 90;
    cout<<"name:"<<s3.name<<"age:"<<s3.age<<"score:"<<s3.score<<endl;
    return 0;
}
