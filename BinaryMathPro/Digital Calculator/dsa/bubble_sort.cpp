#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 5, 2, 1, 11};
    int n = 5, j, i;

    for (i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j > arr[j + 1]])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j = 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            std::cout << "array sorted" << std::endl;
            break;
        }
    }
for ( i = 0; i < n-1; i++)
{
    std::cout << "array sorted" << std::endl;
    std::cout << arr[i] << std::endl;
}
return 0;
}
