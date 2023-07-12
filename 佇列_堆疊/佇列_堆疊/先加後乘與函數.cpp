/*
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#define ll long long
#define oo 1e10
using namespace std;

ll g(string str);
int main()
{
    string str;
    cin >> str;

    cout << g(str);
}

ll f(string str);
ll g(string str)
{
    ll i = 0, temp = 0;
    stack<ll> multiply;
    string str1;
    cout << "str.length() = " << str.length() << "\n";
    while(i < str.length()) {
        cout << "i = " << i << "\n";
        if (str[i] == 'f') 
        {
            cout << "into f" << "\n";
            ll j = i + 2;
            stack<ll> sta;
            sta.push(str[++i]);
            while (!sta.empty()) {   
                i++;
                if (str[i] == '(')
                    sta.push(str[i]);
                else if (str[i] == ')')
                    sta.pop(); 
            }
            str1 = str.assign(str.begin() + j, str.begin() + i); 
            temp += f(str1);
            str1.clear();
        }
        else if (str[i] == '*') {
            if (!str1.empty())
                temp += stol(str1);
            multiply.push(temp);
            temp = 0;
            str1.clear();
        }
        else if (str[i] == '+') {
            if (!str.empty())
                temp += stol(str1);
            str1.clear();
        }
        else {
            str1 += str[i];
        }
        i++;
    }

    cout << str1 << "\n";
    if (!str1.empty())
    {
        temp += stol(str1);
        str1.clear();
    }
    multiply.push(temp);
    temp = 1;

    while (!multiply.empty()) {
        cout << "multiply top = " << multiply.top() << "\n";
        temp *= multiply.top();
        multiply.pop();
    }

    return temp;
}

ll f(string str)
{
    ll temp = 0, min = oo, max = -1, i = 0, j = 0;
    string str1;

    for (; i < str.length(); i++){
        if (str[i] == ',') {
            temp = stol(str1);
            if (temp < min)
                min = temp;
            if (temp > max)
                max = temp;
            j = i + 1;
            str1.clear();
        }
        else if (str[i] == '+' || str[i] == '*' || str[i] == 'f') {
            stack<ll> sta;
            while (i < str.length()) {
                if (str[i] == ',' && sta.empty())
                    break;
                if (str[i] == '(')
                    sta.push('(');
                else if (str[i] == ')')
                    sta.pop();
                i++;
            }

            str1 = str.assign(str.begin() + j, str.begin() + i);
            temp = g(str1);
            if (temp < min)
                min = temp;
            if (temp > max)
                max = temp;
            j = i + 1;
            str1.clear();
        }
        else {
            str1 += str[i];
        }
    }

    if (!str1.empty()) {
        temp = stol(str1);
        if (temp < min)
            min = temp;
        if (temp > max)
            max = temp;
        str1.clear();
    }

    return (max - min);
}
*/
