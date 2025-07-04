class Solution {
public:
    int tribonacci(int n) {
        if(n == 0) return 0;
        if(n == 1 || n == 2) return 1;
        int arr[38];
        arr[0] = 0;
        arr[1] = 1;
        arr[2] = 1;
        long sum = 0;
        for(int i = 3; i < n; i++){
            arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
        }
        return arr[n-1] + arr[n-2] + arr[n-3];
    }
};