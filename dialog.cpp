#include "dialog.hpp"


int dialog() {
    int res;
    Point point_A, point_L;

    Strophoid example(point_A, point_L);
    
    while (true) {
        std::cout << example.getA();
        example.getL();
        std::cout
        <<"\n"
        << "1. Вернуть координату y в декартовой системе координат, принадлежащую строфоиде в зависимости от x\n"
        << "2. Вернуть расстояние до центра в полярной системе координат в зависимости от угла\n"
        << "3. Вернуть радиус кривизны в узловой точке\n"
        << "4. Вернуть площадь петли AOM1\n"
        << "5. Вернуть объем тела, произведенного вращением петли около оси OX\n"
        << "6. Вернуть площадь между ветвями OU’, OV’ и асимптотой\n"
        << "7. Выход"
        << std::endl;

        if (!getNum(res))
            return -1;

        switch (res) {
            case 1:
                double x;
                std::cout << "Enter x:";
                getNum(x);
                std::cout << example.func(x) << std::endl;
                break;
            case 2:
                std::cout << "Distance to center in polar coordinate system as a function of angle = " << example.returnDistanceInPolar() << std::endl;
                break;
            case 3:
                std::cout << "Radius of curvature at the nodal point = "  << example.returnR() << std::endl;
                break;
            case 4:
                std::cout << "Loop area AOM1 = " << example.returnS_AOM1() << std::endl;
                break;
            case 5:
                std::cout << "The volume of the body produced by the rotation of the loop about the OX axis = " << example.returnV() << std::endl;
                break;
            case 6:
                std::cout << "he area between the branches OU ', OV' and the asymptote = " << example.returnS_OU_OV()<< std::endl;
                break;
            case 7:
                return 0;
            default:
                std::cout << "Unknown command" << std::endl;
                break;
        }
    }
}
