class Solution { 
public: 
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) { 
        if(cost1 + cost2 >= costBoth){ 
            if(need1 == need2){ 
                return 1LL * need1 * costBoth; 
            } else if (need1 > need2){ 
                return min(1LL * need2 * costBoth + 1LL * (need1 - need2) * cost1, 1LL * costBoth * max(need1, need2)); 
            } else { 
                return min(1LL * need1 * costBoth + 1LL * (need2 - need1) * cost2, 1LL * costBoth * max(need1, need2)); 
            } 
        } else { 
            return (1LL * need1 * cost1) + (1LL * need2 * cost2); 
        } 
    } 
};
