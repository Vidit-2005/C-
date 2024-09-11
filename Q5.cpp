#include<iostream>
using namespace std;
class operate
{
    int real,imagin;
public:
    operate(int a,int b)
    {
        real=a;
        imagin=b;
    }

    operate(){}

    operate operator -(operate& ob1)
    {
        operate ob;
        ob.real=real-ob1.real;
        ob.imagin=imagin-ob1.imagin;
        return ob;
    }
    operate operator +(operate& ob1)
    {
        operate ob;
        ob.real=real+ob1.real;
        ob.imagin=imagin+ob1.imagin;
        return ob;
    }
    void show()
    {
        cout<<real<<" + "<<imagin<<"i"<<endl;
    }
};
main()
{
    operate ob1(12,23),ob2(1,2),ob3;

    ob3=ob1+ob2;
    ob1.show();
    ob2.show();
    ob3.show();
    cout<<"-----------"<<endl;
    ob3=ob1-ob2;
    ob1.show();
    ob2.show();
    ob3.show();
}
