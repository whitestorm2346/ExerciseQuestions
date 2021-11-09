#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool fn_Cmp(std::pair<char, int> p1, std::pair<char, int> p2)
{
    if(p1.second == p2.second) return p1.first < p2.first;
    else return p1.second > p2.second;
}

int main()
{
    int int_Num;

    std::cin>> int_Num;

    std::string strarr_Input[int_Num];
    int intarr_Num[26] = {};

    getline(std::cin, strarr_Input[0], '\n'); // std::cin.ignore() ·|¿ù

    for(int i = 0; i < int_Num; i++)
    {
        getline(std::cin, strarr_Input[i], '\n');
    }

    for(int i = 0; i < int_Num; i++)
    {
        for(int j = 0; j < strarr_Input[i].length(); j++)
        {
            if(strarr_Input[i][j] >= 'A' && strarr_Input[i][j] <= 'Z')
            {
                intarr_Num[static_cast<int>(strarr_Input[i][j] - 'A')]++;
            }
            else if(strarr_Input[i][j] >= 'a' && strarr_Input[i][j] <= 'z')
            {
                intarr_Num[static_cast<int>(strarr_Input[i][j] - 'a')]++;
            }
        }
    }

    std::vector<std::pair<char, int>> vec_Result;

    for(int i = 0; i < 26; i++)
    {
        if(intarr_Num[i] > 0) vec_Result.push_back({static_cast<char>('A' + i), intarr_Num[i]});
    }

    std::sort(vec_Result.begin(), vec_Result.end(), fn_Cmp);

    for(int i = 0; i < vec_Result.size(); i++)
    {
        std::cout<< vec_Result[i].first << ' ' << vec_Result[i].second << '\n';
    }

    return 0;
}
