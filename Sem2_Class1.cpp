#include <iostream>
#include <cmath>
using namespace std;

class Progress {
private:
    double first;
    double second;
    double pown(double x, int y) {
        cout << "Возводим " << x << " в степень: " << y << endl;
        double c = pow(x, y);
        return c;
    }
public:
    void SetFirst(double x) {
        this->first = x;
        cout << "a0: " << first << endl;
    }
    void SetSecond(int y) {
        this->second = y;
        cout << "r: " << second << endl;
    }
    double element(double j) {
        cout << "a0 ( " << first << " )" << " мы умножаем на следующее действие: " << endl;
        return first * pown(second, j);
    }
};


int main()
{
    setlocale(LC_ALL, "Ru");
    Progress prog;
    prog.SetFirst(4);
    prog.SetSecond(3);
    cout << "Ответ: " << prog.element(2) << endl;
    
    return 0;
}