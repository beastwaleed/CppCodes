#include<iostream>
#include<string>
using namespace std;

struct ProductData{
    string ProductName;
    double Price;
    int Stock;
};

// Function to input product data from user
void createProductData(ProductData &pr){
    cout <<"Enter the Product Name: ";
    cin>>pr.ProductName;
    cout<< "Enter Product Price: ";
    cin>>pr.Price;
    cout<< "Enter Product Stock: ";
    cin>>pr.Stock;
}

//Function to display product data
void displayProductData(ProductData pr){
    cout<< "Product Name: "<<pr.ProductName<<endl;
    cout<< "Product Price: "<<pr.Price<<endl;
    cout<< "Product Stock: "<<pr.Stock<<endl;
}

int main(){
    ProductData pr1, pr2;
    createProductData(pr1);
    createProductData(pr2);
    displayProductData(pr1);
    displayProductData(pr2); // Display data for pr2

    return 0;
}
