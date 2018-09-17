#ifndef LONG_INT_H
#define LONG_INT_H

#include <vector>
#include <string>
#include <ostream>

using std::string;
using std::vector;
using std::ostream;

class long_int {
    //member variable

    vector<int> int_arr; //integer represented in REVERSE order
    int length;

    long_int(string in);

    friend long_int& operator+(long_int& l, long_int& r);
    friend long_int& operator-(long_int& l, long_int& r);

    friend ostream& operator<<(ostream& os, const long_int& lint);

};

#endif
