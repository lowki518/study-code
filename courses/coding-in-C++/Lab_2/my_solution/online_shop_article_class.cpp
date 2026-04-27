#include <iostream>
#include <string>

class Article {
    private:
        std::string name;
        double price;
        int stock;
        std::string category;
        int id;

    public:
        Article(std::string name, double price, int stock, std::string category, int id) {
            this->name = name;
            this->price = price;
            this->stock = stock;
            this->id = id;
            this->category = category;
        }

        void setPrice(double price) {
            if (price < 0) {
                std::cout << "The price has to be greater than or equal to 0! " << std::endl;
            } else {
                this->price = price;
            }
        }

        void sell(int amount) {
            this->stock -= amount;
        }

        void restock(int amount) {
            this->stock += amount;
        }

        double applyDiscount(double percent) {
            this->price -= this->price * percent / 100;
            return this->price;
        }

        double getPrice() {
            return this->price;
        }

        bool isAvailable() {
            return (stock > 0);
        }

        void printInfo() {
            std::cout << "Article: " << name << std::endl;
            std::cout << "Category: " << category << std::endl;
            std::cout << "Price: " << price << std::endl;
            std::cout << "Stock: " << stock << std::endl;
            std::cout << "ID: " << id << std::endl;
        }
};

int main() {
    Article laptop("Laptop", 999.99, 10, "Electronics", 101);

    laptop.sell(15);
    laptop.restock(-5);
    laptop.applyDiscount(150);

    if (laptop.isAvailable()) {
        std::cout << "Article available" << std::endl;
    }

    laptop.printInfo();
}