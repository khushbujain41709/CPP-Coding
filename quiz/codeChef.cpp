#include <iostream>
#include <vector>

using namespace std;

// Function to generate a matrix with GCD 1 in every row and column
void construct_matrix(int N, int M) {
    // Use small prime numbers to fill the matrix
    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29}; // First 10 primes

    // Create a matrix of size N x M
    vector<vector<int>> matrix(N, vector<int>(M));

    // Fill the matrix ensuring that GCD(row) and GCD(column) = 1
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            matrix[i][j] = primes[(i + j) % primes.size()]; // Cycle through primes
        }
    }

    // Output the matrix
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N, M;
        cin >> N >> M; // Read dimensions of the matrix
        construct_matrix(N, M); // Construct and print the matrix
    }

    return 0;
}
