#include <iostream> 
#include <iomanip> 
#include <ctime>
using namespace std;

// ����������� ���� ������
void Mas(const int* mas, int size, int i = 0) 
{
    if (i == size) 
    {
        cout << endl;
        return;
    }
    cout << setw(3) << mas[i];
    Mas(mas, size, i + 1); // ���������� ��������� ��� ���������� ��������
}

// ���������� ������� ��� ������ ���������� ��������
int Min(const int* mas, int size) 
{
    if (size == 1)
    {
        return mas[0];
    }
    int min = Min(mas, size - 1);
    return (mas[size - 1] < min) ? mas[size - 1] : min; 
}

// ���������� ������� ��� ���������� ������ ����������� ����������
void Masrand(int* mas, int size, int i = 0) 
{
    if (i == size)
    {
        return;
    }
    mas[i] = rand() % 10;
    Masrand(mas, size, i + 1); // ���������� ���������� �����
}

int main() {
    const int size = 5;
    srand(time(NULL));
    int mas[size]; 

    // ���������� ����� ����������
    Masrand(mas, size); 

    cout << "Array: ";
    Mas(mas, size); // �������� ����� ����������

    // ��������� ��������� ������� ����������
    int minValue = Min(mas, size);
    cout << "Minimal element: " << minValue << endl;  

    return 0;
}
