#include <iostream>

class Solution {
  public:
    long long seriesSum(int n) {
        return static_cast<long long>(n) * (n + 1) / 2;
    }
};

int main() {
    Solution solution;
    int n;
    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    long long result = solution.seriesSum(n);
    std::cout << "The sum of the first " << n << " terms is: " << result << std::endl;

    return 0;
}
