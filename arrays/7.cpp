vector<int> find3Numbers(vector<int> arr, int n)
{ int maxi = n-1;   
    int mini = 0;  
    int i;  
    int s[n];  
    s[0] = -1; 
    for (i = 1; i < n; i++)  
    {  
        if (arr[i] <= arr[mini])  
        {   s[i] = -1;  
            mini = i;  
           
        }  
        else
            s[i] = mini;  
    }  
  int greater[n];  
    greater[n-1] = -1;   
    for (i = n-2; i >= 0; i--)  
    {  
        if (arr[i] >= arr[maxi])  
        {  greater[i] = -1;  
            maxi = i;  
            
        }  
        else
            greater[i] = maxi;  
    }  
    vector <int> v;
    for (i = 0; i < n; i++)  
    {  
        if (s[i] != -1 && greater[i] != -1)  
        {  
            v.push_back(arr[s[i]]);
           v.push_back(arr[i]);
           v.push_back(arr[greater[i]]);
           return v;
        }  
    } 
    return v;
}
