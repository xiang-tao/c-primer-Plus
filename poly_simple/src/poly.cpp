#include <iostream>
#include "../include/Polynomial.h"
//typedef typename XT::PolynomialSimplification::swap swap;
typedef typename XT::PolynomialSimplification::Polynomial Polynomial;
int main()
{
    Polynomial p;

    Polynomial p1("hello");
    p = p1;
    //p1 = "nihao" ;
    //p = "5/3xy^2+2yxy+2x^2y+x-3/2yxy+2x+y^2-x+1";
}
