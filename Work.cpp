//
// Created by ООО on 16/09/2024.
//
//Writing Output to the Console

#include <iostream>
using namespace std;

int main() {
  double sales = 9500;
  cout<<"Sales: $"<<sales<<endl;
  double stateTaxRate=.04;
  double stateTax=sales*stateTaxRate;
  cout <<"StateTax: $"<<stateTax<<endl;

  double countyTaxRate=.02;
  double countyTax=sales*countyTaxRate;
  cout <<"StateTax: $"<<countyTax<<endl;

  double TotalTax=stateTax+countyTax;
  cout<<"Total Tax: $"<<TotalTax<<endl;

  return 0;
}
