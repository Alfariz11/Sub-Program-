/*
Program kasir sederhana dengan menggunakan perulangan, percabangan, dan sub-program

dimana :
    jika jumlah barang > 25000, maka diskon 30 %
    dapat melkukan pemesanan kembali
    menghitung kembalian

*/
#include <iostream>

using namespace std;


void kasir (int pilihan){
    int jumlahBarang, total = 0, harga, bayar;
    string barang;
    
    do { 
        //Pilihan dari menu yang ditampilkan 
         cout << "Masukkan pilihan (1/2/3/4/5/6) : ";
         cin >> pilihan;
        
    switch (pilihan){
        case 1 : 
            barang = "Ayam bakar";
            harga = 15000;
            cout << "Jumlah barang: ";
            cin >> jumlahBarang;
            total += jumlahBarang * harga; // total akumulasi semua pesanan
            cout<<endl;
            cout <<"-------------------------------------"<<endl;
            cout << jumlahBarang << " " << barang;
            cout << " = Rp. " << jumlahBarang * harga << endl;
            cout <<"-------------------------------------"<<endl;
            cout<<endl;
            break;
        case 2 : 
            barang = "Ayam goreng";
            harga = 8000;
            cout << "Jumlah barang: ";
            cin >> jumlahBarang;
            total += jumlahBarang * harga;
            cout<<endl;
            cout <<"-------------------------------------"<<endl;
            cout << jumlahBarang << " " << barang;
            cout << " = Rp. " << jumlahBarang * harga << endl;
            cout <<"-------------------------------------"<<endl;
            cout<<endl; 
            break;
        case 3 : 
            barang = "Ayam geprek";
            harga = 10000;
            cout << "Jumlah barang: ";
            cin >> jumlahBarang;
            total += jumlahBarang * harga;
            cout<<endl;
            cout <<"-------------------------------------"<<endl;
            cout << jumlahBarang << " " << barang;
            cout << " = Rp. " << jumlahBarang * harga << endl;
            cout <<"-------------------------------------"<<endl;
            cout<<endl;
            break;
        case 4 : 
            barang = "Nasi goreng";
            harga = 12000;
            cout << "Jumlah barang: ";
            cin >> jumlahBarang;
            total += jumlahBarang * harga;
            cout<<endl;
            cout <<"-------------------------------------"<<endl;
            cout << jumlahBarang << " " << barang;
            cout << " = Rp. " << jumlahBarang * harga << endl;
            cout <<"-------------------------------------"<<endl;
            cout<<endl;
            break;
        case 5 : 
            barang = "Ayam kecap";
            harga = 9000;
            cout << "Jumlah barang: ";
            cin >> jumlahBarang;
            total += jumlahBarang * harga;
            cout<<endl;
            cout <<"-------------------------------------"<<endl;
            cout << jumlahBarang << " " << barang;
            cout << " = Rp. " << jumlahBarang * harga << endl;
            cout <<"-------------------------------------"<<endl;
            cout<<endl;
            break;
        case 6 : 
            pilihan = 6;// ketika memilih angka 6 maka program akan berhenti
            break;
        default :
            cout << "Pilihan 1 sampai 4"<<endl;
        }
    }while (pilihan != 6 );

    //Diskon ketika total harga > 25000
    if (total>25000){
            total = total-(total*0.3);
            cout <<endl;
            cout <<"-------------------------------------"<<endl;
            cout << "Total belanja = Rp. " << total << endl;
            cout << "Anda mendapatkan diskon sebesar 30% "<<endl; 
            cout <<"-------------------------------------"<<endl;
        }else{
            cout <<endl;
            cout <<"-------------------------------------"<<endl;
            cout << "Total belanja = Rp. " << total << endl; 
            cout <<"-------------------------------------"<<endl;
        }
        
    cout << "Uang pembayaran sebesar: "; 
    cin >> bayar;
    
    if (bayar > total){
        cout << "Kembalian: " << bayar-total << endl;
    }else if (bayar == total){
        cout << "Uang anda pas"<<endl;
    } else {
        cout << "Maaf uang anda tidak cukup untuk melakukan pembayaran." << endl;
    }
   
    cout << "Terima Kasih";
    
}

int main()
{   

    int pilihan; 
    cout <<"--------------------------"<<endl;
    cout <<"         WARUNG DEWA      "<<endl;
    cout <<"--------------------------"<<endl;
    cout << "Pilih menu. " << endl;
    cout << "1. Ayam bakar  = Rp. 15.000" << endl;
    cout << "2. Ayam goreng = Rp. 8.000" << endl;
    cout << "3. Ayam geprek = Rp. 10.000" << endl;
    cout << "4. Nasi Goreng = Rp. 12.000" << endl;
    cout << "5. Ayam Kecap  = Rp. 9.000" << endl;
    cout << "6. Selesai" << endl;
    cout <<"--------------------------"<<endl;
    
    kasir (pilihan);
    

    return 0;
}



