#include <string>
#include <iostream>
#include <cmath>
#include <vector>
#include "long_int.h"
using std::pow;
using std::cout;
using std::endl;
using std::string;
using std::vector;

/**
 * split the input intger(represented by string) into two
 * @param string s; input integer
 * @param int n; number of digits the integer has
 * @return vector<string>; the two integers after being split
 */
vector<string> split_string(string s, int n) {
    cout << "splitting string: " << s << endl;
    string s1 = s.substr(0, n/2);
    string s2 = s.substr(0+n/2);
    //cout << s1 << " " << s2 << endl;
    vector<string> new_strings = {s1, s2};
    return new_strings;
}



// string multiply(string x, string y, int n) {
//     if (n == 1) {
//         return (int)x*(int)y;
//     }
//     else {
//         string a = x / pow(10, n/2);
//         string b = x - a * pow(10, n/2);
//         string c = y / pow(10, n/2);
//         string d = y - c * pow(10, n/2);
//         cout << "a: " << a << " b: " << b << " c: " << c << " d: " << d << endl;
//         string p1 = multiply(a, c, n/2);
//         string p2 = multiply(b, d, n/2);
//         string p3 = multiply(a+b,c+d, n/2);
//         cout << "p1: " << p1 << "p2: " << p2 << "p3: " << p3 << endl;
//         return pow(10, n)*p1 + pow(10, n/2)*(p3-p1-p2) + p2;
//     }
// }
