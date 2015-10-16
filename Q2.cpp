#include <iostream>

//converting units

double farenheitFromCelcius(double c)
{
	return (1.8*c + 32);
}

double kelvinFromCelcius(double c)
{
	return( c + 273.15);
}

double celciusFromFarenheit(double f)
{
	return ((f - 32) / 1.8);
}

double celciusFromKelvin(double k)
{
	return (k - 273.15);
}

double farenheitFromKelvin(double k)
{
	return farenheitFromCelcius(celciusFromKelvin(k));
}

double kelvinFromFarenheit(double f)
{
	return kelvinFromCelcius(farenheitFromCelcius(f));
}

//main
int main()
{
	double input;
	int type;
	bool repeat = false;
	do
	{
		cout << "Celcius to Farenheit (enter 0)" << endl;
		cout << "Celcius to Kelvin (enter 1)" << endl;
		cout << "Farenheit to Celcius (enter 2)" << endl;
		cout << "Farenheit to Kelvin (enter 3)" << endl;
		cout << "Kelvin to Celcius (enter 4))" << endl;
		cout << "Kelvin to Farenheit (enter 5)" << endl;
		cout << "Conversion type: " << endl;
		cin >> type;


		switch (type)
		{
			case 0:
				cout << input << "Celcius is " << farenheitFromCelcius(input) << " Farenheit.";
				break;
			case 1:
				cout << input << "Celcius is " << kelvinFromCelcius(input) << " Kelvin.";
				break;
			case 2:
				cout << input << "Farenheit is " << celciusFromFarenheit(input) << " Celcius.";
				break;
			case 3:
				cout << input << "Farenheit is " << kelvinFromFarenheit(input) << " Kelvin.";
				break;
			case 4:
				cout << input << "Kelvin is " << celciusFromKelvin(input) << " Celcius.";
				break;
			case 5:
				cout << input << "Kelvin is " << farenheitFromKelvin(input) << " Farenheit.";
				break;
			default:
				cout << "An error has occured, please try again" << endl;
				repeat = true;
				break;
		}
	} while (repeat);
}
