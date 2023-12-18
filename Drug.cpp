//
// Created by Павел on 10.12.2023.
//

#include "Drug.h"

Drug::Drug() {
    name = "";
    price = 0;
    recipe = false;
    country = "";
    type = "";
}

Drug::Drug(std::string name, long double price, bool recipe, std::string country, std::string type) {
    this->name = name;
    this->price = price;
    this->recipe = recipe;
    this->country = country;
    this->type = type;
}

Drug::Drug(const Drug &other) {
    this->name = other.name;
    this->price = other.price;
    this->recipe = other.recipe;
    this->country = other.country;
    this->type = other.type;
}

Drug::~Drug() {
}

long double RatioRecipeInCountry(const Drug drug[], std::string CountryName, size_t CountOfDrugs) {
    long double result = 0;
    int yes = 0;
    int no = 0;
    for (int i = 0; i < CountOfDrugs; i++) {
        if (drug[i].getCountry() == CountryName)
            if (drug[i].getRecipe() == true)
                yes++;
            else
                no++;
    }
    result = yes / no;
    return result;
}

std::string MostExpensiveInCounry(const Drug drug[], std::string CountryName, size_t CountOfDrugs) {
    std::string max_price_name = "";
    long double max_price = 0;
    for (int i = 0; i < CountOfDrugs; i++){
        if (drug[i].getCountry() == CountryName) {
            if (drug[i].getPrice() > max_price) {
                max_price = drug[i].getPrice();
                max_price_name = drug[i].getName();
            }
        }
    }
    return max_price_name;
}

void ListOfDrugsOfOneType(const Drug drug[], std::string type[], size_t N, size_t CountOfDrugs) {
    for (int i = 0; i < CountOfDrugs; i++) {
        if (drug[i].getType() == type[N])
            std::cout << drug[i].getName() << std::endl;
    }
}