/*
#include <iostream>
#include <string>
#include <stack>
#define ll long long
using namespace std;

string bracket;

int main()
{
    while (cin >> bracket)
    {
        stack<char> stack_;
        bool check = true;

        ll len = bracket.length();
        for (ll i = len - 1; i >= 0; i--)
        {
            char m = bracket[i];

            if (m == ')' || m == ']' || m == '}') {
                stack_.push(m);
                continue;
            }           
            if (stack_.empty()) {
                check = false;
                break;
            }
            if (m == '(' && stack_.top() == ')') {
                stack_.pop();
                continue;
            }
            if (m == '[' && stack_.top() == ']') {
                stack_.pop();
                continue;
            }
            if (m == '{' && stack_.top() == '}') {
                stack_.pop();
                continue;
            }
            check = false;
            break;
                
        }

        if (check)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}
*/