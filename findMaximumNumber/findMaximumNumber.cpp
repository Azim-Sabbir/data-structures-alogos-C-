#include <iostream>

using namespace std;

void search(const int arr[], int sizeOfArr) {
    int maxNumber = 1;

    for (int i = 0; i < sizeOfArr; i++) {
        if (arr[i] > maxNumber) {
            maxNumber = arr[i];
        }
    }

    cout << "max number of the array is :" << maxNumber << endl;

}

int main() {
    int sizeOfArr;

    cout << "enter size of array : " << endl;
    cin >> sizeOfArr;

    int arr[sizeOfArr];

    cout << "enter the elements of array : " << endl;
    for (int i = 0; i < sizeOfArr; i++) {
        cin >> arr[i];
    }

    search(arr, sizeOfArr);

    return 0;
}
