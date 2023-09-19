#include <iostream>

int main() {
    int Train;
    std::cout << "Enter the train number: ";
    std::cin >> Train;
    std::string TrainRoute;
    switch (Train) {
        case 1:
            TrainRoute = "Kyiv-Chop";
            break;
        case 2:
            TrainRoute = "Lviv-Rivne";
            break;
        case 3:
            TrainRoute = "Kyiv-Vasylkiv";
            break;
        case 4:
            TrainRoute = "Kyiv-Kozyatyn";
            break;
        case 5:
            TrainRoute = "Kyiv-Fastiv";
            break;
        case 6:
            TrainRoute = "Kyiv-Zhitomyr";
            break;
        case 7:
            TrainRoute = "Kyiv-Boryspil";
            break;
            
            default:
            TrainRoute = "Unknown train route";
            break;
    }
    std::cout << "Train: " << TrainRoute << std::endl;
    
    return 0;
}