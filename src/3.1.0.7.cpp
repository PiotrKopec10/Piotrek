#include <iostream>

auto sort_asc(int a[], int n) -> void
{
    for(int x=0; x<n; x++)
    {
        for(int j=1; j<n-x; j++)
            if(a[j-1]>a[j])
            {
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
    }
    for(int x=0; x<n; x++)
        std::cout<<a[x]<<" ";
}

auto main() -> int
{
    int tab[] = { 42, 9, -1, 18, 59, 3, 101, 31, 72, 12 };
    sort_asc(tab,10);
    return 0;
}
