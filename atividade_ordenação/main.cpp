#include <iostream>
#include <vector>
#include <string>

using namespace std;

void bubbleSort(vector<string> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                string aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
}

int main() {
    vector<string> vetor;
    vetor.push_back("Maria");
    vetor.push_back("Bruna");
    vetor.push_back("Alberto");
    vetor.push_back("Joao");

    bubbleSort(vetor);

    for (int i = 0; i < vetor.size(); i++) {
        cout << vetor[i] << " ";
    }

    return 0;
}


