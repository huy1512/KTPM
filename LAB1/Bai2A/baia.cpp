#include <iostream>
using namespace std;

int f1(int x) {
    if (x > 10) return 2 * x;
    else return -x;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cerr << "Usage: ./baia <x>" << endl;
        return 1;
    }
    int x = stoi(argv[1]);
    cout << f1(x) << endl;
    return 0;
}
