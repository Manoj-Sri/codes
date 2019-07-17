using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int minendhere=1,maxendhere=1,maxsofar=1;
        int flag=0;
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                maxendhere*=arr[i];
                minendhere=min(minendhere*arr[i],1);
                flag=1;
            }
            else if(arr[i]==0){
                maxendhere=1;
                minendhere=1;
            }
            else {
                int t=maxendhere;
                maxendhere=max(minendhere*arr[i],1);
                minendhere=t*arr[i];
            }
            if(maxsofar<maxendhere)maxsofar=maxendhere;
            
        }
        if(flag==0&&maxsofar==1)cout<<"0"<<endl;
        cout<<maxsofar<<endl;

    }
}
