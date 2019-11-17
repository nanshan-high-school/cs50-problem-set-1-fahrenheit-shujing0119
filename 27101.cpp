#include <iostream>
using namespace std;

int main() {
    cout << "此為溫度轉換器\n";

    float C;
    
    cout << "輸入攝氏溫度，如果不需要請按999:";
    cin >> C;

    if (C == 999) {
        goto another;         
    }

    cout << "華氏" << C * 9 / 5 + 32 << "度";
    cout << "\n" << "\n";

    another:
    float F;
    cout << "輸入華氏溫度，如果不需要請按999:";
    cin >> F;

    if (F == 999) {
        return 0;         
    }

    cout << "攝氏" << (F - 32) * 5 / 9 << "度";
}

// 650275杜心妍
