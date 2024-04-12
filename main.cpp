#include <iostream>
#include "head.h"
#include <vector>
#include <chrono>

using namespace std;
using namespace chrono;

int main() {
    system("chcp 65001");
    vector<int> int_array;
    vector<double> double_array;
    size_t length_array;
    bool is_double_array;
    cout << "Какой массив создать?\n"
            "0 - int\n"
            "1 - double" << endl;
    cout << " => ";
    cin >> is_double_array;
    cout << "Введите длину массива: ";
    cin >> length_array;
    cout << "Введите интервал случайных чисел [x, y]:" << endl;
    if (!is_double_array) {
        int x, y;
        cout << "x => "; cin >> x;
        cout << "y => "; cin >> y;
        init_array(length_array, x, y, int_array);
        print_array(is_double_array, int_array);
    } else {
        double x, y;
        cout << "x => "; cin >> x;
        cout << "y => "; cin >> y;
        init_array(length_array, x, y, double_array);
        print_array(is_double_array, double_array);
    }
    int cnt {};
    if (!is_double_array) {
        auto start = system_clock::now();
        calcSortBubble(int_array, cnt);
        auto end = system_clock::now();
        cout << "Количество итераций: "
             << cnt << endl;
        print_array(is_double_array, int_array);
        auto elapsed = end - start;
        cout << "Скорость выполнения: "
             << duration_cast<microseconds>(elapsed).count()
             << " мкс"
             << endl;
    } else {
        calcSortBubble(double_array, cnt);
        cout << "Количество итераций: "
             << cnt << endl;
        print_array(is_double_array, double_array);
    }
    return 0;
}