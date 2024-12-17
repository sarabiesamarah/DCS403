// here is all of the code examples combined, to see each example running and results in the terminal: 

#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include <algorithm>
#include <cstdlib>
#include <ctime>

void priorityQueueExample() {
    std::priority_queue<int> pq;

    pq.push(10);  // Insert
    pq.push(20);
    pq.pop();     // Remove top element
    std::cout << "Size of priority_queue: " << pq.size() << "\n";
}

void fillExample() {
    double arr[5] = {1.3, 2.4, 4.5, 6.7, 9.0};

    std::fill(arr, arr + 3, 5.5);       // Fill first 3 elements with 5.5
    std::fill_n(arr, 4, 6.9);           // Fill first 4 elements with 6.9

    std::cout << "Array after fill and fill_n: ";
    for (double d : arr) std::cout << d << " ";
    std::cout << "\n";
}

void generateExample() {
    std::deque<double> d(5);
    std::srand(static_cast<unsigned int>(std::time(0)));  // Seed RNG

    std::generate(d.begin(), d.end(), []() { return rand() % 100 / 10.0; });
    std::generate_n(d.begin(), 3, []() { return rand() % 100 / 10.0; });

    std::cout << "Deque after generate and generate_n: ";
    for (double val : d) std::cout << val << " ";
    std::cout << "\n";
}

void vectorRemoveExample() {
    std::vector<int> v = {1, 2, 3, 4, 5};

    v.erase(v.begin() + 1);  // Remove second element
    std::cout << "Vector after removing second element: ";
    for (int n : v) std::cout << n << " ";
    std::cout << "\n";
}

int main() {
    int choice;

    while (true) {
        std::cout << "\nSelect a Code Example to Run:\n";
        std::cout << "1. Priority Queue Example\n";
        std::cout << "2. Fill and Fill_n Example\n";
        std::cout << "3. Generate and Generate_n Example\n";
        std::cout << "4. Vector Remove Example\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                priorityQueueExample();
                break;
            case 2:
                fillExample();
                break;
            case 3:
                generateExample();
                break;
            case 4:
                vectorRemoveExample();
                break;
            case 0:
                std::cout << "Exiting program.\n";
                return 0;
            default:
                std::cout << "Invalid choice! Try again.\n";
                break;
        }
    }

    return 0;
}

