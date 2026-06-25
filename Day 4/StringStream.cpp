#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<int> parseInts(string str) {
	stringstream ss(str);
    vector<int> result;
    int num;

    while(ss >> num) {
        result.push_back(num);

        if (ss.peek() == ',') {
            ss.ignore();
        }
    }

    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> intergers = parseInts(str);
    for (int i = 0; i < intergers.size(); i++) {
        cout << intergers[i] << "\n";
    }

    return 0;
}