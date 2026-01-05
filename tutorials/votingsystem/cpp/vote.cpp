#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int id;
    cin >> id;

    ofstream file("votes.txt", ios::app);
    file << "Vote for candidate " << id << endl;
    file.close();

    cout << "Vote recorded";
    return 0;
}

