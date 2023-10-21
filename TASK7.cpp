#include<iostream>
using namespace std;

void patientsTreated(int visitedDays);

main()
{
    int visitedDays;

    cout << "Enter Number of days you visited Hospital: ";
    cin >> visitedDays;

    patientsTreated(visitedDays);
}
void patientsTreated(int visitedDays)
{
    int patientsVisited;
    int patientsTreated=0;
    int totalTreatedPatients=0;
    int untreatedPatients=0;
    int totalUntreatedPatients=0;
    for(int day=1;day<=visitedDays;day++)
    {
        cout << "Number of patients who visited hospital on Day " << day << ": " ;
        cin >> patientsVisited;
        if(patientsVisited<=7)
        {
            patientsTreated=patientsVisited;
        }
        else if ((totalUntreatedPatients>totalTreatedPatients) && day>=3)
        {
            patientsTreated=8;
        }
        else
        {
            patientsTreated=7;
        }
        totalTreatedPatients=totalTreatedPatients+patientsTreated;
        if(patientsVisited<=7)
        {
            untreatedPatients=0;
        }
        else if(patientsVisited>patientsTreated)
        {
            untreatedPatients=patientsVisited-patientsTreated;
        }
        totalUntreatedPatients=totalUntreatedPatients+untreatedPatients;
    }
    cout << "Treated Patients: " << totalTreatedPatients << endl;
    cout << "Untreated Patients: " << totalUntreatedPatients;
}