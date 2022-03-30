#include<iostream>
#include<string>

using namespace std;

class Market{
    public:
        void kasir();
        void berhitung();
        void struk();
    private:
        int scan[5], qty[5], uang, loop, price[5];
        float total;
        string nama[5];
};

void Market::kasir(){
    int i=0;
    do{
        system("cls");
        cout<<"+----------------------------------------+"<<endl;
        cout<<"|        Mini Market Murah Banget!!      |"<<endl;
        cout<<"+----------------------------------------+"<<endl;
        cout<<"| 1. Minyak Goreng 2L      Rp. 10000     |"<<endl;
        cout<<"| 2. Sponge                Rp. 2000      |"<<endl;
        cout<<"| 3. Ring                  Rp. 5000      |"<<endl;
        cout<<"| 4. Mie Sedap             Rp. 2500      |"<<endl;
        cout<<"| 5. Beng-beng MAX         Rp. 2000      |"<<endl;
        cout<<"+----------------------------------------+"<<endl;
        cout<<"Barang yang dipesan  : ";cin>>scan[i];
        if(scan[i]!=0){
            cout<<"Jumlah yang diambil  : ";cin>>qty[i];
        }
    }while(scan[i] != 0);
    loop=i;
}

void Market::berhitung(){
    for(int i=0; i<=loop; i++){
        if(scan[i]=1){nama[i]="Minyak Goreng 2L";price[i]=10000*qty[i];}
        else if(scan[i]=2){nama[i]="Sponge";price[i]=2000*qty[i];}
        else if(scan[i]=3){nama[i]="Ring";price[i]=5000*qty[i];}
        else if(scan[i]=4){nama[i]="Mie Sedap";price[i]=2500*qty[i];}
        else if(scan[i]=5){nama[i]="Beng-beng MAX";price[i]=2000*qty[i];}
        else{price[i]=0;}
        total+=price[i];
    }
}

void Market::struk(){
    system("cls");
    cout<<"+----------------------------------------+"<<endl;
    cout<<"|        Mini Market Murah Banget!!      |"<<endl;
    cout<<"+----------------------------------------+"<<endl;
    cout<<"| No | Nama Pesanan   |Qty |Total Harga  |"<<endl;
    for(int i=0; i<=loop; i++){
        cout<<"| "<<i+1<<"  | "<<nama[i]<<" | "<<qty[i]<<" | Rp. "<<price[i]<<" |"<<endl;
    }
    cout<<"+----------------------------------------+"<<endl;    
    cout<<"Total yang harus dibayar : Rp. "<<total<<endl;
    cout<<"Jumlah uang yang dibayar : Rp. ";cin>>uang;
    cout<<"Kembalian                : Rp. "<<uang-total<<endl;
}

int main(){
    Market x;
    x.kasir();
    x.berhitung();
    x.struk();
}