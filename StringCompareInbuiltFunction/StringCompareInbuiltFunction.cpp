#include<string>
#include <iostream>
using namespace std;
int strcmpFunction(string firstString, string secondString) {
    int lengthOfString = min(firstString.size(), secondString.size()); 
        for (int stringIndex = 0; stringIndex < lengthOfString; stringIndex++) {
            if (firstString[stringIndex] == secondString[stringIndex] || ((firstString[stringIndex] + 32) == (secondString[stringIndex])) || ((firstString[stringIndex]) == (secondString[stringIndex] + 32))) {
                continue;
            }
            else if (firstString[stringIndex] > secondString[stringIndex]) {
                return 1;
            }
            else {
                return -1;
            }
        }
    return 0;
}
int main()
{
    string firstString, secondString;
    cin >> firstString >> secondString;
    cout << firstString << endl << secondString << endl;
    cout << strcmpFunction(firstString, secondString);
    return 0;
}
