// Kontr_9_1-Cpp-ITMO.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <cmath>
#include <iostream>
#include <stdexcept>
# include <windows.h>

using namespace std;

// Класс треугольник
class Triangle {
public:
    Triangle(double a, double b, double c) : said_1(a), said_2(b), said_3(c) {

    }

    // Нахождение площади треугольника
    double Square() const {

        double p = (said_1 + said_2 + said_3) / 2;
        double S = sqrt(p * (p - said_1) * (p - said_2) * (p - said_3));
        return S;
    }

private:
    double said_1;
    double said_2;
    double said_3;
};


void CheckingTrinagle(double a1, double b1, double a2, double b2, double a3, double b3) {
    double said_a = (sqrt(pow((abs(a2 - a1) + abs(b2 - b1)), 2)));
    double said_b = (sqrt(pow((abs(a3 - a2) + abs(b3 - b2)), 2)));
    double said_c = (sqrt(pow((abs(a1 - a3) + abs(b1 - b3)), 2)));

    if ((said_a > (said_b + said_c)) || (said_b > (said_a + said_c)) || (said_c > (said_b + said_a))) {
        throw ((said_a + 100 > (said_b + said_c)) || (said_b + 100 > (said_a + said_c)) || (said_c + 100 > (said_b + said_a)));
    }
    else {
        Triangle triangle{ said_a, said_b, said_c };
        wcout << L"Площадь треугольника = " << triangle.Square() << endl;
    }


};


int main() {

    setlocale(LC_CTYPE, "rus");
    double a1, b1, a2, b2, a3, b3;

    cout << "Введите координату точки треугольника 'a1' ";
    cin >> a1;
    cout << "Введите координату точки треугольника треугольника 'b1' ";
    cin >> b1;
    cout << "Введите координату точки треугольника треугольника 'a2' ";
    cin >> a2;
    cout << "Введите координату точки треугольника треугольника 'b2' ";
    cin >> b2;
    cout << "Введите координату точки треугольника треугольника 'a3' ";
    cin >> a3;
    cout << "Введите координату точки треугольника треугольника 'b3' ";
    cin >> b3;
    CheckingTrinagle(a1, b1, a2, b2, a3, b3);

}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
