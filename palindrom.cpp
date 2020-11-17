

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void deleteSpace(string& str);

void reverseStr(string& str);

void to_upper_case(string& str);

int main()
{
    string text1 = "Ela tropi portale";

    string text2 = "Mo¿e jutro dama da tortu je¿om";

    deleteSpace(text1);

    to_upper_case(text1);

    string temp = text1;

    reverseStr(text1);

   if (temp == text1)
       {
           cout << "Wyrazenie jest palindromem. " << endl;
       }
    else
        cout << "Wyrazenie nie jest palindromem. " << endl;

    return 0;
}

void deleteSpace(string& str)
{
   str.erase(remove(str.begin(), str.end(), ' '), str.end());
}

void reverseStr(string& str)
{
    int n = str.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

void to_upper_case(string& str)
{
    transform(str.begin(), str.end(), str.begin(), ::toupper);
}
