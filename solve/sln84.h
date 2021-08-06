//
// Created by 金琪 on 2021/7/29.
//
#pragma once
#include <stack>
#include <vector>
using namespace std;
class Solution {
public:
    // 使用递增单调栈，栈底是最短的矩形，时间复杂度 o(n)
    // 出栈时计算出栈的矩形到当前矩形所能构成的最大面积(以height[i]为高的矩形的面积)
    // 为了最后所有高度出栈，height末尾加一个高度0的矩形
    int largestRectangleArea(vector<int> &height) {
        stack<int> s;
        height.push_back(0);
        int result = 0;
        for (int i = 0; i < height.size();) {
            if (s.empty() || height[i] > height[s.top()])
                s.push(i++);
            else {
                int tmp = s.top();
                s.pop();
                result = max(result, height[tmp] * (s.empty() ? i : i - s.top() - 1));
            }
        }
        return result;
    }
};
