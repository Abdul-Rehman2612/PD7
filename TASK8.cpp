#include<iostream>
#include<iomanip>
using namespace std;

void averagePrice(int cargoCount);

main()
{
    int cargoCount;

    cout << "Enter the count of cargo for transportation: ";
    cin >> cargoCount;

    averagePrice(cargoCount);
}
void averagePrice(int cargoCount)
{
    float tonnage,minibusTonnage=0,busTonnage=0,trainTonnage=0,totalTonnage=0;
    float minibusPrice=200.00,busPrice=175.00,trainPrice=120.00,averagePrice=0;
    float minibusPer=0,busPer=0,trainPer=0;
    for(int count=1;count<=cargoCount;count++)
    {
        cout << "Enter the tonnage of cargo " << count << ": ";
        cin >> tonnage;

        if(tonnage>0 && tonnage<=3)
        {
            minibusTonnage=minibusTonnage+tonnage;
        }
        else if(tonnage>3 && tonnage<=11)
        {
            busTonnage=busTonnage+tonnage;
        }
        else
        {
            trainTonnage=trainTonnage+tonnage;
        }
    }
    totalTonnage=minibusTonnage+busTonnage+trainTonnage;
    averagePrice=(minibusTonnage*minibusPrice+busTonnage*busPrice+trainTonnage*trainPrice)/totalTonnage;
    minibusPer=minibusTonnage/totalTonnage*100;
    busPer=busTonnage/totalTonnage*100;
    trainPer=trainTonnage/totalTonnage*100;
    cout << fixed << setprecision(2) << averagePrice << endl << fixed << setprecision(2) << minibusPer << "%" << endl << fixed << setprecision(2) << busPer << "%" << endl << fixed << setprecision(2) << trainPer << "%";


}