#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

void setThousandData(int data[], int data_length) {
  for(int i = 0; i < data_length; i++) {
    data[i] = (rand() % 1000) + 1;
  }
}

void swapPointer(int *x_position, int *y_position) {
  int temporary_pointer = *x_position;
  *x_position = *y_position;
  *y_position = temporary_pointer;
}

void startSortingSort(int data[], int data_length) {
  int i, j, min_idx;

  for(i = 0; i < data_length - 1; i++) {
    min_idx = i;
    for(j = i + 1; j < data_length; j++) {
      if(data[j] < data[min_idx]) {
        min_idx = j;
      }
    }
    if(min_idx != i) {
      swapPointer(&data[min_idx], &data[i]);
    }
  }
}

void getThousandData(int data[], int data_length) {
  for(int i = 0; i < data_length; i++) {
    cout << data[i] << " ";
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

  int data[1000],
      data_length = sizeof(data)/sizeof(data[0]);

  setThousandData(data, data_length);

  cout << "Data Sebelum di Sorting: \n";
  getThousandData(data, data_length);

  cout << "\n\n";

  cout << "Data Setelah di Sorting: \n";

  auto start = high_resolution_clock::now();
  //cout << duration_cast<microseconds>(to_string(start));
  startSortingSort(data, data_length);
  auto stop = high_resolution_clock::now();
  //cout << duration_cast<microseconds>(to_string(stop));
  auto duration = duration_cast<seconds>(stop - start);

  getThousandData(data, data_length);

  cout << "\n\n";
  cout << "Jumlah Data: " << data_length << " data\n";
  cout << "Total Waktu Sorting: " << duration.count() << " seconds.";
  //cout << "Total Waktu Sorting: " << calculateMicroSeconds(duration.count());

  return 0;
}
