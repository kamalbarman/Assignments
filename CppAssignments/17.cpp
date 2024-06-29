#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
class Array {
private:
    std::vector<T> data;

public:
    
    Array(int size) {
        data.resize(size);
    }

    
    friend std::istream& operator>>(std::istream &input, Array<T> &arr) {
        for (auto &elem : arr.data) {
            input >> elem;
        }
        return input;
    }

   
    friend std::ostream& operator<<(std::ostream &output, const Array<T> &arr) {
        for (const auto &elem : arr.data) {
            output << elem << " ";
        }
        return output;
    }

    
    void sortDescending() {
        std::sort(data.begin(), data.end(), std::greater<T>());
    }
};

int main() {
    
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    Array<int> myIntArray(size);
    std::cout << "Enter " << size << " integers: ";
    std::cin >> myIntArray;

    myIntArray.sortDescending();
    std::cout << "Sorted array (descending order): " << myIntArray << std::endl;

    return 0;
}
