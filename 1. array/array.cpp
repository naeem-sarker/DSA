#include <bits/stdc++.h>
using namespace std;

class Array {
public:
    int *A;
    int size;
    int length;

    void Display() {
        cout << "All Elements \n";
        for (int i=0; i<length; i++) {
            cout << A[i] << " ";
        }
    }

    void Append(int x) {
        if (length < size) {
            A[length++] = x;
        }
    }

    void Insert(int index, int x) {
        if (index>=0 && index<=length) {
            for (int i=length; i>index; i--) {
                A[i] = A[i - 1];
            }
            A[index] = x;
            length++;
        }
    }

    void Delete(int index) {
        if (index>=0 && index<=length) {
            for (int i=index; i<length-1; i++) {
                A[i] = A[i+1];
            }
            length--;
        }
    }

    int LinearSearch(int key) {
        for (int i=0; i<length; i++) {
            if (key == A[i]) {
                return i;
            }
        }

        return -1;
    }

    void swap(int a, int b) {}

    int BinarySearch(int key) {
        int l = 0;
        int r = length;
        int mid;

        while (l<=r) {
            mid = (l+r)/2;

            if (key == A[mid]) {
                return mid;
            } else if (key < A[mid]) {
                r = mid-1;
            } else {
                l = mid+1;
            }
        }

        return -1;
    }

    int Get(int index) {
        if (index>=0 && index<=length) {
            return A[index];
        }
    }

    void Set(int index, int value) {
        if (index>=0 && index<=length) {
            A[index] = value;
        }
    }

    int Max() {
        if (length>0) {
            return A[0];
        }

        int max = A[0];
        for (int i=1; i<length; i++) {
            if (max<A[i]) {
                max = A[i];
            }
        }

        return max;
    }

    int Min() {}

    int Sum() {
        int total = 0;
        for (int i=0; i<length; i++) {
            total += A[i];
        }

        return total;
    }

    int Avg() {
        int total = 0;
        for (int i=0; i<length; i++) {
            total += A[i];
        }

        return total/length;
    }

    void Reverse1() {}

    void Reverse2() {}

    void Arrange() {}
    
    bool isSorted() {}
};

int main() {
    Array arr;
    cout << "Enter size of array: ";
    cin >> arr.size;

    arr.A = new int[arr.size];
    arr.length = 0;

    int n, i;
    cout << "Enter number of elements: ";
    cin >> n;

    for (i=0; i<n; i++) {
        cin >> arr.A[i];
    }

    arr.length = n;

    arr.Append(90);
    arr.Insert(2, 1);
    arr.Display();
    arr.Delete(1);
    arr.Display();

    int result = arr.LinearSearch(90);

    if (result == -1) {
        cout << "Not Found/Unsuccessful" << endl;
    } else {
        cout << "Found/Successful on index " << result << endl;
    }

    cout << arr.BinarySearch(3) << endl;
    cout << arr.Get(2) << endl;

    arr.Set(1, 101);

    arr.Display();

    cout << arr.length << endl;
}