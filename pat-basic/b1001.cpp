//
//  b1001.cpp
//  pat
//
//  Created by fukai on 2019/6.
//

/*
 1001 害死人不偿命的(3n+1)猜想 (15 分)
*/

#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    int n = 0;
    cin >> n;
    while(n != 1)
    {
        if(n % 2 == 0)
        {
            n = n/2;
        }
        else
        {
            n = (3*n+1)/2;
        }
        ++num;
    }
    cout << num << endl;
    return 0;

}

