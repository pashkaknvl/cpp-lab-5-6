#include <iostream>
#include "Drug.h"

int n;
std::string country;

int main() {
    Drug first;
    first.setAllInfo("Ambrobene", 200, false, "Germany", "Gaseous");
    Drug second("Deksalgin", 500, true, "Germany", "Soft");
    Drug third("Kagozel", 150, false, "Russia", "Solid");
    Drug forth("Parazetamol", 100, false, "Russia", "Solid");
    Drug fifth(second);
    fifth.setAllInfo("Gerbion", 400, false, "Slovenia", "Liquid");
    first.printAllInfo();
    std::string Types[] = {"Solid", "Soft", "Liquid", "Gaseous"};
    Drug drugs[] = {first, second, third,forth, fifth};
    std::cout << "Enter the country: " << std::endl;
    std::cin >> country;
    std::cout << std::endl;
    std::cout << "Choose the number of type[1..4]: " << std::endl;
    std::cin >> n;
    std::cout << std::endl;
    std::cout << "The most expensive drug in " << country << " is " << MostExpensiveInCountry(drugs, country, 5) << std::endl;
    std::cout << "Ratio prescription and over-the-counter drugs in " << country << " is " << RatioRecipeInCountry(drugs, country, 5) << std::endl;
    std::cout << "List of all drugs of " << n << " type:" << std::endl;
    ListOfDrugsOfOneType(drugs,Types,n-1,5);
    return 0;
}
