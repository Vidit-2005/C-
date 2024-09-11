#include<iostream>
using namespace std;
class operate
{
    int x,y;
public:
    operate(int a,int b)
    {
        x=a;
        y=b;
    }

    operate(){}

    friend operate operator -(operate& ob1)
    {
        operate ob;
        ob.x=-ob1.x;
        ob.y=-ob1.y;
        return ob;
    }

    friend operate operator ++(operate& ob1)
    {
        operate ob;
        ob.x=++ob1.x;
        ob.y=ob1.y;
        return ob;
    }

    friend operate operator ++(operate& ob1,int)
    {
        operate ob;
        ob.y=ob1.y++;
        ob.x=ob1.x;
        return ob;
    }
    friend operate operator --(operate& ob1);

    friend operate operator --(operate& ob1,int)
    {
        operate ob;
        ob.y=ob1.y--;
        ob.x=ob1.x;
        return ob;
    }
    void show()
    {
        cout<<"x: "<<x<<endl<<"y: "<<y<<endl;
    }
};
operate operator --(operate& ob1)
{
    operate ob;
    ob.x=--ob1.x;
    ob.y=ob1.y;
    return ob;
}
main()
{
    operate ob1(12,23), ob2,ob3;

    ob2=++ob1;
    ob1.show();
    ob2.show();

    ob2= ob1++;
    ob1.show();
    ob2.show();

    ob1=--ob2;
    ob1.show();
    ob2.show();

    ob1= ob2--;
    ob1.show();
    ob2.show();

    ob3=-ob1;
    ob1.show();
    ob3.show();
}
