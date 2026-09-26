#include <cctype> 
#include <iostream> 
#include <string> 
using namespace std; 
 
class Validator { 
public: 
    bool validate(int marks) const { 
        return marks >= 0 && marks <= 100; 
    } 
 
    bool validate(double amount) const { 
        return amount > 0.0 && amount <= 1000000.0; 
    } 
 
    bool validate(const string& name) const { 
        if (name.empty()) { 
            return false; 
        } 
 
        for (char ch : name) { 
            if (!isalpha(static_cast<unsigned char>(ch)) && ch != ' ') { 
                return false; 
            } 
        } 
        return true; 
    } 
}; 
 
int main() { 
    Validator validator; 
 
    cout << boolalpha; 

cout << "Marks 88 valid: " << validator.validate(88) << endl; 
cout << "Marks 120 valid: " << validator.validate(120) << endl; 
cout << "Amount 4500.50 valid: " << validator.validate(4500.50) << endl; 
cout << "Name Priya Sharma valid: " 
<< validator.validate(string("Priya Sharma")) << endl; 
cout << "Name Priya123 valid: " 
<< validator.validate(string("Priya123")) << endl; 
}