#ifndef INVOICE_H
#define INVOICE_H

# include <iostream>
using namespace std;

class Invoice
{
    private:
    string invoiceId;
    double dollarsOwed;
    public:
    Invoice(string invoiceId);
    void addServiceCost(double costDollars);
     double getDollarsOwed();
     string getInvoiceId();


};
#endif
