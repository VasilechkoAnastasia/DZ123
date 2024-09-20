#include <iostream>
using namespace std;

class Drob
{
private:
    int x;
    int y;
public:
    void Print()
    {
        cout << "Numerator: " << x << "\tDenominator: " << y << endl;
    }
    void Input(int a, int b)
    {
        x = a;
        y = b;
    }
    void Input()
    {
        x = rand() % 20;
        y = rand() % 20;
    }
    int getNumerator()
    {
        return x;
    }

    int getDenominator()
    {
        return y;
    }

    void setNumerator(int a)
    {
        x = a;
    }

    void setDenominator(int b)
    {
        y = b;
    }
};

int main()
{
    srand(time(0));

    Drob a;
    a.Input(1, 2);
    a.Print();

    cout << "Numerator: " << a.getNumerator() << endl;
    cout << "Denominator: " << a.getDenominator() << endl;


    a.setNumerator(3);
    a.setDenominator(4);
    a.Print();

    Drob b;
    b.Input();
    b.Print();
}
