//#include <iostream>
//#include <vector>
//#define ll long long
//using namespace std;
//
//const vector<vector<ll>> identity({ { 1, 0 }, {0, 1} });
//const vector<vector<ll>> faboMatri({ { 1, 1 }, { 1, 0 } });
//const ll p = 1000000007;
//
//void showMatrix(const vector<vector<ll>>& matri);
//vector<vector<ll>> matrixMultiply(const vector<vector<ll>>& matri1, const vector<vector<ll>>& matri2);
//vector<vector<ll>> doubleAndAdd(const vector<vector<ll>>& faboMatri, ll y);
//int main()
//{
//    ll n;
//
//    cin >> n;
//    while (n > 0) 
//    {
//        vector<vector<ll>> ans = doubleAndAdd(faboMatri, n - 1);
//        cout << ans[0][0] % p << endl;
//        cin >> n;
//    }
//}
//
//
//vector<vector<ll>> doubleAndAdd(const vector<vector<ll>> &faboMatri, ll y)
//{
//    if (y == 0) {
//        return identity;
//    }
//    else if (y % 2 == 1) {
//        return matrixMultiply(faboMatri, doubleAndAdd(faboMatri, y - 1));
//    }
//    else {
//        vector<vector<ll>> t = doubleAndAdd(faboMatri, y / 2);
//        return matrixMultiply(t, t);
//    }
//}
//
//
//vector<vector<ll>> matrixMultiply(const vector<vector<ll>>& matri1, const vector<vector<ll>>& matri2)
//{
//    vector<vector<ll>> matri = {{ 0, 0 }, { 0, 0 }};
//
//    matri[0][0] = (matri1[0][0] * matri2[0][0] + matri1[0][1] * matri2[1][0]) % p;
//    matri[0][1] = (matri1[0][0] * matri2[0][1] + matri1[0][1] * matri2[1][1]) % p;
//    matri[1][0] = (matri1[1][0] * matri2[0][0] + matri1[1][1] * matri2[1][0]) % p;
//    matri[1][1] = (matri1[1][0] * matri2[0][1] + matri1[1][1] * matri2[1][1]) % p;
//
//    //showMatrix(matri);
//    return matri;
//}


//void showMatrix(const vector<vector<ll>> &matri)
//{
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 2; j++) {
//            cout << matri[i][j] << ' ';
//        }
//        cout << endl;
//    }
//    cout << endl;
//}