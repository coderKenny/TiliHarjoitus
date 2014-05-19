
#include "Common.h"

#include "Tili.h"
#include "SaastoTili.h"
#include "LuotollinenTili.h"


void main (void)
{
	double nosto=-1,talletus=-1;
	LuotollinenTili* luotollinenTili=nullptr;
	SaastoTili* saastoTili=nullptr;

	//void* voidPointer;

	//voidPointer=&saastoTili;

	//Tili* myDynamic= static_cast<Tili*>(saastoTili);

	//myDynamic->Talleta(500);

	//cout<<myDynamic->Saldo();


	cout<<"\n\n";

	luotollinenTili = new LuotollinenTili(0);
	saastoTili = new SaastoTili(0);

	saastoTili->setYlaraja(500);


	cout<<"Kuinka paljon haluat tallettaa saastotilille : ";
	while(talletus<=0)
		cin>>talletus;

	cout<< endl;
	saastoTili->Talleta(talletus);

	cout<<"Saastotilin saldo on nyt "<<saastoTili->Saldo();

	cout<<"\n\nKuinka paljon haluat nostaa saastotililta : ";
	while(nosto<=0)
		cin>>nosto;

	cout<< endl;
	saastoTili->Nosto(nosto);

	luotollinenTili->setLuottoraja(500);

	talletus=-1;
	nosto=-1;

	cout<<"\n\nKuinka paljon haluat tallettaa luotolliselle tilillesi : ";
	while(talletus<=0)
		cin>>talletus;

	cout<< endl;
	luotollinenTili->Talleta(talletus);

	cout<<"\n\nKuinka paljon haluat nostaa luotolliselta tililtasi : ";
	while(nosto<=0)
		cin>>nosto;

	cout<< endl;
	luotollinenTili->Nosto(nosto);



	// Call destructors if needed -->
	if(luotollinenTili)
		delete luotollinenTili;

	if(saastoTili)
		delete saastoTili;

	getchar();getchar();
}