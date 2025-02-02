#include <iostream>
using namespace std;
int main(){
    int x, numbercrowns;
    double length, width, costcolor, costframe, costcrowns, costglass, costcardboard, totalcost;
    string color, crown, glass, cardboard;
    cout<<"Enter Length and Width of Picture= "<<endl;;
    cin>>length>>width;
    cout<<"Enter desired type of frame, 1 for Regular and 2 for Fancy= "<<endl;
    cin>>x;
    switch (x){
        case 1:
            cout<<"Do you want color other than white? "<<endl;
            cin>>color;
            if (color=="Yes"||color=="yes"){
                costcolor=((2*width)+(2*length))*0.1;
                cout<<"Do you want to put crowns? "<<endl;
                cin>>crown;
                if (crown=="Yes"||crown=="yes"){
                    cout<<"Enter the Number of crowns= "<<endl;
                    cin>>numbercrowns;
                    costcrowns=numbercrowns*0.35;
                    cout<<"Do you want Glass in top? "<<endl;
                    cin>>glass;
                    if (glass=="Yes"||glass=="yes"){
                        costglass=(length*width)*0.07;
                        cout<<"Do you want Cardboard at back? "<<endl;
                        cin>>cardboard;
                        if (cardboard=="Yes"||cardboard=="yes"){
                            costcardboard=(length*width)*0.02;
                        }
                        else {
                            costcardboard=0;
                        }
                    }
                    else {
                        costglass=0;
                        cout<<"Do you want Cardboard at back? "<<endl;
                        cin>>cardboard;
                        if (cardboard=="Yes"||cardboard=="yes"){
                            costcardboard=(length*width)*0.02;
                        }
                        else {
                            costcardboard=0;
                        }
                    }
                }
                else {
                    costcrowns=0;
                    cout<<"Do you want Glass in top? "<<endl;
                    cin>>glass;
                    if (glass=="Yes"||glass=="yes"){
                        costglass=(length*width)*0.07;
                        cout<<"Do you want Cardboard at back? "<<endl;
                        cin>>cardboard;
                        if (cardboard=="Yes"||cardboard=="yes"){
                            costcardboard=(length*width)*0.02;
                        }
                        else {
                            costcardboard=0;
                        }
                    }
                    else {
                        costglass=0;
                        cout<<"Do you want Cardboard at back? "<<endl;
                        cin>>cardboard;
                        if (cardboard=="Yes"||cardboard=="yes"){
                            costcardboard=(length*width)*0.02;
                        }
                        else {
                            costcardboard=0;
                        }
                    }
                }
            }
            else {
                costcolor=0;
                cout<<"Do you want to put crowns? "<<endl;
                cin>>crown;
                if (crown=="Yes"||crown=="yes"){
                    cout<<"Enter the Number of crowns= "<<endl;
                    cin>>numbercrowns;
                    costcrowns=numbercrowns*0.35;
                    cout<<"Do you want Glass in top? "<<endl;
                    cin>>glass;
                    if (glass=="Yes"||glass=="yes"){
                        costglass=(length*width)*0.07;
                        cout<<"Do you want Cardboard at back? "<<endl;
                        cin>>cardboard;
                        if (cardboard=="Yes"||cardboard=="yes"){
                            costcardboard=(length*width)*0.02;
                        }
                        else {
                            costcardboard=0;
                        }
                    }
                    else {
                        costglass=0;
                        cout<<"Do you want Cardboard at back? "<<endl;
                        cin>>cardboard;
                        if (cardboard=="Yes"||cardboard=="yes"){
                            costcardboard=(length*width)*0.02;
                        }
                        else {
                            costcardboard=0;
                        }
                    }
                }
                else {
                    costcrowns=0;
                    cout<<"Do you want Glass in top? "<<endl;
                    cin>>glass;
                    if (glass=="Yes"||glass=="yes"){
                        costglass=(length*width)*0.07;
                        cout<<"Do you want Cardboard at back? "<<endl;
                        cin>>cardboard;
                        if (cardboard=="Yes"||cardboard=="yes"){
                            costcardboard=(length*width)*0.02;
                        }
                        else {
                            costcardboard=0;
                        }
                    }
                    else {
                        costglass=0;
                        cout<<"Do you want Cardboard at back? "<<endl;
                        cin>>cardboard;
                        if (cardboard=="Yes"||cardboard=="yes"){
                            costcardboard=(length*width)*0.02;
                        }
                        else {
                            costcardboard=0;
                        }
                    }
                }
            }
            costframe=((2*length)+(2*width)*0.15);
            totalcost=costcolor+costframe+costcrowns+costglass+costcardboard;
            break;
        case 2:
            cout<<"Do you want color other than white? "<<endl;
            cin>>color;
            if (color=="Yes"||color=="yes"){
                costcolor=((2*width)+(2*length))*0.1;
                cout<<"Do you want to put crowns? "<<endl;
                cin>>crown;
                if (crown=="Yes"||crown=="yes"){
                    cout<<"Enter the Number of crowns= "<<endl;
                    cin>>numbercrowns;
                    costcrowns=numbercrowns*0.35;
                    cout<<"Do you want Glass in top? "<<endl;
                    cin>>glass;
                    if (glass=="Yes"||glass=="yes"){
                        costglass=(length*width)*0.07;
                        cout<<"Do you want Cardboard at back? "<<endl;
                        cin>>cardboard;
                        if (cardboard=="Yes"||cardboard=="yes"){
                            costcardboard=(length*width)*0.02;
                        }
                        else {
                            costcardboard=0;
                        }
                    }
                    else {
                        costglass=0;
                        cout<<"Do you want Cardboard at back? "<<endl;
                        cin>>cardboard;
                        if (cardboard=="Yes"||cardboard=="yes"){
                            costcardboard=(length*width)*0.02;
                        }
                        else {
                            costcardboard=0;
                        }
                    }
                }
                else {
                    costcrowns=0;
                    cout<<"Do you want Glass in top? "<<endl;
                    cin>>glass;
                    if (glass=="Yes"||glass=="yes"){
                        costglass=(length*width)*0.07;
                        cout<<"Do you want Cardboard at back? "<<endl;
                        cin>>cardboard;
                        if (cardboard=="Yes"||cardboard=="yes"){
                            costcardboard=(length*width)*0.02;
                        }
                        else {
                            costcardboard=0;
                        }
                    }
                    else {
                        costglass=0;
                        cout<<"Do you want Cardboard at back? "<<endl;
                        cin>>cardboard;
                        if (cardboard=="Yes"||cardboard=="yes"){
                            costcardboard=(length*width)*0.02;
                        }
                        else {
                            costcardboard=0;
                        }
                    }
                }
            }
            else {
                costcolor=0;
                cout<<"Do you want to put crowns? "<<endl;
                cin>>crown;
                if (crown=="Yes"||crown=="yes"){
                    cout<<"Enter the Number of crowns= "<<endl;
                    cin>>numbercrowns;
                    costcrowns=numbercrowns*0.35;
                    cout<<"Do you want Glass in top? "<<endl;
                    cin>>glass;
                    if (glass=="Yes"||glass=="yes"){
                        costglass=(length*width)*0.07;
                        cout<<"Do you want Cardboard at back? "<<endl;
                        cin>>cardboard;
                        if (cardboard=="Yes"||cardboard=="yes"){
                            costcardboard=(length*width)*0.02;
                        }
                        else {
                            costcardboard=0;
                        }
                    }
                    else {
                        costglass=0;
                        cout<<"Do you want Cardboard at back? "<<endl;
                        cin>>cardboard;
                        if (cardboard=="Yes"||cardboard=="yes"){
                            costcardboard=(length*width)*0.02;
                        }
                        else {
                            costcardboard=0;
                        }
                    }
                }
                else {
                    costcrowns=0;
                    cout<<"Do you want Glass in top? "<<endl;
                    cin>>glass;
                    if (glass=="Yes"||glass=="yes"){
                        costglass=(length*width)*0.07;
                        cout<<"Do you want Cardboard at back? "<<endl;
                        cin>>cardboard;
                        if (cardboard=="Yes"||cardboard=="yes"){
                            costcardboard=(length*width)*0.02;
                        }
                        else {
                            costcardboard=0;
                        }
                    }
                    else {
                        costglass=0;
                        cout<<"Do you want Cardboard at back? "<<endl;
                        cin>>cardboard;
                        if (cardboard=="Yes"||cardboard=="yes"){
                            costcardboard=(length*width)*0.02;
                        }
                        else {
                            costcardboard=0;
                        }
                    }
                }
            }
            costframe=((2*length)+(2*width)*0.25);
            totalcost=costcolor+costframe+costcrowns+costglass+costcardboard;
            break;
    }
    cout<<"Total cost for framing picture= "<<totalcost<<endl;
}
