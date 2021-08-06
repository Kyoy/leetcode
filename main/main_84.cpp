//
// Created by 金琪 on 2021/7/29.
//

#include "../solve/sln84.h"
#include <iostream>
using namespace std;

int main() {
    vector<int> height({1,2,3});
    auto ret = Solution().largestRectangleArea(height);
    cout << ret << endl;
}
