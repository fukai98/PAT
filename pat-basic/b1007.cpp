//
//  b1007.cpp
//  pat
//
//  Created by fukai on 2019/6.
//

/*
 1007 素数对猜想 (20 分)

 让我们定义dn为：dn = pn+1 - pn ，
 其中pi是第i个素数。显然有d1=1，且对于n>1有dn是偶数。“素数对猜想”认为“存在无穷多对相邻且差为2的素数”。
 现给定任意正整数N(<10^5)，请计算不超过N的满足猜想的素数对的个数。
 
 输入格式:
 输入在一行给出正整数N。
 输出格式:
 在一行中输出不超过N的满足猜想的素数对的个数。
 输入样例:
 20
 输出样例:
 4
*/

#include <iostream>
#include <string>

using namespace std;


//判断是否为素数
bool IsPrime(int a)
{
    if(a < 2)
        return false;
    for(int i=2; i*i<=a; ++i) //i从2到f根号n即可
    {
        if(a % i == 0)
            return false;
    }
    return true;
}


int main()
{
    long n;
    int num = 0;
    cin >> n;
    for(int i=0; i<=n; ++i)
    {
        if(IsPrime(i+2) && IsPrime(i))
            ++num;
    }
    cout << num;
    return 0;
}

