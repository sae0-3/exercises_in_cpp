#include <iostream>

int main() {
  int tam;
  int count = 0;
  std::cout << "Enter the size of the matrix: ";
  std::cin >> tam;

  // Entering values ​​in the array
  int matriz[tam][tam];
  for (int y = 0; y < tam; y++) {
    for (int x = 0; x < tam; x++) {
      count++;
      matriz[y][x] = count;
    }
  }

  // Making the tour
  for (int y = 0; y < tam; y++) {
    if ((y % 2) == 0) {
      for (int x = 0; x < tam; x++) {
        std::cout << matriz[y][x] << " -> ";
      }
    } else {
      for (int x = tam-1; x >= 0; x--) {
        std::cout << matriz[y][x] << " <- ";
      }
    }
    std::cout << std::endl;
  }

  return 0;
}
