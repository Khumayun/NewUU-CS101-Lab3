//
// Created by ...
//
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "PROBLEM 1\n";

    cout << "PROBLEM 2\n";

    cout << "PROBLEM 3\n";

    cout << "PROBLEM 4\n";

    cout << "PROBLEM 5\n";

    cout << "PROBLEM 6\n";

    int p6_var1, p6_var2;
    cin >> p6_var1;
    cin >> p6_var2;
    cout << "Sum: " <<
                p6_var1 << " + " <<
                p6_var2 << " = " <<
                p6_var1+p6_var2 << endl;

    cout << "PROBLEM 7\n";
    float x, y, t;
    cin >> x >> y;
    t = 3 * (x*x + 3) / (y/4 + 3);
    cout << "t=" << t << endl;

    cout << "PROBLEM 8\n";
    float area, diameter;
    cin >> diameter;
    area = 4.0 * 3.14 * pow(diameter, 2) / 4.0;
    cout << "Area: " << area << endl;

    cout << "PROBLEM 9\n";
    float a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    cout << "t=" << (a2-a1)/a3 << endl;

    cout << "PROBLEM 10\n";
    /*
     * d - miles
     * fuelEff - miles/gall
     * price - $/gall
     * total_price = (d / fuelEff) * price
     */
    float d, fuelEff, price, total_price;
    cin >> d >> fuelEff >> price;
    total_price = (d / fuelEff) * price;
    cout << "The cost of driving is $" <<
                        total_price << endl;

    cout << "PROBLEM 11\n";
    // 1.13e3 -> 1.13 * 10^3
    // 411e-4 -> 411 * 10^(-4)
    double p11_var1 = 1.13e3;
    double p11_var2 = 411e-4;
    cout << p11_var1 << ' ' << p11_var2 << endl;

    cout << "PROBLEM 12\n";
    int admitted_student = 241;
    int number_groups = 11;
    int first_group, last_group;
    first_group = admitted_student / number_groups;
    last_group = first_group + (admitted_student % number_groups);
    cout << "In first group: " << first_group << endl;
    cout << "In last group: " << last_group << endl;

    cout << "PROBLEM 13\n";

    cout << "PROBLEM 14\n";

    cout << "PROBLEM 15\n";

    cout << "PROBLEM 16\n";

    cout << "PROBLEM 17\n";

    cout << "PROBLEM 18\n";

    cout << "PROBLEM 19\n";

    cout << "PROBLEM 20\n";

    cout << "PROBLEM 21\n";

    cout << "PROBLEM 22\n";

    return 0;
}