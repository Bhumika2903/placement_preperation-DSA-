#include<bits/stdc++.h>
using namespace std;
/*
int NthRoot(int n, int m)
	{
	    // Code here.
		// T.C= O(log m)*(log n)
	     int low=1;
	     int high=m;
	     while(low<=high){
	         int mid=(low+high)/2;
	         if(pow(mid,n)==m){
	             return mid;
	         }
	         else if(pow(mid,n)<m){
	             low=mid+1;
	         }
	         else{
	             high=mid-1;
	         }
	             
	     }
	     return -1;
	}
*/
int func(int mid, int n, int m) {
    long long ans = 1;
    for (int i = 1; i <= n; i++) {
        ans = ans * mid;
        if (ans > m) return 2;
    }
    if (ans == m) return 1;
    return 0;
}

int NthRoot(int n, int m) {
    //Use Binary search on the answer space:
    int low = 1, high = m;
    while (low <= high) {
        int mid = (low + high) / 2;
        int midN = func(mid, n, m);
        if (midN == 1) {
            return mid;
        }
        else if (midN == 0) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
int main()
{
    int n = 3, m = 27;
    int ans = NthRoot(n, m);
    cout << "The answer is: " << ans << "\n";
    return 0;
}