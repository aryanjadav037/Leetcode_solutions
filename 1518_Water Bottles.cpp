class Solution{
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int totalDrinks=numBottles;
        int emptyBottles=numBottles;

        while(emptyBottles >= numExchange){
            int newBottles=emptyBottles/numExchange;
            totalDrinks +=newBottles;
            emptyBottles = emptyBottles % numExchange + newBottles;
        }
        return totalDrinks;
    }
};