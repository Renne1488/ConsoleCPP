
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

    int main() {
        setlocale(LC_ALL, "ru");
        vector<int> vec;
        int a;

        cout << "Введите сколько чисел хотите ввести: ";
        cin >> a;
        for (int i = 0; i < a; i++) {
            int b;
            cin >> b;
            vec.push_back(b);
        }
        sort(vec.begin(), vec.end());
        for (auto el : vec) {
            cout << el<<" ";
        }
 
        return 0;
    }

