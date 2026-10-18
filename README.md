1.	Project Title: Shopping Cart Management System using Linked list to perform add product , remove product, and search product. display card operation 
2.	Problem Statement:  
The Shopping Cart Management System is designed to manage products efficiently using a Linked List data structure in C++. In online shopping applications, managing products is an important task that involves adding new products, removing unwanted products, searching for specific products, and displaying all products available in the shopping cart. 
Traditional data structures, such as arrays, have a fixed size, which may create limitations when the number of products changes frequently. Inserting or deleting products from an array may also require shifting elements, making the process less efficient in certain situations. 
To overcome these limitations, this project uses a Linked List, which allows dynamic memory allocation and flexible management of products. Each product is represented as a 
node containing product information, such as product ID, product name, price, and quantity. Each node is connected to the next node through a pointer. 
The system provides operations to add new products to the cart, remove existing products, search for products using their IDs or names, and display all products currently available in the cart. It helps users manage their shopping cart in a simple, organized, and efficient manner.
The main purpose of this project is to demonstrate the practical application of Linked List operations in a real-world shopping scenario and to understand how dynamic data structures can be used to manage changing data efficiently.

3. Objectives:  
-To Develop a Shopping Cart Management System 
The main objective of this project is to develop a simple and efficient Shopping Cart Management System using the C++ programming         language. The system helps users manage products by performing various operations such as adding, removing, searching, and displaying products in the shopping cart. 
-To Implement Linked List Data Structure 
The project aims to understand and implement the concept of a linked list for storing product information. Each product is represented as a node containing product details and a pointer that connects it to the next node, allowing products to be organized dynamically. 
-To Add Products to the Shopping Cart 
The system provides a facility to add new products to the shopping cart by entering details such as product ID, product name, price, and quantity. A new node is created dynamically and linked to the existing list, allowing users to add products whenever required. 
-To Remove Products from the Shopping Cart 
The project allows users to remove unwanted products from the shopping cart by entering the product ID. The system searches for the specified product and deletes the corresponding node while maintaining the proper links between the remaining nodes. 
-To Search for Specific Products 
The system enables users to search for a particular product using its unique product ID or name. It traverses the linked list and compares the product details to identify the required product, displaying its information if it is found. 
 
3. Theory:  
The Shopping Cart Management System is a simple application developed using the linked list data structure in C++. It is used to manage products in a shopping cart by performing operations such as adding, removing, searching, and displaying products. 
A linked list consists of nodes, where each node stores product information such as product ID, product name, price, and a pointer to the next node. Unlike arrays, linked lists can grow or shrink dynamically according to the requirements. This makes them suitable for managing shopping cart items. 
When a new product is added, a new node is created and linked to the existing list. When a product is removed, its node is deleted, and the links are adjusted. The searching operation helps locate a particular product using its ID or name. The display operation traverses the linked list and shows all products available in the cart. 
Thus, this project demonstrates the practical application of linked lists and helps in understanding dynamic memory allocation, insertion, deletion, searching, and traversal operations in C++.

5.Algorithm:
Step 1: Start the program. 
Step 2: Initialize an empty linked list to store product details. 
Step 3: Display the menu with the following operations: 
•	Add Product 
•	Remove Product 
•	Search Product 
•	Display Cart 
•	Exit 
Step 4: Accept the user's choice. 
Step 5: If the user selects Add Product, enter the product ID, name, price, and quantity, and insert a new node into the linked list. 
Step 6: If the user selects Remove Product, enter the product ID, search for the product, and delete its node if found. 
Step 7: If the user selects Search Product, enter the product ID and display the product details if found. 
Step 8: If the user selects Display Cart, traverse the linked list and display all products. 
Step 9: Repeat Steps 3–8 until the user selects Exit. 
Step 10: Stop the program.

6.	Result: 
The Shopping Cart Management System using Linked List was successfully developed using C++. The system provides a menu-driven interface that allows users to perform different shopping cart operations easily. 
The system successfully performs the following operations: 
•	Add Product: New products can be added to the shopping cart by entering product details such as product ID, name, price, and quantity. 
•	Remove Product: Existing products can be removed from the shopping cart using their unique product ID. 
•	Search Product: The system allows users to search for a specific product and view its details. 
•	Display Cart: All products stored in the shopping cart can be displayed in an organized manner. 
•	Dynamic Memory Management: The linked list allows memory to be allocated dynamically whenever a new product is added and released when a product is removed. 
The project provides practical knowledge of linked lists, pointers, dynamic memory allocation, insertion, deletion, searching, and traversal operations in C++. It also demonstrates how data structures can be used to solve real-world problems. 
Thus, the project achieves its main objective of managing shopping cart products effectively and provides a foundation for developing advanced shopping applications with additional features such as billing, total price calculation, and quantity updates. 

   
    
