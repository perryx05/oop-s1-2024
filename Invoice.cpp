#include "Invoice.h"

Invoice::Invoice(string invoiceId)
{
   this -> invoiceId = invoiceId;
}

void Invoice :: addServiceCost(double costDollars)
{
     if (costDollars > 0)
     {
         this -> dollarsOwed += costDollars;
     }
}
double Invoice :: getDollarsOwed()
{
    return dollarsOwed;
}
string Invoice :: getInvoiceId()
{
    return invoiceId;
}