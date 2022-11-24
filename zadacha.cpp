#include <iostream>
#include <cmath>
#include <numbers>
double mycos (double x)
{
    double k = 1;
    double s = 0;
    double const twopi = 2. * std::numbers::pi;
    x = x - int (x / twopi) * twopi;
    for (int i = 1; ; ++i)
    {
        k = k * ((-x * x) / ((2 * i - 1) * 2 * i));
        if (s + k == s)
            return 1 + s;
        s = s + k;
    }
    return 1 + s;
}

#include <iomanip>
int main ()
{ 
    double x = 0.1;
    std::cout << std::setprecision(16);
    std::cout << mycos(x) << std::endl;
    std::cout << std::cos(x) << std::endl;
}