#include <iostream>
#include <string>
#include <algorithm> 
#include <cctype>    
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    int comparison_result = s1.compare(s2);

    if (comparison_result == 0) {
        cout << "0";
    } else if (comparison_result > 0) {
        cout << "1";
    } else {
        cout << "-1";
    }

    return 0;
}
