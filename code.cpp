#include <iostream>
#include <ctime>
using namespace std;

int main(){
  setlocale(LC_ALL, "Russian");
  srand(time(NULL));
  int s = rand() % 9000 + 1000;
}
