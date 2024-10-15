#include <iostream>

using namespace std;

int main ()
{
	float sugarPriceUSD, coffeePriceUSD, milkPriceUSD;
	float ricePricePound, sardinesPricePound;
        float sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
        float sugarCostPHP, coffeeCostPHP; milkCostPHP;
	float usdToPhp = $7.50/1;
	
	cout << "Enter Price of Sugar($)\t\t\t|\t";
	cin >> sugarPriceUSD;
	cout << "Enter Price of Rice(Pound)\t\t|\t";
	cin >> ricePricePound;
	cout << "Enter Price of Sardines(Pound)\t|\t";
	cin >> sardinesPricePound;
	cout << "Enter Price of Coffee($)\t\t|\t";
	cin >> coffeePriceUSD;
	cout << "Enter Price of Milk($)\t\t|\t";
	cin >>  milkPriceUSD;
	
	cout << endl;

	cout << "Enter Sugar Quantity\t\t\t|\t";
	cin >> sugarQty;
	cout << "Enter Rice Quantity\t\t\t|\t";
	cin >> riceQty;
	cout << "Enter Sardines Quantity\t\t|\t";
	cin >> sardinesQty;
	cout << "Enter Coffee Quantity\t\t\t|\t";
	cin >> coffeeQty;
	cout << "Enter Milk Quantity\t\t\t|\t";
	cin >>  milkQty;

	sugarCostPHP = sugarPriceUSD * usdToPhp;
	cout << "Enter Price of Sugar (Php)\t|\t" << sugarCostPHP << endl;
	
	coffeeCostPHP = coffeePriceUSD * usdToPhp;
	cout << "Enter Price of Coffee (Php)\t|\t" << coffeeCostPHP << endl;
	
	milkCostPHP = milkPriceUSD * usdToPhp;
	cout << "Enter Price of Milk (Php)\t|\t" << milkCostPHP << endl;

	return 0;
	
}
