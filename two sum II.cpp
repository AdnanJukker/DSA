#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;

        while (i < j) {
            int sum = numbers[i] + numbers[j];

            if (sum == target) {
                return {i + 1, j + 1};
            }

            if (sum < target) {
                i++;
            } else {
                j--;
            }
        }

        return {};
    }
};

int main() {
    Solution obj;

    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = obj.twoSum(numbers, target);

    cout << "Indices: ";
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}