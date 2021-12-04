#include <cmath>
#include "lib.hpp"
Strophoid::Strophoid(){
    A.y = 0;
}

Strophoid::Strophoid(Point valueA, Point valueL){
    std::cout << "Enter point A" << std:: endl;
    setA(valueA);
    std::cout <<std::endl;
    std::cout << "Enter point L" << std:: endl;
    setL(valueL);
}

void Strophoid::setL(Point valueL){
    std::cout << "Enter x:";
    getNum(L.x);
    std::cout << "Enter y:";
    getNum(L.y);
}
void Strophoid::setA(Point valueA){
    std::cout << "(y = 0) Enter x:";
    getNum(A.x);
    A.y = 0;
}

double Strophoid::returnDistanceInPolarX(double u){
    return abs(A.x) * ((pow(u, 2)-1)/(pow(u, 2) + 1) );
}
double Strophoid::returnDistanceInPolarY(double u){
    return abs(A.x) * u * ((pow(u, 2)-1)/(pow(u, 2) + 1) );
}
double Strophoid::returnDistanceInPolar(){
    double angle = 0;
    double PI_2  = asin(1.0);
    std::cout<<"Enter angle (in degrees) : ";
    
    std::cin>>angle;
    double u = tan(angle*PI_2/180);
    double x = returnDistanceInPolarX(u);
    double y = returnDistanceInPolarY(u);
    return sqrt(pow(x, 2) + pow(y, 2));

    
}

double Strophoid::getAx() const { return A.x; }
double Strophoid::getAy() const { return A.y; }

double Strophoid::getLx() const { return L.x; }

double Strophoid::getLy() const { return L.y; }

double printRes1(Point res1){
    return res1.y;
}
double Strophoid::func(double x) const
{
    Point res1, res2;
    double alpha = abs(A.x) - 0;
    
    res1.x = x;
    res2.x = x;
    
    
    res1.y = sqrt((alpha-x)/(alpha+x));
    std::cout << "X: "<< printRes1(res1) << std::endl;
    
    res2.y = - sqrt((alpha-x)/(alpha+x));
    std::cout << "Y: ";
    return res2.y;
}

double Strophoid::returnR() const{
    return sqrt(2) * abs(A.x);
}


double Strophoid::returnS_AOM1() const{
    const double PI  =3.141592653589793238463;
    return 2 * pow(A.x, 2) - 0,5 * PI * pow(A.x, 2);
}

double Strophoid::returnS_OU_OV() const{
    const double PI  =3.141592653589793238463;
    return 2 * pow(A.x, 2) + 0,5 * PI * pow(A.x, 2);
}

double Strophoid::returnV() const{
    const double PI  =3.141592653589793238463;
    return PI * pow(abs(A.x), 3) * (2* log(2) - 4/3);
}
