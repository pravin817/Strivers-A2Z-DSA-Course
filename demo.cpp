#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> arr(n);

    int i = 0;
    while (n--)
    {
        int val;
        std::cin >> val;
        arr[i++] = val;
    }

    i = 0;
    int length = arr.size();

    while (i < length)
        std::cout << arr[i++] << " ";

    std::cout << std::endl;
    std::cout << "Hello World" << std::endl;

    return 0;
}