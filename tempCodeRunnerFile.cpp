#include<iostream>
using namespace std;
class plus
{ private:
    int a,b,c;
    public:
    plus()
    {
        a=0;
        b=0;
        c=0;

    }
    plus(int d,int e,int f)
    {
        a=d;
        b=e;
        c=f;
    }
    friend plus operator+(plus,plus);
    void show(){
        
   cout<<"value of a:-"<<a;
    cout<<"value of b:-"<<b;
    cout<<"value of c:-"<<c;
    }
   // {
     //   cout<<"value of a:-"<<a;
  //  cout<<"value of b:-"<<b;
    //cout<<"value of c:-"<<c;

    //}

   
};

plus operator+(plus x, plus y)
{
    plus temp;
    temp.a=x.a+y.a;
    temp.b=x.b+y.b;
    temp.c=x.c+y.c;
            return temp;

}

int main()
{clrscr();
plus ob1(15,21,12),ob2(6,7,4),ob;
ob1.show();
ob2.show();
ob = ob1+ob2;
ob.show();
return 0;
}