#include<iostream>
using namespace std;

// Q3. Create a Virtual Function Example in C++ with your own example.
class shape{
    public:
    virtual void shapeDrawer(){
        cout<<"Drawing a shape "<<endl;
    } 
};

class circle: public shape{
    void shapeDrawer(){
        cout<<"Drawing a circle "<<endl;
    }
};

class rectangle: public shape{
    void shapeDrawer(){
        cout<<"Drawing a rectangle "<<endl;
    }
};

int main(){}
