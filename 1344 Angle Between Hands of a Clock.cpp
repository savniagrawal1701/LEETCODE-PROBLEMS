class Solution {
public:
    double angleClock(int hour, int minutes) {
        // Handle 12 o'clock as 0
        if (hour == 12) hour = 0;
        
        // Calculate the absolute difference
        double ans = abs(30.0 * hour - 5.5 * minutes);
        
        // Return the smaller angle
        if (ans > 180.0) {
            return 360.0 - ans;
        }
        
        return ans;
    }
};
