//#include <iostream>
//#include <stack>
//#define ll long long
//using namespace std;
//
//int main()
//{
//    ll num1, num2, sum = 0;
//    char cha;
//    stack<ll> compute;
//
//    while (cin >> cha)
//    {
//        if (cha == '*') {
//            num1 = compute.top();  compute.pop();
//            cin >> num2;
//            compute.push(num1 * num2);
//        }
//        else if (cha == '/') {
//            num1 = compute.top();  compute.pop();
//            cin >> num2;
//            compute.push(num1 / num2);
//        }
//        else if (cha == '+') {
//            cin >> num1;
//            compute.push(num1);
//        }
//        else if (cha == '-') {
//            cin >> num1;
//            compute.push(num1 * (-1));
//        }
//        else {
//            num1 = cha - '0';
//            compute.push(num1);
//        }
//    }
//
//    while (!compute.empty()) {
//        sum += compute.top();
//        compute.pop();
//    }
//
//    cout << sum;
//}