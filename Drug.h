//
// Created by Павел on 10.12.2023.
//

#ifndef CPP_LAB_5_6_DRUG_H
#define CPP_LAB_5_6_DRUG_H
#include <string>
#include <iostream>


class Drug {
    std::string name;
    long double price;
    bool recipe;
    std::string country;
    std::string type;

public:

    Drug();
    Drug(std::string name, long double price,  bool recipe, std::string country, std::string type);
    Drug(const Drug &other);
    ~Drug();

    const long double getPrice() const { return price; }
    const bool getRecipe() const { return recipe; }
    const std::string getName() const { return name; }
    const std::string getCountry() const { return country; }
    const std::string getType() const { return type; }

    void setName(std::string newName) { this-> name = newName; }
    void setCountry(std::string newCountry) { this-> country = newCountry; }
    void setType(std::string newType) { this-> type = newType; }
    void setPrice(long double newPrice) { this-> price = newPrice; }
    void setRecipe(bool newRecipe) { this-> recipe = newRecipe; }
    void setAllInfo(std::string newName, long double newPrice, bool newRecipe, std::string newCountry, std::string newType) {
        this-> name = newName;
        this-> price = newPrice;
        this-> recipe = newRecipe;
        this-> country = newCountry;
        this-> type = newType;
    }

    void printName() const { std::cout << "Name: " << name << std::endl; }
    void printPrice() const { std::cout << "Price: " << price << std::endl; }
    void printRecipe() const {
        if (recipe == true)
            std::cout << "Recipe?: " << "Yes" << std::endl;
        else
            std::cout << "Recipe?: " << "No" << std::endl;
    }
    void printCountry() const { std::cout << "Country: " << country << std::endl; }
    void printType() const { std::cout << "Type: " << type << std::endl; }
    void printAllInfo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Price: " << price << std::endl;
        if (recipe == true)
            std::cout << "Recipe?: " << "Yes" << std::endl;
        else
            std::cout << "Recipe?: " << "No" << std::endl;
        std::cout << "Country: " << country << std::endl;
        std::cout << "Type: " << type << std::endl;
    }
};

std::string MostExpensiveInCountry(const Drug drug[], std::string CountryName, size_t CountOfDrugs);
long double RatioRecipeInCountry(const Drug drug[], std::string CountryName, size_t CountOfDrugs);
void ListOfDrugsOfOneType(const Drug drug[], std::string type[], size_t N, size_t CountOfDrugs);



#endif //CPP_LAB_5_6_DRUG_H
