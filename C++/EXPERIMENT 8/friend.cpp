#include <iostream>
#include<string.h>
using namespace std;
class B;
class A{
      int x;
      public:
         void setdata(int i){
             x=i;
         }
         friend void max(A,B);
         
};
class B{
    int y;
     public:
         void setdata(int i){
             y=i;
         }
         friend void max(A,B);
         
};
void max(A a,B b){
     if (a.x>b.y){
         cout<<"maximum number is "<<a.x<<endl;
     }
     else(a.x<b.y);{
         cout<<"maximum number is "<<b.y<<endl;
     }
}
int main(){
    A a;
    B b;
    a.setdata(10);
    b.setdata(20);
    max(a,b);
    return 0;
}

