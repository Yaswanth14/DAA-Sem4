// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int c0 = 0, c1 = 0, c2 = 0;
        for(int i = 0; i < n; i++)
        {
       if(a[i] == 0) c0++;
       if(a[i] == 1) c1++;
       if(a[i] == 2) c2++;
        }

        for(int i = 0; i < n; i++)
        {
       if(i < c0) a[i] = 0;
       else if(i < c0 + c1) a[i] = 1;
       else if(i < c0 + c1 + c2) a[i] = 2;
        }
    }
    
};