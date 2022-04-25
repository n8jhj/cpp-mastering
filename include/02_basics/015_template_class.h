#ifndef BASICS_TEMPLATE_CLASS_H
#define BASICS_TEMPLATE_CLASS_H

template <class T>
class Arithmetic
{
private:
    T a;
    T b;

public:
    Arithmetic(T a, T b);
    ~Arithmetic();
    T add();
    T sub();
};

// I took a little liberty here to try something new -
// creating a template class to do my printing for me.
template <class T>
class ArithmeticPrinter
{
private:
    Arithmetic<T> *ar;

public:
    ArithmeticPrinter(Arithmetic<T> *ar);
    ~ArithmeticPrinter();
    void print_add_sub();
};

void print_template_class();

#endif // BASICS_TEMPLATE_CLASS_H
