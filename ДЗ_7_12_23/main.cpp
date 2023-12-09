#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

string sumSrt(const string& original, const string& substring)
{
    string result = original;
    size_t pos = result.find(substring, 0);

    while (pos != string::npos)
    {
        result.insert(pos, "(");
        result.insert(pos + substring.length() + 1, ")");
        pos = result.find(substring, pos + 3);
    }

    return result;
}

int main()
{
    string str1 = "Viktor Romashov";
    string str2 = "o";

    string result = sumSrt(str1, str2); 

    cout << result << endl;

    return 0;
}