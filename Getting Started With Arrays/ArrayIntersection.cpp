#include <iostream>
#include <vector>

std::vector<int> findIntersection(const std::vector<int>& A, const std::vector<int>& B) {
    std::vector<int> intersection;
    int i = 0, j = 0;

    while (i < A.size() && j < B.size()) {
        if (A[i] < B[j]) {
            ++i;
        } else if (A[i] > B[j]) {
            ++j;
        } else {
            // A[i] == B[j]
            intersection.push_back(A[i]);
            ++i;
            ++j;
        }
    }

    return intersection;
}

int main() {
    std::vector<int> A = {1, 2, 4, 5, 6};
    std::vector<int> B = {2, 3, 5, 7};

    std::vector<int> result = findIntersection(A, B);

    std::cout << "Intersection of arrays: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}