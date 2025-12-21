#include <iostream>
#include <string>
using namespace std;
int main() {
    string word;
    int upperCount = 0, lowerCount = 0;
    cin >> word;
    for (char c : word) {
        if (isupper(c))
            upperCount++;
        else
            lowerCount++;
    }
    if (upperCount > lowerCount) {
        for (char &c : word)
            c = toupper(c);
    } else {
        for (char &c : word)
            c = tolower(c);
    }
    cout << word << endl;

    return 0;
}