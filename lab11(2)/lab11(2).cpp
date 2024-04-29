#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int* pokaschik1, * pokaschik2;

    pokaschik1 = new int;
    pokaschik2 = new int;

    *pokaschik1 = 22;
    *pokaschik2 = 33;

    cout << "Початкові значення:\n";
    cout << "Покажчик 1 = " << *pokaschik1 << endl;
    cout << "Покажчик 2 = " << *pokaschik2 << endl;

    int temp = *pokaschik1;
    *pokaschik1 = *pokaschik2;
    *pokaschik2 = temp;

    cout << "Результат обміну:\n";
    cout << "Покажчик 1 = " << *pokaschik1 << endl;
    cout << "Покажчик 2 = " << *pokaschik2 << endl;

    delete pokaschik1;
    delete pokaschik2;

    return 0;
}
