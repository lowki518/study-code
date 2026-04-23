# Lab2 Section 5 - Finding errors in code

1. `using namespace std;` in line 4
    -> Just don't lmao
2. bad indentation for public and private fields in Article class
3. `Article` constructor should use member-initialize list
4. Use more `this` references in setter methods for clearer namings
5. Why is in sell `stock = stock - amount;` but in restock `this->stock += amount;`? 
6. same for applyDiscount, could be way nicer
7. `isAvailable` method can be more easily done with `return (stock > 0)`.
8. Do all fields in class need to be public? If yes then why do we do the setter and getter methods? 
9. No safe guards for the class fields -> no checking for negative stock, price, no type checking, etc.
