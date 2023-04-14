// Small factorials Problem Code: FCTRL2

// You are asked to calculate factorials of some small positive integers.




#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;
using namespace std;

inline cpp_int factorial(const int num)
{
    cpp_int res = 1;
    for (int i=1; i<= num; ++i)
        res *= i;
    
    return res;    
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << factorial(n) << endl;
    }

    return 0;
}
