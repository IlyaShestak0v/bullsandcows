#include <iostream>
#include <ctime>
using namespace std;

int main(){
  setlocale(LC_ALL, "Russian");
  srand(time(NULL));
  int s = rand() % 9000 + 1000;
  int g, bulls, cows;
  cout<<"Добро пожаловать в игру!";
  do
  {
    bulls = cows = 0;
    cout<<"Введите четырёхзначное число: ";
    cin>>g;
    int A[4], b[4];
    for (int i = 0; i<4; i++)
    }
}
