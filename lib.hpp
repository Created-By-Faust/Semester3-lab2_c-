#ifndef lib_hpp
#define lib_hpp
#include <stdio.h>
#include <iostream>

template <class T>
int getNum(T &a)
{
std::cin >> a;
if (!std::cin.good())
return -1;
return 1;
}
struct Point{
    double x;
    double y;
    Point(double x0 = 0, double y0 = 0) :x(x0), y(y0){}
};
class Strophoid{
private:
    Point A;
    Point L;
public:
    Strophoid();
    Strophoid(Point valueA, Point valueL);
    
    void setL(Point valueL);
    void setA(Point valueA);

    double getAx() const;
    double getAy() const;
    double getLx() const;
    double getLy() const;
    double func(double x) const; // координату y в декартовой системе координат, принадлежащую строфоиде в зависимости от x
    //расстояние до центра в полярной системе координат в зависимости от угла.
    double returnDistanceInPolarX(double u);
    double returnDistanceInPolarY(double u);
    double returnDistanceInPolar(); // 
    double returnR() const; // радиус кривизны в узловой точке.
    double returnS_AOM1() const; // площадь петли AOM1.
    double returnS_OU_OV() const; //площадь между ветвями OU’, OV’ и асимптотой.


    double returnV() const; // объем тела, произведенного вращением петли около оси OX.
    
};
#endif /* lib_hpp */
