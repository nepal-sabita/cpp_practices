/* Print the sum, difference and product of two complex numbers by creating a class named 'Complex' with
separate functions for each operation whose real and imaginary parts are entered by the user.*/

#include <iostream>
#include <cmath>
using namespace std;

class Complex
{

  float imag, real;

public:
  Complex(const float &r, const float &i)
  {
    real = r;
    imag = i;
  }

  Complex calculateSum(Complex &c1, Complex &c2)
  {
    Complex c3(0, 0);
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    print(c1, c2, c3, "Sum");
    return c3;
  }

  Complex calculateDiff(Complex &c1, Complex &c2)
  {
    Complex c3(0, 0);
    c3.real = c1.real - c2.real;
    c3.imag = c1.imag - c2.imag;
    print(c1, c2, c3, "Diff");
    return c3;
  }

  Complex calculateProd(Complex &c1, Complex &c2)
  {
    Complex c3(0, 0);
    c3.real = c1.real * c2.real;
    c3.imag = c1.imag * c2.imag;
    print(c1, c2, c3, "Product");
    return c3;
  }

 string getSign(const float &i)
  {
    if (i < 0)
    {
      return "-";
    }
    else
    {
      return "+";
    }
  }

 void print(Complex c1, Complex c2, Complex c3, string type)
  {
    cout << "The " << type << " of two complex numbers " << c1.real << getSign(c1.imag) << abs(c1.imag) << "i"
         << " and " << c2.real << getSign(c2.imag) << abs(c2.imag) << "i"
         << " is " << c3.real << getSign(c3.imag) << abs(c3.imag) << "i" << endl;
  }
};

int main()
{
  float r1, r2, i1, i2;
  /*cout << "Enter first complex number" << endl;
  cout << "Real Part = ";
  cin >> r1;
  cout << "Imaginary Part = ";
  cin >> i1;
  cout << "Enter second complex number" << endl;
  cout << "Real Part = ";
  cin >> r2;
  cout << "Imaginary Part = ";
  cin >> i2;
  Complex c1(r1, i1);
  Complex c2(r2, i2);*/

Complex s1(r1, r2);
Complex sum = s1.calculateSum(c1, c2);
 Complex diff = s1.calculateDiff(c1, c2);
Complex prod = s1.calculateProd(c1, c2);

 /* Complex calculateSum(c1, c2);
  Complex calculateDiff(c1, c2);
  Complex calculateProd(c1, c2);*/

  return 0;
}