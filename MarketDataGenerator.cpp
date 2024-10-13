#include "MarketDataGenerator.hpp"

MarketDataGenerator::MarketDataGenerator()
{
    instruments[EURUSD] = {1.1000, 1.1005};
    instruments[USDJPY] = {110.00, 110.05};
    instruments[GBPUSD] = {1.3000, 1.3005};
    instruments[AUDUSD] = {0.7000, 0.7005};
    instruments[USDCHF] = {0.9500, 0.9505};
    instruments[USDCAD] = {1.2500, 1.2505};
    instruments[NZDUSD] = {0.6500, 0.6505};
    instruments[EURGBP] = {0.8500, 0.8505};
    instruments[EURJPY] = {120.00, 120.05};
    instruments[EURCHF] = {1.0800, 1.0805};
    instruments[XAUUSD] = {1800.00, 1800.50};
    instruments[XAGUSD] = {25.00, 25.05};
    instruments[XPDUSD] = {2200.00, 2205.00};
    instruments[XPTUSD] = {950.00, 955.00};
    instruments[XAUEUR] = {1600.00, 1605.00};
}

MarketDataGenerator::~MarketDataGenerator()
{

}

double MarketDataGenerator::randomlyIncrease(double price, double minIncrease = 0.0001, double maxIncrease = 0.01) {
    std::random_device rd; // Seed for randomness
    std::mt19937 gen(rd()); // Standard mersenne_twister_engine
    std::uniform_real_distribution<> dis(minIncrease, maxIncrease);
    double increment = dis(gen);
    return price + increment;
}

// Function to generate a small random decrease
double MarketDataGenerator::randomlyDecrease(double price, double minDecrease = 0.0001, double maxDecrease = 0.01) {
    std::random_device rd; // Seed for randomness
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(minDecrease, maxDecrease);
    double decrement = dis(gen);
    return price - decrement;
}

// Function to randomly increase or decrease the price
double MarketDataGenerator::randomlyGoUpOrDown(double price, double minChange = 0.0001, double maxChange = 0.01) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(minChange, maxChange);
    std::uniform_int_distribution<> direction(0, 1); // 0 for down, 1 for up

    double change = dis(gen);
    if (direction(gen) == 0) {
        return price - change; // Decrease
    } else {
        return price + change; // Increase
    }
}

int main() {
    int numSeconds = 600;
}
