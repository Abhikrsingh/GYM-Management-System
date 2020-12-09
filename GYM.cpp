#include<iostream>
#include<vector>
using namespace std;
vector<int> id;
vector<string> names;
vector<vector<int> > monthAndFees;

int idd=1110;
int val=0;
vector<string> Trainee;
vector<vector<int> > doj;

vector<int> Sal;
int mem=0;


class GYM{
    public:
    GYM(){
        int idArr[5]={1105,1106,1107,1108,1109};
        string name[5]={"Abhishek Kumar Singh","Aakash ","Anil","Arjun","Rekha"};
        int startMonth[5]={7,4,6,2,4};
        int EndMonth[5]={1,1,6,6,6};
        int startyear[5]={2020,2020,2020,2020,2020};
        int Endyear[5]={2021,2021,2021,2020,2020};
        int fees[5]={5000,6000,8000,5000,4500};
        
        for(int i=0;i<5;i++){
            id.push_back(idArr[i]);
            names.push_back(name[i]);
            monthAndFees[val].push_back(startMonth[i]);
            monthAndFees[val].push_back(startyear[i]);
            monthAndFees[val].push_back(EndMonth[i]);
            monthAndFees[val].push_back(Endyear[i]);
            monthAndFees[val].push_back(fees[i]);
            val++;
        }
    }
    void Members(){
        int sizeOfMe=id.size();
        cout<<"\n\t\t Gym Members List\n\n";
        cout<<"\t We have total "<<sizeOfMe<<" Active Members in Our GYM\n\n\n";
        cout<<"Id\tName \t\t\t\tStart Month/Year\t\t  End Month/Year\t\t  Fees \n";
        for(int i=0;i<sizeOfMe;i++){
            cout<<id[i]<<"\t"<<names[i]<<"\t\t\t\t"<<monthAndFees[i][0]<<"/"<<monthAndFees[i][1]<<"\t\t"<< monthAndFees[i][2]<<"/"<<monthAndFees[i][3]<<"\t\t"<<monthAndFees[i][4]<<endl;
        }
        cout<<"\n\n";

        Views();

        

    }
    void TraineeLis(){
        int sizeOfMe=Trainee.size();
        cout<<"\n\t\t Gym Trainers List\n";
        cout<<"\t We have total "<<sizeOfMe<<" Active Trainers in Our GYM\n";
        cout<<"Name \tDate of Joining \t  Salary \n";
        for(int i=0;i<sizeOfMe;i++){
            cout<<Trainee[i]<<"\t"<<doj[i][0]<<"/"<<doj[i][1]<<"\t"<<Sal[i]<<endl;
        }
        cout<<"\n\n";

        Views();

    }
    void Facilities(){
        cout<<"\n\n\t\t\t Facilities Provided by our Gym\n\n";
        cout<<"\t We have Gym Trainers from Around India\n";

        cout<<"\t We have All Equipments that can be Adjusted to increase your Comfort \n";

        cout<<"\t We have Hot Water Bath Available in All our Gyms\n";

        cout<<"\t We have Seperate Portion for Girls\n";

        cout<<"\t We are Available in 20+ Countries\n";
Views();

        

    }
    void AddMember(){
        cout<<"\n\t\tAdd Members:\n";
        int sm,em,sy,ey,foFMember;
        string nameOfMember;
        idd++;
        cout<<"Enter Name          :    ";
        cin>>nameOfMember;
        
        cout<<"Enter Start Month   :    ";
        cin>>sm;
        cout<<"Enter Start Year    :    ";
        cin>>sy;
        cout<<"Enter End Month     :    ";
        cin>>em;
        cout<<"Enter End Year      :    ";
        cin>>ey;
        cout<<"Enter Fees          :    ";
        cin>>foFMember;
        id.push_back(idd++);
        names.push_back(nameOfMember);
        monthAndFees[val].push_back(sm);
        monthAndFees[val].push_back(sy);
        monthAndFees[val].push_back(em);
        monthAndFees[val].push_back(ey);
        monthAndFees[val++].push_back(foFMember);
        cout<<"Member Added Successfully\n ";
        Views();

    }
    void AddTrainer(){
        cout<<"\n\t\tAdd Trainer:\n";
        int mon,yea,salar;
        string Tname;
        cout<<"\n Enter Trainers Name    :    ";
        cin>>Tname;
        cout<<"\n Enter Joining Month    :    ";
        cin>>mon;
        cout<<"\n Enter Joining Month    :    ";
        cin>>yea;
        cout<<"\n Enter Trainer's Salary  :    ";
        cin>>salar;

        Trainee.push_back(Tname);
        doj[mem].push_back(mon);
        doj[mem++].push_back(yea);
        Sal.push_back(salar);

        cout<<"Trainer Add Successfully\n ";
        Views();


    }
    void Views(){
        int choice;
        cout<<"  1 Show GYM Facilities \n";
        cout<<"  2 Show GYM Members List \n";
        cout<<"  3 Show GYM Trainers List \n";
        cout<<"  4 Add GYM Members \n";
        cout<<"  5 Add GYM Trainers \n";
        cout<<"  6 Exit GYM System \n";

        cout<<"\n Enter your Choice :    ";
        cin>>choice;
        switch (choice)
        {
        case 1: Facilities();
            break;
        case 2: Members();
            break;
        case 3: TraineeLis();
            break;
        case 4: AddMember();
            break;
        case 5: AddTrainer();
            break;
        case 6: 
        cout<<"\n Exiting Gym System\n";
             exit(0);
             break;
        default:
            cout<<"\n\n Wrong Choice Try Again\n";
            Views();
            break;
        }



    }
};

int main(){
    monthAndFees.resize(1000);
    doj.resize(100);
    cout<<"\n\n\t\t Gym Management System\n\n";
    GYM staff;
    staff.Views();


    return 0;

}

