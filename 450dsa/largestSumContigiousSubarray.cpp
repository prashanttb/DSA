O(n^3)

 long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int i,j,k, sum=0,max_sum=arr[0];
        for(i=0;i<n;i++){
            //sum=0;
            for(j=i;j<n;j++){
                sum=0;
                //sum+=arr[j];
                for(k=i;k<=j;k++){
                    sum+=arr[k];
                    max_sum = max(max_sum, sum);
                    //cout<<sum<<" ";
                }
            }
        }
     
        return max_sum;
        
    }


O(n^2)

    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int i,j,k, sum=0,max_sum=arr[0];
        for(i=0;i<n;i++){
            sum=0;
            for(j=i;j<n;j++){
                sum+=arr[j];
                max_sum = max(max_sum, sum);

            }
        }
     
        return max_sum;
        
    }

O(n) Kadane's algo
iterate over all elems
if sum is -ve change it to 0
take a negative no in sum till sum not becomes negative
update max if sum > max

long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int i,j,k, sum=0,max_sum=arr[0];
        for(i=0;i<n;i++){
            if(sum<0) sum = 0;
            sum += arr[i];
            max_sum = max(sum, max_sum);
            
        }
     
        return max_sum;
        
    }
