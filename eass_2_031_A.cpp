#include <iostream>
using namespace std;

int izal[37];
int low;
int high;

void BinarySearch() 
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (izal[37] == mid)
            return;
        if (izal[37] > mid){
             low = mid + 1;
        }
        if (izal[37] < mid){
             high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int izal[] = { 2,5,8,10,12,20,37 };
    int n = 37;
    int result = (37, 0, n - 1, 20);
    if (result == -1) {
        