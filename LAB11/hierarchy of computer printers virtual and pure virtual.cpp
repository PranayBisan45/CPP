//"	Using virtual and pure virtual functions implement hierarchy of computer printers
#include<iostream>
using namespace std;
class NetworkPrinter
{
	protected:
	int netwkid;
	public:
		 NetworkPrinter()
		{
			cout<<"In default of Network Printer"<<endl;
		}
		NetworkPrinter(int n)
		{
			netwkid=n;
		}
		virtual  show() = 0;
}; NetworkPrinter::show(){
	cout<<"Network Printer Id is: "<<netwkid;
}
class FilePrinter
{
	protected:
	int fileid;
	public:
		FilePrinter()
		{
			cout<<"In default of File Printer.";
		}
		FilePrinter(int f)
		{
			fileid=f;
		}
		void show()
		{
			cout<<"File Printer id is: "<<fileid;
		}
};
class LaserPrinter:public NetworkPrinter,public FilePrinter
{
	int laseid;
	public:
		LaserPrinter()
		{
			cout<<"In default of Laser Printer."<<endl;
		}
		LaserPrinter(int l,int ntwkid,int fileid ):NetworkPrinter(ntwkid),FilePrinter(fileid)
		{
			laseid=l;
			
		}
		 show()
		{
			cout<<"Laser Printer id is: "<<laseid<<endl;
			cout<<"Laser Printer id is: "<<laseid<<"\n Network Printer id is: "<<netwkid<<"\n File Printer id is: "<<fileid<<endl;
			
		}
		friend void update(LaserPrinter &);
};
void update(LaserPrinter &t)
{
	cout<<"Enter id to update in laserprinter.";
	cin>>t.laseid;
	cout<<"\n Updated Laser Printer id is: ";
	cout<<t.laseid;
};
int main()
{
	LaserPrinter L(150,250,350);
	L.show();
	LaserPrinter L1;
	update(L1);
	
}
