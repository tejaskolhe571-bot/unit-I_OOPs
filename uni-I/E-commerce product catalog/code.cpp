#include<iostream>                         // Includes the input/output stream library
#include<string>                           // Includes the string library
using namespace std;                       // Allows use of standard library names without std::

class Product{                             // Defines a class named Product
    int productID;                         // Stores the unique ID of the product as an integer
    string productName;                    // Stores the name of the product
    double price;                          // Stores the price of the product
    int stockQuantity;                     // Stores the quantity of the product in stock
    static int totalProducts;              // Static variable to store the total number of products

    public:                                // Starts the public section of the class
    Product(int ID,string name,double p,int stock)                       // Constructor to initialize product details
    :productID(ID),productName(name),price(p),stockQuantity(stock){          // Initializes all product data
        totalProducts++;                   // Increases total product count by 1
    }
    inline int getID()const{return productID;}                    // Returns the product ID
    inline string getName() const { return productName;}           // Returns the product name
    inline double getPrice() const {return price;}                 // Returns the product price

    void updateStock (int quantity){       // Function to update the stock quantity
        stockQuantity=quantity;            // Assigns the new quantity to stock
    }

    static int getTotalProducts(){         // Static function to get total number of products
        return totalProducts;              // Returns the current total product count
    }

    void display() const {                 // Function to display product information
        cout<<"ID:"<<productID<<"|Product:"<<productName<<"Price:Rs"<<price<<"|Stock:"<<stockQuantity<<endl;     // Displays product ID, name, price and stock
    }

    ~Product(){                            // Destructor called when a Product object is destroyed
        totalProducts--;                   // Decreases total product count by 1

    }

};
int Product::totalProducts=0;              // Defines and initializes the static variable to 0

int main(){                                // Main function where program execution starts
    Product p1(1001,"Laptop",60000,15);    // Creates first product with ID, name, price and stock
    Product p2(1002,"Mouse",500,50);       // Creates second product with ID, name, price and stock
    Product p3(1003,"Keyboard",1500,30);   // Creates third product with ID, name, price and stock

    cout<<"===Product Catalog==="<<endl;   // Prints the product catalog heading
    p1.display();                          // Displays details of the first product
    p2.display();                          // Displays details of the second product
    p3.display();                          // Displays details of the third product

    cout<<"\n Total Products in Catalog:"<<Product::getTotalProducts()<<endl;   // Displays the total number of products
}

