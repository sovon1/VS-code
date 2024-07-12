#include<iostream>
using namespace std;
class shape 
{
   public:
   double dim1,dim2;
   shape(double dim1,double dim2)
   {
    this ->dim1 = dim1;
    this ->dim2 = dim2;
   }
  virtual double area()
  {
    return 0;
  }
};
  //triangle

  class Triangle : public shape
  {
    public:
    Triangle(double dim1,double dim2)
    :shape(dim1,dim2)
    {
        
    }
    double area()
    {
        return 0.5*dim1*dim2;
    }
  };

    class Rectangle : public shape
  {
    public:
    Rectangle(double dim1,double dim2)
    :shape(dim1,dim2)
    {
        
    }
    double area()
    {
        return dim1*dim2;
    }
  };
int main()
{

 shape *p;
 Triangle t(10,20);
 Rectangle r(10,20);
  p =&t;
  p->area();
  cout<<"Triangle area : "<< p->area()<<endl;
   p =&r;
  p->area();
  cout<<"Rectangle area : "<<p->area()<<endl;


}
