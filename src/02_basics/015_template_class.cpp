#include <iostream>
#include "02_basics/015_template_class.h"

using namespace std;

template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
Arithmetic<T>::~Arithmetic()
{
    cout << "Arithmetic desctructor\n";
}

template <class T>
T Arithmetic<T>::add()
{
    return this->a + this->b;
}

template <class T>
T Arithmetic<T>::sub()
{
    return this->a - this->b;
}

template <class T>
ArithmeticPrinter<T>::ArithmeticPrinter(Arithmetic<T> *ar)
{
    this->ar = ar;
}

template <class T>
ArithmeticPrinter<T>::~ArithmeticPrinter()
{
    cout << "ArithmeticPrinter destructor\n";
}

template <class T>
void ArithmeticPrinter<T>::print_add_sub()
{
    cout << "Add: " << this->ar->add() << "\n";
    cout << "Sub: " << this->ar->sub() << "\n";
}

void print_template_class()
{
    Arithmetic<int> ar_int(10, 4);
    cout << "Add: " << ar_int.add() << "\n";
    cout << "Sub: " << ar_int.sub() << "\n";

    Arithmetic<float> ar_float(3.499, 6.72);
    ArithmeticPrinter<float> arpr_float(&ar_float);
    arpr_float.print_add_sub();

    Arithmetic<char> ar_char('A', 'B');
    ArithmeticPrinter<char> arpr_char(&ar_char);
    arpr_char.print_add_sub();
}
