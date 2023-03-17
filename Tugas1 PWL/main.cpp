#include <iostream>

using namespace std;

void tambah(int a,int b);

void kurang(int c,int d);

int jumlahTotal(int arr[], int n) {
    int total = 0;

    for (int i = 0; i < n; i++) {
        total += arr[i];
    }

    return total;
}

double jumlahRata(int arr[], int n) {
    double total = 0;

    for (int i = 0; i < n; i++) {
        total += arr[i];
    }

    double rata = total / n;

    return rata;
}

int main()
{
   tambah(2,4);
   kurang(19,7);

    return 0;
}

void tambah(int a,int b){
    cout << a + b << endl;
}

void kurang(int c,int d){
    cout << c - d << endl;
}
    //total
    cin >> n;
       for (int i = 0; i < n; i++) {
           cin >> arr[i];
    }
    int total = jumlah(arr, n);

}
    //rata-rata
    cin >> n;
      for (int i = 0; i < n; i++) {
          cin >> arr[i];
    }
    double rata = hitungRata(arr, n);
    return 0;

}


