#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double k1, k2, b1, b2, x0, z0;
    double x1 = 0.0, z1 = 0.0, a1 = 0.0;
    double x2 = 0.0, z2 = 0.0, a2 = 0.0;

    std::cout << "Input three numbers" << std::endl
              << "separated by white spaces:" << std::endl;
    std::cout << "X1   Z1   Angle1" << std::endl;
    std::cin >> x1 >> z1 >> a1;
    std::cin.get();
    std::cout << "X2   Z2   Angle2" << std::endl;
    std::cin >> x2 >> z2 >> a2;
    std::cin.get();

    k1 = tan(-a1 * M_PI / 180);
    k2 = tan(-a2 * M_PI / 180);
    b1 = x1 - k1 * z1;
    b2 = x2 - k2 * z2;
    z0 = (b1 - b2) / (k2 - k1);
    x0 = k1 * z0 + b1;

    std::cout << "Result (estimated):" << std::endl;
    std::cout << "X = " << std::fixed << std::setprecision(0)
              << x0 << std::endl;
    std::cout << "Z = " << std::fixed << std::setprecision(0)
              << z0 << std::endl;

    return 0;
}
