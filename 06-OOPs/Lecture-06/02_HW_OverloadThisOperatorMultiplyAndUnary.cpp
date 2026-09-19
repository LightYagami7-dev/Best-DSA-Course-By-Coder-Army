#include<iostream>
using namespace std;

// Q2. Overload this Operator ( * Multiply) and Unary Operator (- Minus), with your own Example.
class Complex
{
    int real, img;

public:
    Complex(){};

    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }

    void display()
    {
        cout << real << " + i" << img << endl;
    }

    Complex operator+(Complex &C)
    {
        Complex ans;
        ans.real = real + C.real;
        ans.img = img + C.img;

        return ans;
    }

    Complex operator*(Complex &C)
    {
        Complex ans;
        ans.real = real *+ C.real;
        ans.img = img * C.img;

        return ans;
    }

    Complex operator-()
    {
        Complex ans;
        ans.real = -real;
        ans.img = -img;

        return ans;
    }
};

int main()
{
    return 0;
}
