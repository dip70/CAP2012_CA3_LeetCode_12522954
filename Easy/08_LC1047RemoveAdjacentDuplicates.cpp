#include <iostream>
#include <string>

using namespace std;

int main() {

    string s = "abbaca";


    string result = "";


    for (char c : s) {

        if (!result.empty() && result.back() == c) {
            result.pop_back();
        }

        else {
            result.push_back(c);
        }
    }


    cout << "Final Output: " << result << endl;

    return 0;
}
