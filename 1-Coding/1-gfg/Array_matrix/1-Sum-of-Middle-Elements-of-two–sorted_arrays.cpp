int findMidSum(int arr1[], int arr2[], int n) {
            // code here 
        int k=2*n;
        int idx[k];
        int s=0;
        for(int i=0;i<n;i++)
            idx[s++]=arr1[i];
        
        for(int i=0;i<n;i++)
            idx[s++]=arr2[i];
        
        sort(idx,idx+n+n);
        int mid=k/2;
        return idx[mid-1]+idx[mid];
        
    }