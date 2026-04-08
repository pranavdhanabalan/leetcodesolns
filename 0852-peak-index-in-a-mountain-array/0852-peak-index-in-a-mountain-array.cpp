class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int beg=0,end=arr.size()-1;
        while(beg<end){
            int mid=(beg+end)/2;
            if (arr[mid-1]>arr[mid]){
                    end=mid;                
            }
            else if((arr[mid]>arr[mid+1])&&(arr[mid]>arr[mid-1])){
                return mid;
            }
            else{
                beg=mid+1;
            }
        }
        return beg;
    }
};