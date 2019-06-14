//
//  b1002.cpp
//  pat
//
//  Created by fukai on 2019/6.
//

/*
 1002 写出这个数 (20 分)

 读⼊一个⾃然数n，计算其各位数字之和，⽤汉语拼⾳写出和的每⼀位数字。
 输⼊格式：每个测试输入包含1个测试用例，即给出⾃然数n的值。这里保证n⼩于10^100。
 输出格式：在一行内输出 n 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。
 输入样例：1234567890987654321123456789
 输出样例：yi san wu
 
 思路：
 先用string类型的变量去读取输入的一串数字，用循环将其求和后转化为int类型的sum，再将sum转化为string类型的num，对应中文拼音表输出
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int sum = 0;
    string s, num;
    string show[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    cin >> s;
    for(int i=0; i<s.length(); ++i)
    {
        sum += (s[i] - '0');
    }
    num = to_string(sum); //将sum转化为string类型的num
    for(int i=0; i<num.length(); ++i)
    {
        if(i != 0)
            cout << " ";
        cout << show[(num[i] - '0')];
    }
    return 0;
}

