#include <iostream>
#include "head.h"
#include <vector>
#include <chrono>

using namespace std;
using namespace chrono;

int main() {
    vector<int> int_array;
    vector<double> double_array;
    size_t length_array;
    bool is_double_array, is_bubble_sort;
    cout << "Какой массив создать?\n"
            "0 - int\n"
            "1 - double\n"
            "=>"; cin >> is_double_array;
    cout << "Введите длину массива: "; cin >> length_array;
    cout << "Введите интервал случайных чисел [x, y]:" << endl;
    if (is_double_array) {
        double x, y;
        cout << "x => "; cin >> x;
        cout << "y => "; cin >> y;
        init_array(length_array, x, y, double_array);
        print_array(is_double_array, double_array);
    } else {
        int x, y;
        cout << "x => "; cin >> x;
        cout << "y => "; cin >> y;
        init_array(length_array, x, y, int_array);
        print_array(is_double_array, int_array);
    }
    cout << "Какой вид сортировки использовать?\n"
            "0 - Быстрая сортировка\n"
            "1 - Методом пузырька\n"
            "=>"; cin >> is_bubble_sort;

    auto start = system_clock::now();
    int count_iterations;
    if (is_double_array) {
        if (is_bubble_sort) {
            calcSortBubble(double_array, count_iterations);
        }else{
            calcQsort(double_array, 0, double_array.size()-1, count_iterations);
        }
        cout << "Количество итераций: " << count_iterations << endl;
        print_array(is_double_array, double_array);
    } else {
        if (is_bubble_sort) {
            calcSortBubble(int_array, count_iterations);
        }else{
            calcQsort(int_array, 0, int_array.size()-1, count_iterations);
        }
        cout << "Количество итераций: " << count_iterations << endl;
        print_array(is_double_array, int_array);

    }

    auto end = system_clock::now();
    auto elapsed = end - start;
    cout << "Скорость выполнения: "
         << duration_cast<microseconds>(elapsed).count()
         << " мкс"
         << endl;


    string input;
    while (true){
        cout << "Введите элемент который надо найти, или 'exit' для выхода: ";
        cin >> input;
        count_iterations = 0;
        if (input == "exit"){
            break;
        }
        try {
            size_t result;
            start = system_clock::now();
            if (is_double_array){
                double element = stod(input);
                result = calcBinSearch(double_array, element, count_iterations);
            }else{
                int element = stoi(input);
                result = calcBinSearch(int_array, element, count_iterations);
            }
            end = system_clock::now();
            elapsed = end - start;
            cout << "Элемент найден на индексе: " << result << endl
                 << "Количество итераций: " << count_iterations << endl;
            cout << "Скорость выполнения поиска: "
                 << duration_cast<microseconds>(elapsed).count()
                 << " мкс"
                 << endl;
        }catch(...){
            cout << "Что-то пошло не так, повторите ввод" << endl;
        }

    }
    return 0;
}