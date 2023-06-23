class Solution {
public:
int next (vector<int>&arr,int target){
    int ans=-1;
    int s=0,e=arr.size()-1,mid;
    while(s<=e){
        mid=(e-s)/2 +s;
        if(arr[mid]>target){
            ans=arr[mid];
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
    int longestArithSeqLength(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }

        int ans=-1;
        // for(auto it:mp[0]){
            // cout<<it<<" ";
        // }
        for(int diff=-500;diff<=500;diff++){
              int curr=0;
           for(int i=0;i<nums.size();i++){
              
             curr=1;
              int num=nums[i]+diff;
              int x=i;
              while(x!=-1 && mp.find(num)!=mp.end()){
        //    cout<<x<<" "<<num<<"diff : "<<diff<<endl;
                x=next(mp[num],x);         
               if(x!=-1)
           curr++;

               num+= diff;
              }

ans=max(ans,curr);

           }

        }
        return ans;
    }
};
