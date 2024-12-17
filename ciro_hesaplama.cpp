
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0)); 
    int yil;
    int ceyrek;
    int ciro[5][12];
    int ortciro[5];
    int toplamciro; 
    int ciroceyrek; 
    int toplamciroceyrek = 0;
    char durum;

do
{
        for (int i = 0; i < 5; i++) {
        toplamciro = 0;  
        for (int j = 0; j < 12; j++) {
            ciro[i][j] = rand() % 4900 ;  
            toplamciro += ciro[i][j];
        }
        ortciro[i] = toplamciro / 12;
    }
    cout << "Yil Giriniz (1-2-3-4-5) : ";
    cin >> yil;
    if (yil >= 1 && yil <= 5) 
    {cout << yil << ". Yilin Ortalama Cirosu: " << ortciro[yil - 1] << endl;
    cout << yil << ". Yillin Ortalama Cirosundan Yüksek Olan Aylar :"<<endl;
    for (int i = 0; i < 12; i++) 
    {
    if (ciro[yil - 1][i] > ortciro[yil - 1]) 
    cout << (i + 1)  << ". Ay  : " << ciro[yil - 1][i] << endl;  
    }
    }
    cout<<"Ceyrek Giriniz : (1-2-3-4) : ";
    cin>>ceyrek;
     if (ceyrek >= 1 && ceyrek <= 4) 
    {
    for (int i = (ceyrek - 1) * 3; i < ceyrek * 3; i++) {
    toplamciroceyrek += ciro[yil - 1][i];
    }
    cout << yil << ". Yilin " << ceyrek << ". Ceyreginin Ciro Ortalamasi : " << toplamciroceyrek/3 << endl;
    }
cout<<"Devam Etmek Ister Misiniz ? (E/H)"<<endl;
cin>>durum;
}
while( durum =='E');





return 0;

}
