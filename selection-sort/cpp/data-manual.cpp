#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

void swapPointer(int *x_pointer, int *y_pointer) {
  int temporary_pointer = *x_pointer;
  *x_pointer = *y_pointer;
  *y_pointer = temporary_pointer;
}

void selectionSort(int array[], int array_length) {
  int i, j, min_idx;

  for(i = 0; i < array_length - 1; i++) {
    min_idx = i;
    for(j = i+1; j < array_length; j++) {
      if(array[j] < array[min_idx]) {
        min_idx = j;
      }
    }
    if(min_idx != i) {
      swapPointer(&array[min_idx], &array[i]);
    }
  }
}

void getSort(int array[], int array_length) {
  int i;
  for(i = 0; i < array_length; i++) {
    cout << array[i] << " ";
  }
}

string calculateMicroSeconds(int duration) {
  int hours = (duration / 60 / 60);
  int minutes = (duration / 60) - hours * 60;
  int seconds = duration - hours * 60 * 60 - minutes * 60;
  string text = to_string(hours) + " jam " + to_string(minutes) + " menit " + to_string(seconds) + " detik.";
  return text;
}

int main() {
  int array[] = {
    2, 10, 50, 11, 1, 6, 4, 20, 17, 14
  };
  int array_length = sizeof(array)/sizeof(array[0]);

  cout << "Data Sebelum di Sorting: \n";
  getSort(array, array_length);

  cout << "\n\n";

  cout << "Data Setelah di Sorting: \n";

  auto start = high_resolution_clock::now();
  selectionSort(array, array_length);
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);

  getSort(array, array_length);

  //cout << "\n\nTotal Waktu Sorting: " << duration.count() << " microseconds.";
  cout << "\n\nTotal Waktu Sorting: " << calculateMicroSeconds(duration.count());
  
  return 0;
}
