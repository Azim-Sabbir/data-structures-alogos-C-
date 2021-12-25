#include <iostream>

using namespace std;

void search(const int arr[], int item, int sizeOfArr) {
    bool notFound = true;

    for (int i = 0; i < sizeOfArr; i++) {
        if (arr[i] == item) {
            cout << "your item exits on position no :- " << i << endl;
            notFound = false;
            break;
        }
    }

    if (notFound) {
        cout << "the element you're looking for doesnt exits on this list";
    }

}

int main() {
    int sizeOfArr, item;

    cout << "enter size of array : " << endl;
    cin >> sizeOfArr;

    int arr[sizeOfArr];
    cout << "enter the elements of array : " << endl;
    for (int i = 0; i < sizeOfArr; i++) {
        cin >> arr[i];
    }

    cout << "enter an element to search : " << endl;
    cin >> item;

    search(arr, item, sizeOfArr);

    return 0;
}
