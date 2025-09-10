#include <iostream>
using namespace std;

int f2(int x) {
    if (x < 10) return 2 * x;
    else if (x < 2) return -x; // unreachable
    else return 2 * x;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cerr << "Usage: ./baic <x>" << endl;
        return 1;
    }
    int x = stoi(argv[1]);
    cout << f2(x) << endl;
    return 0;
}
