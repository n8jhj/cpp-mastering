#ifndef BASICS_CLASS_H
#define BASICS_CLASS_H

class Rectangle6
{
private:
    int width;
    int height;

public:
    Rectangle6();
    Rectangle6(int w, int h);
    ~Rectangle6();
    int area();
    int perimeter();
    void setWidth(int w);
    int getWidth();
    void setHeight(int h);
    int getHeight();
};

void print_class();

#endif // BASICS_CLASS_H
