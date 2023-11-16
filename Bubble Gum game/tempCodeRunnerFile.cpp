#include <iostream>
#include <string>

using namespace std;

int minInsertionsToPalindrome(string str, int left, int right) {
    if (left >= right)
        return 0;

    if (str[left] == str[right])
        return minInsertionsToPalindrome(str, left + 1, right - 1);

    return 1 + min(minInsertionsToPalindrome(str, left + 1, right), minInsertionsToPalindrome(str, left, right - 1));
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int minInsertions = minInsertionsToPalindrome(str, 0, str.length() - 1);
    cout << "Minimum insertions needed to form a palindrome: " << minInsertions << endl;

return 0;
}