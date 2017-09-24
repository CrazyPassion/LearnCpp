//
// Created by vonking on 2017/6/5.
//

#pragma once

#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void CountMaxSeqWord()
{
    string word;
    string preWord;
    std::pair<string, int> max_duplicated;
    int times=0;
    while (cin>>word)
    {
        //ctrl+d  eof
        if (preWord == word) ++times;
        else
            times = 0;
        preWord = word;
        cout<<word<<endl;
        if (times > max_duplicated.second) max_duplicated = { preWord, times };
    }

    if (max_duplicated.first.empty()) cout << "There's no duplicated string." << endl;
    else cout << "the word " << max_duplicated.first << " occurred " << max_duplicated.second + 1 << " times. " << endl;
}

bool isPrefix(vector<int> vec1, vector<int> vec2)
{
    if(vec1.size()>=vec2.size())
        return false;

    bool isSame = true;
    for(int i = 0; i < vec1.size();++i)
    {
        if (vec1[i] != vec2[i])
        {
            isSame = false;
            break;
        }
    }
    return isSame;
}
void Ex5_17()
{
    vector<int> vec1{0,1,1,2};
    vector<int> vec2{0,1,1,2,3,5,8};
    cout<<isPrefix(vec1,vec2)<<endl;
}

void Ex5_19(void)
{
    string rsp;  // used in the condition; can't be defined inside the do
    do {
        cout << "please enter two string: ";
        string val1, val2;
        cin  >> val1 >> val2;
        cout << "The shorter of two string is " << (val1.size()<val2.size()?val1:val2) <<endl;
        cout<< "More? Enter yes or no: ";
        cin  >> rsp;
    } while (!rsp.empty() && rsp[0] != 'n');
}
