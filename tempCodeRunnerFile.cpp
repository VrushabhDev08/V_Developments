#include <iostream>
#include <vector>
using namespace std;

void processArray(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        int num = arr[i];
        bool isSupported = num > 45;
        bool isUnsupported = num % 3 == 0;
        
        // Replace numbers based on conditions
        if (isSupported && isUnsupported) {
            arr[i] = -8;
        } else if (isSupported) {
            arr[i] = -2;
        } else if (isUnsupported) {
            arr[i] = 4;
        }
    }
}

int main() {
    vector<int> arr;
    int num;
    
    // Read integers until a negative number is encountered
    while (cin >> num && num >= 0) {
        arr.push_back(num);
    }
    
    // Process the array
    processArray(arr);
    
    // Print the contents of the array
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }
    
    return 0;
}
