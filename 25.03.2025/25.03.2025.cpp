#include <iostream>
using namespace std;

//Exercise 1
//int main()
//{
//	int N;
//
//	cout << "Enter the height of the tricube (N): ";
//    cin >> N;
//
//	for (int i = 1; i <= N; i++) {
//
//		for (int j = 1; j <= N - i; j++) {
//
//			cout << " ";
//		}
//
//		for (int k = 1; k <= 2 * i - 1; k++) {
//
//			cout << "*";
//		}
//		cout << "\n";
//	}
//}

 
//Exercise 2
//void printRhombus(int size) {
//    for (int i = 1; i <= size; i++) {
//        for (int j = 1; j <= size - i; j++) cout << " ";
//        for (int k = 1; k <= 2 * i - 1; k++) cout << "*";
//        cout << "\n";
//    }
//
//    for (int i = size - 1; i >= 1; i--) {
//        for (int j = 1; j <= size - i; j++) cout << " ";
//        for (int k = 1; k <= 2 * i - 1; k++) cout << "*";
//        cout << "\n";
//    }
//}
//
//void printArrow(int size) {
//    for (int i = 1; i <= size / 2 + 1; i++) {
//        for (int j = 1; j < i; j++) cout << " ";
//        cout << "*\n";
//    }
//
//    for (int i = size / 2; i >= 1; i--) {
//        for (int j = 1; j < i; j++) cout << " ";
//        cout << "*\n";
//    }
//}
//
//void printEight(int size) {
//    for (int i = 1; i <= size * 2 + 1; i++) {
//        if (i == 1 || i == size + 1 || i == size * 2 + 1) {
//            for (int j = 1; j <= size; j++)
//                cout << "*";
//        }
//        else {
//            cout << "*";
//            for (int j = 2; j < size; j++)
//                cout << " ";
//            cout << "*";
//        }
//        cout << "\n";
//    }
//}
//
//int main() {
//    int size = 4;
//
//    cout << "Rhombus:\n";
//    printRhombus(size);
//
//    cout << "\nArrow:\n";
//    printArrow(size);
//
//    cout << "\nEight:\n";
//    printEight(size);
//}


//Exercise 3
//void printRhombus(int size) {
//    for (int i = 1; i <= size / 2 + 1; i++) {
//        for (int j = 1; j <= size / 2 + 1 - i; j++) 
//            cout << " ";
//        for (int k = 1; k <= 2 * i - 1; k++) 
//            cout << "*";
//        cout << "\n";
//    }
//
//    for (int i = size / 2; i >= 1; i--) {
//        for (int j = 1; j <= size / 2 + 1 - i; j++) 
//            cout << " ";
//        for (int k = 1; k <= 2 * i - 1; k++) \
//            cout << "*";
//        cout << "\n";
//    }
//}
//
//void printArrow(int size) {
//    for (int i = 1; i <= size / 2 + 1; i++) {
//        for (int j = 1; j < i; j++) cout << " ";
//        cout << "*\n";
//    }
//
//    for (int i = size / 2; i >= 1; i--) {
//        for (int j = 1; j < i; j++) cout << " ";
//        cout << "*\n";
//    }
//}
//
//void printEight(int size) {
//    for (int i = 1; i <= size * 2 + 1; i++) {
//        if (i == 1 || i == size + 1 || i == size * 2 + 1) {
//            for (int j = 1; j <= size; j++) 
//                cout << "*";
//        }
//        else {
//            cout << "*";
//            for (int j = 2; j < size; j++) 
//                cout << " ";
//            cout << "*";
//        }
//        cout << "\n";
//    }
//}
//
//int main() {
//    int size;
//
//    cout << "Enter an odd size (e.g. 13, 15, 17...): ";
//    cin >> size;
//
//    if (size < 3 || size % 2 == 0) {
//        cout << "Error: size must be an odd number greater than or equal to 3!\n";
//    }
//
//    cout << "\nRhombus:\n";
//    printRhombus(size);
//
//    cout << "\nArrow:\n";
//    printArrow(size);
//
//    cout << "\nEight:\n";
//    printEight(size);
//}
