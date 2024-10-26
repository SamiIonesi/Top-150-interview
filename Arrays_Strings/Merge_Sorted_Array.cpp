#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int arraySize = m + n;
        vector<int> resultArray(arraySize);
        int i = 0, j = 0;

        if(n < 1)
            return;

        for(int index = 0; index < arraySize; index++)
        {
            if(i < m && (j >= n || nums1[i] <= nums2[j]))
            {
                resultArray[index] = nums1[i];
                i++;
            }
            else if(j < n && nums1[i] > nums2[j])
            {
                resultArray[index] = nums2[j];
                j++;
            }
            else if(j >= n)
            {
                resultArray[index] = nums1[i];
                i++;
            }
            else
            {
                resultArray[index] = nums2[j];
                j++;
            }
        }

        for(int i = 0; i < arraySize; i++)
        {
            nums1[i] = resultArray[i];
        }
    }