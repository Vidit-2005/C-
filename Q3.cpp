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

    operate operator -()
    {
        operate ob;
        ob.x=-x;
        ob.y=-y;
        return ob;
    }

    operate operator ++()
    {
        operate ob;
        ob.x=++x;
        ob.y=y;
        return ob;
    }

    operate operator ++(int)
    {
        operate ob;
        ob.y=y++;
        ob.x=x;
        return ob;
    }
operate operator --()
    {
        operate ob;
        ob.x=--x;
        ob.y=y;
        return ob;
    }

    operate operator --(int)
    {
        operate ob;
        ob.y=y--;
        ob.x=x;
        return ob;
    }
    void show()
    {
        cout<<"x: "<<x<<endl<<"y: "<<y<<endl;
    }
};
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
