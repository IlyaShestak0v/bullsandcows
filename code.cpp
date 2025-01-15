#include <iostream>
#include <ctime>
using namespace std;

int main(){
  setlocale(LC_ALL, "Russian");
  srand(time(NULL));
  int s = rand() % 9000 + 1000;
  int g, bulls, cows;
  cout << "Добро пожаловать в игру!";
  do
  {
    bulls = cows = 0;
    cout << "Введите четырехзначное число: ";
    cin >> g;
    int A[4], B[4];
    for (int i = 0; i < 4; i++)
    {
        A[i] = (s / (int)pow(10,3-i)) % 10;
        B[i] = (g / (int)pow(10,3-i)) % 10;
        if (A[i] == B[i]) bulls++;
    }
    for (int i = 0; i <4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i != j && B[i] == A[j]) cows++;
        }
    }
cout << bulls << " быков " << cows << " коров ";
} while (bulls < 4);# цикл продолжается до тех пор, пока пользователь не угадает число целиком.
cout << "Поздравляем,вы угадали число! "; #если пользователь угадал правильное число, игра завершается и выводится поздравительное сообщение.
return 0;
}

