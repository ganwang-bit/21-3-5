//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    cout << "Hello world!" << endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class Person
//{
//public:
//    void show(){cout<<"person show"<<endl;}
//};
//class Person2
//{
//public:
//    void show(){cout<<"person2 show"<<endl;}
//};
//template <class T>
//class Myclass
//{
//public:
//    T i;
//    void func()
//    {
//        i.show();
//    }
//};
//int main()
//{
//    Myclass <Person>m;
//    m.func();
//    Myclass <Person2>m2;
//    m2.func();
//    return 0;
//}
//#include<iostream>
//using namespace std;
//#include<string>
//template<class T1,class T2>
//class person
//{
//public:
//    T1 name;
//    T2 age;
//    person(T1 name,T2 age)
//    {
//        this->name=name;
//        this->age=age;
//        cout<<"person"<<endl;
//    }
//    person(person &p)
//    {
//        this->name=p.name;
//        this->age=p.age;
//        cout<<"person::person()"<<endl;
//    }
//    void show()
//    {
//        cout<<"name"<<" "<<name<<" "<<"age"<<" "<<age<<endl;
//    }
//};
//template<class T>
//void printperson(T p)
//{
//    p.show();
//}
//int main()
//{
//    person<string,int>p("�����",999);
//    printperson(p);
//    return 0;
//}
