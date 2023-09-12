#include <iostream>
using namespace std;

class BinarySearch {
public:
    static int binarySearch(int arr[], int target, int size) {
        int start = 0, end = size - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2; 
            if (arr[mid] == target) {
                return mid;
            }
            if (target > arr[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }
};

int main() {
    int arr[] = {-21, -11, 0, 3, 4, 12, 19, 22, 39, 44, 56, 78, 87, 99};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 19;
    BinarySearch bs;
    cout << BinarySearch::binarySearch(arr, target, size);
    return 0;
}
