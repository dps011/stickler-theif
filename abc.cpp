#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{   int n;
	    cin>>n;
	    int a[n],b[n];
         for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        b[i]=a[i];
	    }
	    int z;
        cin>>z;
               b[z+1]+=b[0];
	    for(int i=z+2;i<n;i++)
	        b[i]+=(b[i-(z+1)]>b[i-(z+2)])?b[i-(z+1)]:b[i-(z+2)];
            int max_sum=0;
	    for(int i=0;i<n;i++)
	    {
	        if(b[i]>max_sum)
                max_sum=b[i];
	    }

	    cout<<max_sum<<endl;

	}
	return 0;
}