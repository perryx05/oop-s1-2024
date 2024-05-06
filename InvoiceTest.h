#include <iostream>
#include "Invoice.h"
#ifndef INVOICETEST_H
#define INVOICETEST_H

class InvoiceTest {
public:
    void runTests() {
        testAddServiceCost();
        testGetDollarsOwed();
        testGetInvoiceId();
        // Add other test methods here
    }

private:
    void testAddServiceCost() {
        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(10);
            if (invoice.getDollarsOwed() != 10) {
                std::cout << "Test 1 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(1);
            if (invoice.getDollarsOwed() != 1) {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }
              
            {
                Invoice invoice("ABCD");
                invoice.addServiceCost(0);
                if (invoice.getDollarsOwed() != 0) {
                    std::cout << "Test 3 failed!" << std::endl;
                }
            }
    
            {
                Invoice invoice("ABCD");
                invoice.addServiceCost(-1);
                if (invoice.getDollarsOwed() != 0) {
                    std::cout << "Test 4 failed!" << std::endl;
                }
            }
        // Add more test cases here
    }
    void testGetDollarsOwed() {
        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(10);
            if (invoice.getDollarsOwed() != 10) {
                std::cout << "Test 1 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(1);
            if (invoice.getDollarsOwed() != 1) {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }
              
            {
                Invoice invoice("ABCD");
                invoice.addServiceCost(0);
                if (invoice.getDollarsOwed() != 0) {
                    std::cout << "Test 3 failed!" << std::endl;
                }
            }
    
            {
                Invoice invoice("ABCD");
                invoice.addServiceCost(-1);
                if (invoice.getDollarsOwed() != 0) {
                    std::cout << "Test 4 failed!" << std::endl;
                }
            }
        // Add more test cases here
    }
    void testGetInvoiceId() {
        {
            Invoice invoice("ABCD");
            if (invoice.getInvoiceId() != "ABCD") {
                std::cout << "Test 1 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("XYZ");
            if (invoice.getInvoiceId() != "XYZ") {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }
        // Add more test cases here
    }
    // Add other test functions here

};
#endif
