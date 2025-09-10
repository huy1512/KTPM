#include <iostream>
using namespace std;

int f1_wrong(int x) {
    if (x > 10) return 2 * x;
    else if (x > 0) return -x;
    else return 2 * x;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cerr << "Usage: ./baib <x>" << endl;
        return 1;
    }
    int x = stoi(argv[1]);
    cout << f1_wrong(x) << endl;
    return 0;
}
