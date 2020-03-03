#include <iostream>
using namespace std;
int main (){
    string ardays[7] = {"monday", "tuesday","wednesday","thursday","friday","saturday","sunday"};
    string day,dayy;
    int k,j,ks,js,r;

    while(day!="monday"&&day!="tuesday"&&day!="wednesday"&&day!="thursday"&&day!="friday"&&day!="saturday"&&day!="sunday"){
        
        
        cout << "Enter the first day:";
        cin >> day;
        if (day != "monday" && day != "tuesday" && day != "wednesday" && day != "thursday" && day != "friday" && day != "saturday" && day != "sunday")
            {
                cout << "Invalid day" << endl;
        }
    else
        for(k=0;k<7;k++){
        if(day==ardays[k])
        {
            ks=k;
        }

        
        }
    cout << "" << day << " is "
         << "day " << ks+1<<endl;
    }

        while (dayy != "monday" && dayy != "tuesday" && dayy != "wednesday" && dayy != "thursday" && dayy != "friday" && dayy != "saturday" && dayy != "sunday")
        {

            cout << "Enter the last day:";
            cin >> dayy;
            if (dayy != "monday" && dayy != "tuesday" && dayy != "wednesday" && dayy != "thursday" && dayy != "friday" && dayy != "saturday" && dayy != "sunday")
            {
                cout << "Invalid day" << endl;
            }

            else{

            for (j = 0; j < 7; j++)
            {
                if (dayy == ardays[j])
                {
                    js = j;
                }
            }
            cout<<""<<dayy<<" is "<<"day "<<js+1<<endl;

                    r = js - ks;
                    if (r < 0 && r!=-1)
                    {

                        cout <<"The deviation is "<< r * -1<<" days";
                    }
                    if(r==-1){
                        cout<<"The deviation is "<<r*-1<<" day";
                    }
                    if (r == 0)
                    {
                        cout << "No deviation";
                    }
                    if (r > 0 && r!=1)
                    {
                        cout <<"The deviation is "<< r <<" days";
                    }
                    if(r==1){
                        cout<<"The deviation is "<<r<<" day";
                    }
            }
    }
}