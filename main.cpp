#include <iostream>

int main() {
    // 1. Set up empty containers to catch your typing inputs
    int buy_price = 0;
    int sell_price = 0;
    
    // 2. Ask the user for the input values
    std::cout << "Enter asset buy price: ";
    std::cin >> buy_price;      // "Character Input" funnel grabs your typing
    
    std::cout << "Enter asset sell price: ";
    std::cin >> sell_price;     // Funnel grabs the second value
    
    // 3. Process the logic math calculation
    int profit = sell_price - buy_price;
    
    // 4. Output the live solution calculation
    std::cout << "Live Calculated Profit: USD " << profit << std::endl;
    
    return 0;
}
