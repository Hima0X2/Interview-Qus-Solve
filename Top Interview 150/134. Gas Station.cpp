class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size(),total_gas=0,total_cost=0,current_gas=0,pos=0;
        for(int i=0;i<n;i++){
            total_gas=total_gas+gas[i];
            total_cost=total_cost+cost[i];
            current_gas=current_gas+(gas[i]-cost[i]);
            if(current_gas<0){
                pos=i+1;
                current_gas=0;
            }
        }
        if(total_gas<total_cost){
            return -1;
        }
        return pos;
    }
};
