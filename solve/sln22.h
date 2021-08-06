//
// Created by 金琪 on 2021/7/27.
//
#pragma once
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        if (n == 0) return vector<string>(1, "");
        if (n == 1) return vector<string>(1, "()");
        vector<string> result;

        for (int i = 0; i < n; ++i)
            for (auto inner : generateParenthesis(i))
                for (auto outer : generateParenthesis(n - 1 - i))
                    result.push_back("(" + inner + ")" + outer);
        return result;
    }

    // 另一种方法
    vector<string> generateParenthesis_2(int n) {
        vector<string> result;
        string path;
        if (n > 0)
            generate(n, path, result, 0, 0);
        return result;
    }

private:
    // num1:'('的数量
    // num2:')'的数量
    // num1>num2时可以放置右括号
    void generate(int n, string &path, vector<string> &result, int num1, int num2) {
        if (num1 == n) {
            string s(path);
            result.push_back(s.append(num1 - num2, ')'));
            return;
        }

        path.push_back('(');
        generate(n, path, result, num1 + 1, num2);
        path.pop_back();

        // 这里每轮可以只用加一个')'，更多的')'会在后面考虑
        if (num1 > num2) {
            path.push_back(')');
            generate(n, path, result, num1, num2 + 1);
            path.pop_back();
        }
    }
};
