
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Node {
    int id;
    string name;
    int quantity;
    double price;
    Node* next;
};

Node* head = NULL;

// Add Product
void addProduct() {
    Node* newNode = new Node;

    cout << "\nEnter Product ID: ";
    cin >> newNode->id;

    Node* temp = head;

    while (temp != NULL) {
        if (temp->id == newNode->id) {
            cout << "Product ID already exists!\n";
            delete newNode;
            return;
        }
        temp = temp->next;
    }

    cout << "Enter Product Name: ";
    cin >> ws;
    getline(cin, newNode->name);

    cout << "Enter Quantity: ";
    cin >> newNode->quantity;

    cout << "Enter Price: ";
    cin >> newNode->price;

    if (newNode->quantity <= 0 || newNode->price < 0) {
        cout << "Invalid quantity or price!\n";
        delete newNode;
        return;
    }

    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    cout << "\nProduct added successfully!\n";
}

// Display Products
void displayProducts() {
    if (head == NULL) {
        cout << "\nShopping Cart is Empty!\n";
        return;
    }

    Node* temp = head;
    double total = 0;

    cout << "\n================ SHOPPING CART ================\n";
    cout << left << setw(8) << "ID"
         << setw(20) << "Product"
         << setw(10) << "Qty"
         << setw(12) << "Price"
         << setw(12) << "Amount" << "\n";

    cout << "------------------------------------------------------------\n";

    while (temp != NULL) {
        double amount = temp->quantity * temp->price;
        total += amount;

        cout << left << setw(8) << temp->id
             << setw(20) << temp->name
             << setw(10) << temp->quantity
             << setw(12) << fixed << setprecision(2) << temp->price
             << setw(12) << amount << "\n";

        temp = temp->next;
    }

    cout << "------------------------------------------------------------\n";
    cout << "Total Cart Value: Rs. " << total << "\n";
}

// Search Product
void searchProduct() {
    int id;
    cout << "\nEnter Product ID to Search: ";
    cin >> id;

    Node* temp = head;

    while (temp != NULL) {
        if (temp->id == id) {
            cout << "\nProduct Found!\n";
            cout << "Product ID : " << temp->id << "\n";
            cout << "Name       : " << temp->name << "\n";
            cout << "Quantity   : " << temp->quantity << "\n";
            cout << "Price      : Rs. " << temp->price << "\n";
            cout << "Total      : Rs. "
                 << temp->quantity * temp->price << "\n";
            return;
        }
        temp = temp->next;
    }

    cout << "Product Not Found!\n";
}

// Remove Product
void removeProduct() {
    int id;

    cout << "\nEnter Product ID to Remove: ";
    cin >> id;

    Node* temp = head;
    Node* prev = NULL;

    while (temp != NULL && temp->id != id) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Product Not Found!\n";
        return;
    }

    if (prev == NULL) {
        head = temp->next;
    } else {
        prev->next = temp->next;
    }

    cout << temp->name << " removed successfully!\n";
    delete temp;
}

// Update Quantity
void updateQuantity() {
    int id, qty;

    cout << "\nEnter Product ID: ";
    cin >> id;

    Node* temp = head;

    while (temp != NULL) {
        if (temp->id == id) {
            cout << "Current Quantity: " << temp->quantity << "\n";
            cout << "Enter New Quantity: ";
            cin >> qty;

            if (qty <= 0) {
                cout << "Quantity must be greater than zero!\n";
                return;
            }

            temp->quantity = qty;
            cout << "Quantity Updated Successfully!\n";
            return;
        }
        temp = temp->next;
    }

    cout << "Product Not Found!\n";
}

// Update Price
void updatePrice() {
    int id;
    double price;

    cout << "\nEnter Product ID: ";
    cin >> id;

    Node* temp = head;

    while (temp != NULL) {
        if (temp->id == id) {
            cout << "Current Price: Rs. " << temp->price << "\n";
            cout << "Enter New Price: ";
            cin >> price;

            if (price < 0) {
                cout << "Price cannot be negative!\n";
                return;
            }

            temp->price = price;
            cout << "Price Updated Successfully!\n";
            return;
        }
        temp = temp->next;
    }

    cout << "Product Not Found!\n";
}

// Calculate Bill
void calculateBill() {
    Node* temp = head;
    double total = 0;
    int count = 0;

    cout << "\n============= FINAL BILL =============\n";

    if (head == NULL) {
        cout << "Cart is empty!\n";
        return;
    }

    while (temp != NULL) {
        double amount = temp->quantity * temp->price;

        cout << temp->name << " x " << temp->quantity
             << " = Rs. " << fixed << setprecision(2)
             << amount << "\n";

        total += amount;
        count++;
        temp = temp->next;
    }

    double discount = 0;

    if (total >= 5000) {
        discount = total * 0.10;
    } else if (total >= 2000) {
        discount = total * 0.05;
    }

    cout << "--------------------------------------\n";
    cout << "Subtotal : Rs. " << total << "\n";
    cout << "Discount : Rs. " << discount << "\n";
    cout << "Final Bill: Rs. " << total - discount << "\n";
    cout << "Products : " << count << "\n";
    cout << "======================================\n";
}

// Count Products
void countProducts() {
    Node* temp = head;
    int count = 0;
    int totalQuantity = 0;

    while (temp != NULL) {
        count++;
        totalQuantity += temp->quantity;
        temp = temp->next;
    }

    cout << "\nDifferent Products: " << count << "\n";
    cout << "Total Items in Cart: " << totalQuantity << "\n";
}

// Most Expensive Product
void expensiveProduct() {
    if (head == NULL) {
        cout << "\nShopping Cart is Empty!\n";
        return;
    }

    Node* temp = head;
    Node* expensive = head;

    while (temp != NULL) {
        if (temp->price > expensive->price) {
            expensive = temp;
        }
        temp = temp->next;
    }

    cout << "\nMost Expensive Product\n";
    cout << "Name  : " << expensive->name << "\n";
    cout << "Price : Rs. " << expensive->price << "\n";
}

// Clear Cart
void clearCart() {
    Node* temp;

    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }

    cout << "\nShopping Cart Cleared Successfully!\n";
}

// Main Function
int main() {
    int choice;

    do {
        cout << "\n========================================\n";
        cout << "       ONLINE SHOPPING CART SYSTEM\n";
        cout << "========================================\n";
        cout << "1. Add Product\n";
        cout << "2. Remove Product\n";
        cout << "3. Search Product\n";
        cout << "4. Display Shopping Cart\n";
        cout << "5. Update Product Quantity\n";
        cout << "6. Update Product Price\n";
        cout << "7. Calculate Final Bill\n";
        cout << "8. Count Products\n";
        cout << "9. Find Most Expensive Product\n";
        cout << "10. Clear Shopping Cart\n";
        cout << "11. Exit\n";
        cout << "========================================\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addProduct();
                break;

            case 2:
                removeProduct();
                break;

            case 3:
                searchProduct();
                break;

            case 4:
                displayProducts();
                break;

            case 5:
                updateQuantity();
                break;

            case 6:
                updatePrice();
                break;

            case 7:
                calculateBill();
                break;

            case 8:
                countProducts();
                break;

            case 9:
                expensiveProduct();
                break;

            case 10:
                clearCart();
                break;

            case 11:
                cout << "\nThank You for Shopping!\n";
                break;

            default:
                cout << "\nInvalid Choice! Try Again.\n";
        }

    } while (choice != 11);

    clearCart();
    return 0;
}
