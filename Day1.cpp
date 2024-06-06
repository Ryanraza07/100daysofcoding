#include <iostream>
#include <algorithm> // for reverse

using std::string;
using std::cout;
using std::endl;

void reverseString(string &str) {
    std::reverse(str.begin(), str.end());
}

int main() {
    string str = "Hello, World!";
    reverseString(str);
    cout << str << endl;
    return 0;
}
