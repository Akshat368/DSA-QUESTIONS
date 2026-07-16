#include <bits/stdc++.h>
using namespace std;

class ProductOfNumbers {
private:
    vector<int> nums;

public:
    ProductOfNumbers() {}

    void add(int num) {
        nums.push_back(num);
    }

    int getProduct(int k) {
        int product = 1;
        int n = nums.size();

        for (int i = n - k; i < n; i++) {
            product *= nums[i];
        }
      return product;
        
    }
};