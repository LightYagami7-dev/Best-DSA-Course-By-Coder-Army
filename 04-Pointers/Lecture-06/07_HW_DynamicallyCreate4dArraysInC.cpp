#include <iostream>
using namespace std;

int main()
{

int main()
{

    // Q4. Dynamically create 4D arrays in C++.
        int L, B, H, T;
        cin >> L >> B >> H >> T;
    
        int ****ptr = new int ***[T];
    
        for (int i = 0; i < T; i++)
        {
            ptr[i] = new int **[L];
            for (int j = 0; j < L; j++)
            {
                ptr[i][j] = new int *[B];
                for (int k = 0; k < B; k++)
                {
                    ptr[i][j][k] = new int[H];
                }
            }
        }

    return 0;
}
