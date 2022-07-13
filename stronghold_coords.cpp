#include <iostream>
#include <iomanip>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main()
{
  double x1 = 0.0, z1 = 0.0, a1 = 0.0;
  double x2 = 0.0, z2 = 0.0, a2 = 0.0;

  cout << "Input three numbers separated by spaces:" << endl;
  cout << "X1   Z1   Angle1" << endl;
  cin >> x1 >> z1 >> a1; cin.get();
  cout << "X2   Z2   Angle2" << endl;
  cin >> x2 >> z2 >> a2; cin.get();

  double k1 = tan(-a1 * M_PI / 180);
  double k2 = tan(-a2 * M_PI / 180);
  double b1 = x1 - k1 * z1;
  double b2 = x2 - k2 * z2;
  double z0 = (b1 - b2) / (k2 - k1);
  double x0 = k1 * z0 + b1;

  cout << "Result (estimated):" << endl;
  cout << "X = " << fixed
       << setprecision(0) << x0 << endl;
  cout << "Z = " << fixed
       << setprecision(0) << z0 << endl;

  return 0;
}
