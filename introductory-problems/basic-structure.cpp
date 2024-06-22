#include <bits/stdc++.h>

/**
 * Ways to shorten the code:
 * 
 * #define = it is a macro, wich means that certain
 * strings in the code will be changed before the compilation.
 * 
 * typedef = it is used to create an alias for an existing data type.
 * 
 * typedef provides type safety because it is part of the C++ type system,
 * while #define does not since it is a preprocessor text substitution.
 *  
 */

typedef long long ll;
#define REP(i,a,b) for (int i = a; i <= b; i++)

using namespace std;

/**
 * @brief Use the freopen statements to reuse standard I/O for file I/O.
 * 
 * @param s the input filename without the extension
 */
void setIO(string s) {

	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    setIO("basic-structure");

    /**
     * The int type is a 32-bit type with a value range of −2^31 . . . 2^31 − 1.
     * While the long type has a value range of -2^63...2^63 - 1.
     * G++ compiler also provides a 128-bit type __int128_t with a value range of −2127 . . . 2127 − 1
     */
    int a;
    long long b;

    /**
     * In some contest systems, files are used for input and output.
     * An easy solution for this is to write the code as usual using
     * standard streams as below.
     *
     * After this, the program reads the input from the file ”input.txt”
     * and writes the output to the file ”output.txt”.
     */
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    /**
     * It is risky to compare floating point numbers with the == operator,
     * because it is possible that the values should be equal but they
     * are not because of precision errors. A better way to compare floating
     * point numbers is to assume that two numbers are equal if the difference
     * between them is less than ε, where ε is a small number.
     * In practice, the numbers can be compared as follows (ε = 10−9):
     */

    if (abs(a - b) < 1e-9)
    {
        // a and b are equal
    }
    return 0;
}