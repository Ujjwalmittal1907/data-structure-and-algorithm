
	void perfectsum(int arr[] , int index ,int n , int sum , long long &ans , int &temp){
	    
	   
	       
	    
	    if(index == n){
	        
	       if( temp == sum )
	        ans++ ;
	        
	        return ;
	    }
	    
	    // include kerna hai 
	    
	    perfectsum(arr ,index+1 , n , sum , ans , temp+=arr[index]);
	     temp = temp-arr[index];
	    
	    // include nhi kiya 
	    perfectsum(arr , index+1 , n , sum , ans,temp);
	}
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        sort(arr,arr+n);
        long long ans = 0;
        int temp = 0;
        
        perfectsum(arr , 0 , n , sum , ans , temp);
        return ans%1000000007;
	}