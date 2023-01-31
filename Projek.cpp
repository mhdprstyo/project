#include <iostream>
using namespace std;

struct status{
     string tanggal;
     string kategori_produk;
     string jenis_produk;
     float harga, total_pembayaran;
     string status_pembayaran;
 };

int main() {
    cout << "=========================================== \n"
         << "\tSelamat Datang di GodStore  \n"
         << "\tCepat Aman dan Terpercaya   \n"
         << "=========================================== \n";

    int a=1, pilihan;
    cout << "Silahkan Pilih Operator Anda" << endl;
    switch (a){
    case 1:
        printf("1. Telkomsel \n");

    case 2:
        printf("2. Axis \n");
    case 3:
        printf("3. XL \n");
    case 4:
        printf("4. Tri \n");
    case 5:
        printf("5. Indosat \n");
    case 6:
        printf("6. Smartfren \n");
        break;}

    cout << "\nMasukkan Pilihan Anda : ";
    cin >> pilihan;


        if (pilihan<=6){
                int input;
                char nomor[30];

            cout << "Masukkan Nomor Telefon Anda : ";
            cin >> nomor;

            cout << "1. Isi Ulang Kuota Internet" << endl;
            cout << "2. Isi Ulang pulsa" << endl;

            cout << "\nMasukkan Pilihan Anda : ";
            cin >> input;

             if (input <= 1){
                int masukkan;
                int choose;
                float satu = 65000, dua = 85000, tiga = 110000, empat = 100000, lima = 140000;
                float diskon;

                cout << "=======================================================\n";
                cout << "\tPROMO EDISI LEBARAN \n \t     DISKON 20%\n";

                 switch (a){
            case 1:
                printf("1. 30GB 30 Hari + Kuota Lokal 10GB + TikTok 5GB\n\t");
                cout << "Harga : Rp" << satu << endl;
            case 2:
                printf("2. 42GB 30 Hari + Kuota Lokal 8GB + TikTok 5GB\n\t");
                cout << "Harga : Rp" << dua << endl;
            case 3:
                printf("3. 55GB 30 Hari + Kuota Lokal 15GB + YouTube 5GB\n\t");
                cout << "Harga : Rp" << tiga << endl;
            case 4:
                printf("4. 66GB 30 Hari + Kuota Lokal 19GB + YouTube & TikTok 5GB\n\t");
                cout << "Harga : Rp" << empat << endl;
            case 5:
                printf("5. 100GB 30 Hari + Kuota Lokal 10GB + YouTube & TikTok 7GB\n\t");
                cout << "Harga : Rp" << lima << endl;
                break;}

    cout << "\nMasukkan Pilihan Anda : ";
    cin >> choose;
    if (choose == 1){
            diskon=satu*0.2;
            cout << "Total Harga : Rp" << satu-diskon << endl;
    }else if (choose == 2){
            diskon=dua*0.2;
            cout << "Total Harga : Rp" << dua-diskon << endl;
    }else if (choose == 3){
            diskon=tiga*0.2;
            cout << "Total Harga : Rp" << tiga-diskon << endl;
    }else if (choose == 4){
            diskon=empat*0.2;
            cout << "Total Harga : Rp" << empat-diskon << endl;
    }else if (choose == 5){
            diskon=lima*0.2;
            cout << "Total Harga : Rp" << lima-diskon << endl;}
    cout << "=======================================================\n";

    switch (a){
            case 1:
                printf("1. Transfer bank\n");
                cout << "\tBRI : 440701902721509 a/n Muhammad Prasetyo \n";
            case 2:
                printf("2. Shoppepay\n");
                cout << "\t068140039271786031 \n";
            case 3:
                printf("3. Alfamart\n");
                cout << "\t8888829900000011 \n";
            case 4:
                printf("4. Indomart\n");
                cout << "\tBL1811EOF8A4INV \n";
            case 5:
                printf("5. DANA\n");
                cout << "\tBRI : 440701902721509 a/n Muhammad Prasetyo \n";
                break;}

        cout << "\n Pilih Metode Pembayaran : ";
        cin >> masukkan;
        cout << "=======================================================\n";


        if (choose == 1) {
            diskon=satu*0.2;

            status data1;
            data1.tanggal = "31 Januari 2023";
            data1.kategori_produk = "Kuota Internet";
            data1.harga = satu;
            data1.total_pembayaran =satu - diskon;
            data1.status_pembayaran = "BERHASIL";
                cout << "STATUS" << endl;
                cout << "Tanggal          \t:" << data1.tanggal << endl;
                cout << "Kategori Produk  \t:" << data1.kategori_produk << endl;
                cout << "Harga            \t:" << data1.harga << endl;
                cout << "Total Pembayaran \t:" << data1.total_pembayaran << endl;
                cout << "Status Pembayaran\t:" << data1.status_pembayaran << endl;
        }else if (choose == 2) {
            diskon=dua*0.2;

            status data1;
            data1.tanggal = "31 Januari 2023";
            data1.kategori_produk = "Kuota Internet";
            data1.harga = dua;
            data1.total_pembayaran =dua - diskon;
            data1.status_pembayaran = "BERHASIL";
                cout << "STATUS" << endl;
                cout << "Tanggal          \t:" << data1.tanggal << endl;
                cout << "Kategori Produk  \t:" << data1.kategori_produk << endl;
                cout << "Harga            \t:" << data1.harga << endl;
                cout << "Total Pembayaran \t:" << data1.total_pembayaran << endl;
                cout << "Status Pembayaran\t:" << data1.status_pembayaran << endl;
        }else if (choose == 3) {
            diskon=tiga*0.2;

            status data1;
            data1.tanggal = "31 Januari 2023";
            data1.kategori_produk = "Kuota Internet";
            data1.harga = tiga;
            data1.total_pembayaran =tiga - diskon;
            data1.status_pembayaran = "BERHASIL";
                cout << "STATUS" << endl;
                cout << "Tanggal          \t:" << data1.tanggal << endl;
                cout << "Kategori Produk  \t:" << data1.kategori_produk << endl;
                cout << "Harga            \t:" << data1.harga << endl;
                cout << "Total Pembayaran \t:" << data1.total_pembayaran << endl;
                cout << "Status Pembayaran\t:" << data1.status_pembayaran << endl;
        }else if (choose == 4) {
            diskon=empat*0.2;

            status data1;
            data1.tanggal = "31 Januari 2023";
            data1.kategori_produk = "Kuota Internet";
            data1.harga = empat;
            data1.total_pembayaran =empat - diskon;
            data1.status_pembayaran = "BERHASIL";
                cout << "STATUS" << endl;
                cout << "Tanggal          \t:" << data1.tanggal << endl;
                cout << "Kategori Produk  \t:" << data1.kategori_produk << endl;
                cout << "Harga            \t:" << data1.harga << endl;
                cout << "Total Pembayaran \t:" << data1.total_pembayaran << endl;
                cout << "Status Pembayaran\t:" << data1.status_pembayaran << endl;
        }else if (choose == 5) {
            diskon=lima*0.2;

            status data1;
            data1.tanggal = "31 Januari 2023";
            data1.kategori_produk = "Kuota Internet";
            data1.harga = lima;
            data1.total_pembayaran =lima - diskon;
            data1.status_pembayaran = "BERHASIL";
                cout << "STATUS" << endl;
                cout << "Tanggal          \t:" << data1.tanggal << endl;
                cout << "Kategori Produk  \t:" << data1.kategori_produk << endl;
                cout << "Harga            \t:" << data1.harga << endl;
                cout << "Total Pembayaran \t:" << data1.total_pembayaran << endl;
                cout << "Status Pembayaran\t:" << data1.status_pembayaran << endl;
        }

            cout << "\n ========== TERIMA KASIH ==========";


             }else if (input = 2 ){
                 int masukkan;
                 int choose;
                 float z = 7000, x = 12000, c = 17000, v = 27000, b = 42000, n=52000, diskon;

                cout << "=======================================================\n";
                cout << "\tPROMO EDISI LEBARAN \n \t     DISKON 10%\n";

                 switch (a){
            case 1:
                printf("1. 5.000  (Rp7.000)\n");
            case 2:
                printf("2. 10.000 (Rp12.000)\n");
            case 3:
                printf("3. 15.000 (Rp17.000)\n");
            case 4:
                printf("4. 25.000 (Rp27.000)\n");
            case 5:
                printf("5. 40.000 (Rp42.000)\n");
            case 6:
                printf("6. 50.000 (Rp52.000)\n");
                break;}

        cout << "\nMasukkan Pilihan Anda : ";
        cin >> choose;
        if (choose == 1){
            diskon=z*0.1;
            cout << "Total Harga : Rp" << z-diskon << endl;
        }else if (choose == 2){
            diskon=x*0.1;
            cout << "Total Harga : Rp" << x-diskon << endl;
        }else if (choose == 3){
            diskon=c*0.1;
            cout << "Total Harga : Rp" << c-diskon << endl;
        }else if (choose == 4){
            diskon=v*0.1;
            cout << "Total Harga : Rp" << v-diskon << endl;
        }else if (choose == 5){
            diskon=b*0.1;
            cout << "Total Harga : Rp" << b-diskon << endl;
        }else if (choose == 6){
            diskon=n*0.1;
            cout << "Total Harga : Rp" << n-diskon << endl;}

        cout << "=======================================================\n";

        switch (a){
            case 1:
                printf("1. Transfer bank\n");
                cout << "\tBRI : 440701902721509 a/n Muhammad Prasetyo \n";
            case 2:
                printf("2. Shoppepay\n");
                cout << "\t068140039271786031 \n";
            case 3:
                printf("3. Alfamart\n");
                cout << "\t8888829900000011 \n";
            case 4:
                printf("4. Indomart\n");
                cout << "\tBL1811EOF8A4INV \n";
            case 5:
                printf("5. DANA\n");
                cout << "\tBRI : 440701902721509 a/n Muhammad Prasetyo \n";
                break;}
        cout << "\n Pilih Metode Pembayaran : ";
        cin >> masukkan;
        cout << "=======================================================\n";

        if (choose == 1) {
            diskon=z*0.1;

            status data1;
            data1.tanggal = "31 Januari 2023";
            data1.kategori_produk = "Pulsa";
            data1.harga = z;
            data1.total_pembayaran =z - diskon;
            data1.status_pembayaran = "BERHASIL";
                cout << "STATUS" << endl;
                cout << "Tanggal          \t:" << data1.tanggal << endl;
                cout << "Kategori Produk  \t:" << data1.kategori_produk << endl;
                cout << "Harga            \t:" << data1.harga << endl;
                cout << "Total Pembayaran \t:" << data1.total_pembayaran << endl;
                cout << "Status Pembayaran\t:" << data1.status_pembayaran << endl;

        }else if (choose == 2){
            diskon=x*0.1;

            status data1;
            data1.tanggal = "31 Januari 2023";
            data1.kategori_produk = "Pulsa";
            data1.harga = x;
            data1.total_pembayaran =x - diskon;
            data1.status_pembayaran = "BERHASIL";
                cout << "STATUS" << endl;
                cout << "Tanggal          \t:" << data1.tanggal << endl;
                cout << "Kategori Produk  \t:" << data1.kategori_produk << endl;
                cout << "Harga            \t:" << data1.harga << endl;
                cout << "Total Pembayaran \t:" << data1.total_pembayaran << endl;
                cout << "Status Pembayaran\t:" << data1.status_pembayaran << endl;

        }else if (choose == 3){
            diskon=c*0.1;

            status data1;
            data1.tanggal = "31 Januari 2023";
            data1.kategori_produk = "Pulsa";
            data1.harga = c;
            data1.total_pembayaran =c - diskon;
            data1.status_pembayaran = "BERHASIL";
                cout << "STATUS" << endl;
                cout << "Tanggal          \t:" << data1.tanggal << endl;
                cout << "Kategori Produk  \t:" << data1.kategori_produk << endl;
                cout << "Harga            \t:" << data1.harga << endl;
                cout << "Total Pembayaran \t:" << data1.total_pembayaran << endl;
                cout << "Status Pembayaran\t:" << data1.status_pembayaran << endl;

        }else if (choose == 4){
            diskon=v*0.1;

            status data1;
            data1.tanggal = "31 Januari 2023";
            data1.kategori_produk = "Pulsa";
            data1.harga = v;
            data1.total_pembayaran =v - diskon;
            data1.status_pembayaran = "BERHASIL";
                cout << "STATUS" << endl;
                cout << "Tanggal          \t:" << data1.tanggal << endl;
                cout << "Kategori Produk  \t:" << data1.kategori_produk << endl;
                cout << "Harga            \t:" << data1.harga << endl;
                cout << "Total Pembayaran \t:" << data1.total_pembayaran << endl;
                cout << "Status Pembayaran\t:" << data1.status_pembayaran << endl;

        }else if (choose == 5){
            diskon=b*0.1;

            status data1;
            data1.tanggal = "31 Januari 2023";
            data1.kategori_produk = "Pulsa";
            data1.harga = b;
            data1.total_pembayaran =b - diskon;
            data1.status_pembayaran = "BERHASIL";
                cout << "STATUS" << endl;
                cout << "Tanggal          \t:" << data1.tanggal << endl;
                cout << "Kategori Produk  \t:" << data1.kategori_produk << endl;
                cout << "Harga            \t:" << data1.harga << endl;
                cout << "Total Pembayaran \t:" << data1.total_pembayaran << endl;
                cout << "Status Pembayaran\t:" << data1.status_pembayaran << endl;

        }else if (choose == 6){
            diskon=n*0.1;

            status data1;
            data1.tanggal = "31 Januari 2023";
            data1.kategori_produk = "Pulsa";
            data1.harga = n;
            data1.total_pembayaran =n - diskon;
            data1.status_pembayaran = "BERHASIL";
                cout << "STATUS" << endl;
                cout << "Tanggal          \t:" << data1.tanggal << endl;
                cout << "Kategori Produk  \t:" << data1.kategori_produk << endl;
                cout << "Harga            \t:" << data1.harga << endl;
                cout << "Total Pembayaran \t:" << data1.total_pembayaran << endl;
                cout << "Status Pembayaran\t:" << data1.status_pembayaran << endl;}

                cout << " ========== TERIMA KASIH ==========";
        }

    return 0;
        }else{
            cout << "=======================================================\n";
            cout << " Pilihannya cuma ada 6, coba ulang kembali \n \tTerima Kasih:)\n";
            cout << "=======================================================\n";
        }
}


