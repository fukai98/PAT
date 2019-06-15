/*
 1013 数素数 (20 分)
 
 令 Pi表示第 i 个素数。现任给两个正整数 M≤N≤104，请输出 PM到 PN的所有素数。
 
 输入格式：
 输入在一行中给出 M 和 N，其间以空格分隔。
 输出格式：
 输出从 PM到 PN的所有素数，每 10 个数字占 1 行，其间以空格分隔，但行末不得有多余空格。
 
 输入样例：
 5 27
 输出样例：
 11 13 17 19 23 29 31 37 41 43
 47 53 59 61 67 71 73 79 83 89
 97 101 103
*/

#include <iostream>
#include <vector>

using namespace std;


bool IsPrime(int a)
{
    if(a<2)
        return false;
    for(int i=2; i*i<=a; ++i)
    {
        if(a%i == 0)
            return false;
    }
    return true;
}

int main()
{
    vector<int> a;
    int M, N;
    int cnt = 0;
    
    cin >> M >> N;
    for(int i=0; cnt<=N; ++i)
    {
        if(IsPrime(i))
        {
            a.push_back(i);
            cnt++;
        }
    }
    cnt = 1;
    for(int i=M-1; i<N-1; ++i)
    {
        if(cnt < 10)
        {
            cout << a[i] << " ";
            cnt++;
        }
        else
        {
            cnt = 1;
            cout << a[i]<<endl;
        }
    }
    cout << a[N-1];
    return 0;
}
