bool cmp(vector<int>& a, vector<int>& b){
        return a[1] > b[1];
}
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int res=0;
        int n=boxTypes.size();
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        for(int i=0 ; i<n ; i++){
            if(boxTypes[i][0]<truckSize){
                res=res+(boxTypes[i][0]*boxTypes[i][1]);
                truckSize=truckSize-boxTypes[i][0];
            }
            else{
               res=res+(boxTypes[i][1] * truckSize);
                truckSize=0;
                break;
            }
          //  res=res+(boxTypes[i][0]*boxTypes[i][1]);
        }
        return res;
    }
};
