// #include<stdio.h>
// int main(){
//     int x;
//     scanf("%d",&x);
//     printf("%d\n",(x+4)/5);
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;
int main() {
    string word;
    int upperCount = 0, lowerCount = 0;
    cout << "Enter a word: ";
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
    cout << "Converted word: " << word << endl;

    return 0;
}
