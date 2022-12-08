#include <iostream>
#include <string>
using namespace std;

struct Device
{
	string type;
	string material;
	string name;
	string company;
	double weight;
	double price;
};

Device fillTheDevice()
{
	Device device;
	cout << "Enter device type: ";
	cin >> device.type;
	cout << "Enter material: ";
	cin >> device.material;
	cout << "Enter name: ";
	cin >> device.name;
	cout << "Enter device company: ";
	cin >> device.company;
	cout << "Enter price: ";
	cin >> device.price;
	cout << "Enter weight: ";
	cin >> device.weight;

	return device;
}

void ShowDevice(const Device& device)
{
	cout << "Type of device: " << device.type << "\n";
	cout << "Material: " << device.material << "\n";
	cout << "Name: " << device.name << "\n";
	cout << "Device company: " << device.company << "\n";
	cout << "Price: " << device.price << "\n";
	cout << "Weight: " << device.weight << "\n";
}

int main()
{
	Device device;
	device = fillTheDevice();

	ShowDevice(device);
}