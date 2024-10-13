#ifndef MARKET_DATA_GENERATOR
#define MARKET_DATA_GENERATOR

#include <string>
#include <vector>
#include <map>
#include <random>

enum Instrument
{
    EURUSD,
    USDJPY,
    GBPUSD,
    AUDUSD,
    USDCHF,
    USDCAD,
    NZDUSD,
    EURGBP,
    EURJPY,
    EURCHF,
    XAUUSD,
    XAGUSD,
    XPDUSD,
    XPTUSD,
    XAUEUR
};

std::map<Instrument, std::vector<double>> instruments;

class MarketDataGenerator
{

private:
public:
    double MarketDataGenerator::randomlyIncrease(double price, double minIncrease, double maxIncrease);
    double MarketDataGenerator::randomlyDecrease(double price, double minDecrease, double maxDecrease);
    double MarketDataGenerator::randomlyGoUpOrDown(double price, double minChange, double maxChange);
    MarketDataGenerator();
    ~MarketDataGenerator();
};

#endif