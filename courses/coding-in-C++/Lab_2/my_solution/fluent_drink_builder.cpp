#include <ostream>
#include <string>
#include <iostream>


constexpr int default_temperature() {
    return 85; // 85 Celsius is standard temp
}

constexpr int max_sugar_amount() {
    return 80; // 80% sugar is max
}


class DrinkBuilder {
    private:
        std::string name;
        int sugar = 0;
        int temperature = DEFAULT_TEMP;
        bool withMilk = false;
        // static consts
        static const int DEFAULT_TEMP = default_temperature();
        static const int MAX_SUGAR = max_sugar_amount();

    public:
        DrinkBuilder& setName(const std::string& name) {
            this->name = name;
            return *this;
        }

        DrinkBuilder& setSugar(int sugar) {
            if (sugar > MAX_SUGAR) {
                std::cout << "Cannot add more sugar than " 
                    << MAX_SUGAR << " units. " << std::endl;
            } else if (sugar < 0) {
                std::cout << "Sugar has to be a positive value. " << std::endl;
            } else {
                this->sugar = sugar;
            }
            return *this;
        }

        DrinkBuilder& setTemperature(int temperature) {
            if (temperature < 0) {
                std::cout << "Temperature has to be bigger 0! " << std::endl;
            } else {
                this->temperature = temperature;
            }
            return *this;
        }
        
        DrinkBuilder& setWithMilk(bool withMilk) {
            this->withMilk = withMilk;
            return *this;
        }

        void print() {
            std::cout << "Drink: " << this->name <<
                "\nSugar: " << this->sugar << 
                "\nTemperature: " << this->temperature <<
                "\nWith milk: " << std::boolalpha << this->withMilk << std::endl;
        }

        const bool isValid() {
            return true;
        }
};

int main() {
    DrinkBuilder builder;
    builder.setName("Tea")
            .setSugar(2)
            .setTemperature(65)
            .setWithMilk(true)
            .print();
}