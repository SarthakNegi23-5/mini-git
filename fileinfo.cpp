#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filename;

    cout << "Enter file name: ";
    cin >> filename;

    ifstream file(filename);

    if (file) {
        cout << "File exists." << endl;
    } else {
        cout << "File not found." << endl;
    }

    file.close();

    return 0;
}
