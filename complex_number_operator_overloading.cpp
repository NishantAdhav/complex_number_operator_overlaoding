/*NISHANT ADHAV; CLASS :SE COMP A ;21CO003
COMPLEX NUMBER..
1)default constructor
2)overlaod operator+ to add two complex number
3)overlaod operator* to multiply to complex number
4)overlaod operator<< and >> to print and read complex number*** */

#include<iostream>
#include<cmath>
using namespace std;
class Complex
{
    public:
        int real;
        int imag;
        Complex()                 //default constructor for initialization a complex number
        {
            real=imag=0;
        }
        
        Complex operator+(Complex );
        Complex operator-(Complex );
        Complex operator*(Complex );
        //OVERLAOD OPERATOR << AND >> TO PRINT AND READ COMPLEX NUMBER
        friend istream &operator >>(istream &in, Complex  &obj)
        {        
            cout<<"Enter real part:";
            in>>obj.real;
            cout<<"Enter imag part: ";
            in>>obj.imag;
            return(in);
        }
        friend ostream & operator<<(ostream &out,Complex  &obj)
        {
            
            out<<obj.real<<"+"<<obj.imag<<"i"<<endl;
            return(out);
        } 
};

//2) overload operator + to add two complex number
Complex Complex::operator+(Complex C1)
{ 
    Complex add;
    add.real=real+C1.real;
    add.imag=imag+C1.imag;
    return (add);
}

//3)overlaod operator - to subtract two Complex number
Complex Complex:: operator-(Complex C1)
{
    Complex sub;
    sub.real=real-C1.real;
    sub.imag=imag-C1.imag;
    return (sub);
}

//3)overlaod operator * to Multiplication of two Complex number
Complex Complex::operator*(Complex C1)
{
    Complex mul;
    mul.real=(real*C1.real)-(imag*C1.imag);
    mul.imag=(real*C1.imag)+(imag*C1.real);
    return (mul);
}

int main()
{
    Complex c1,c2,c3,c4,c5;
    cout<<"default constructor value: "<<endl;
    cout<<c1;
    cout<<"enter first number:"<<endl;
    cin>>c1;
    cout<<"enter second number: "<<endl;
    cin>>c2;
    c3=c2+c1;
    c4=c1-c2;
    c5=c1*c2;
    cout<<"the first number is:"<<endl;
    cout<<c1;
    cout<<"the second number is:"<<endl;
    cout<<c2;
    cout<<"the Addition is: "<<endl;
    cout<<c3;
    cout<<"the Subtraction is:"<<endl;
    cout<<c4;
    cout<<"the Multiplication is:"<<endl;
    cout<<c5;
    return 0;
}
    
    
    
