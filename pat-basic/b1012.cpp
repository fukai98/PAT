/*
 1012 数字分类 (20 分)
 
 给定一系列正整数，请按要求对数字进行分类，并输出以下 5 个数字：
 A1 = 能被 5 整除的数字中所有偶数的和；
 A2 = 将被 5 除后余 1 的数字按给出顺序进行交错求和，即计算 n1−n2+n3−n4⋯；
 A3 = 被 5 除后余 2 的数字的个数；
 A4 = 被 5 除后余 3 的数字的平均数，精确到小数点后 1 位；
 A5 = 被 5 除后余 4 的数字中最大数字。
 
 输入格式：
 每个输入包含 1 个测试用例。每个测试用例先给出一个不超过 1000 的正整数 N，随后给出 N 个不超过 1000 的待分类的正整数。数字间以空格分隔。
 输出格式：
 对给定的 N 个正整数，按题目要求计算 A1~A5并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。
 若其中某一类数字不存在，则在相应位置输出 N。
 输入样例 1：
 13 1 2 3 4 5 6 7 8 9 10 20 16 18
 输出样例 1：
 30 11 2 9.7 9
 输入样例 2：
 8 1 2 4 5 6 7 9 16
 输出样例 2：
 N 11 2 N 9
*/

#include <iostream>

using namespace std;

int main()
{
    int a1=0, a2=0, a3=0, a5=0;
    double a4=0;
    int count[5] = {0};
    int n, num;
    
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        cin >> num;
        if(num%5==0 && num%2==0)
        {
            count[0]++;
            a1 += num;
        }
        if(num%5 == 1)
        {
            count[1]++;
            if(count[1]%2 != 0)
                a2 += num;
            else
                a2 -= num;
        }
        if(num%5 == 2)
        {
            count[2]++;
            a3++;
        }
        if(num%5==3)
        {
            count[3]++;
            a4 += num;
        }
        if(num%5 == 4)
        {
            count[4]++;
            if(a5 < num)
                a5 = num;
        }
    }
    a4 = a4 / count[3];
    
    if(count[0] != 0)   cout << a1 << " ";
    else                cout << "N ";
    if(count[1] != 0)   cout << a2 << " ";
    else                cout << "N ";
    if(count[2] != 0)   cout << a3 << " ";
    else                cout << "N ";
    if(count[3] != 0)   printf("%.1lf ",a4);
    else                cout << "N ";
    if(count[4] != 0)   cout << a5;
    else                cout << "N";
    
    return 0;
}
