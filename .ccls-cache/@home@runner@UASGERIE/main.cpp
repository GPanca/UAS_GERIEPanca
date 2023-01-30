#include <iostream>

using namespace std;

int main()
{
    cout << "\t\t\t\t\t==========BIJI KOPI==========" << endl;
    int n,pilih;

    cout << "Hasil panen kopi" << endl << endl;

    cin >> n;
    cout << "=================================\n";

    float I;
    int H[n],C[n],D[n],P[n],Hasil[n];
    cout << "1. Robuasta" << endl;
    cout << "2. Arabika" << endl;

    for (int i=0; i<n; i++){
        cout << "Hasil panen kopi " << i+1 << endl;
        cout << "Pilih code yang ingin dihitung : ";
        cin >> pilih;


        if (pilih == 1){
            cout << "jumlah tanaman per hektar : ";
            cin >> H[i];
            cout << "jumlah cabang produktif per tanaman : ";
            cin >> C[i];
            cout << "jumlah dompolan per cabang produktif : ";
            cin >> D[i];
            cout << "jumlah buah per dompolan : ";
            cin >> P[i];
            cout << "indeks biji : ";
            cin >> I;
            Hasil[i]=H[i]*C[i]*D[i]*P[i]*I*0.2;
        }else if (pilih == 2){
            cout << "jumlah tanaman per hektar : ";
            cin >> H[i];
            cout << "jumlah cabang produktif per tanaman : ";
            cin >> C[i];
            cout << "jumlah dompolan per cabang produktif : ";
            cin >> D[i];
            cout << "jumlah buah per dompolan : ";
            cin >> P[i];
            cout << "indeks biji : ";
            cin >> I;
            Hasil[i]=H[i]*C[i]*D[i]*P[i]*I*0.18;

        }
        cout << endl;
    }
    system ("cls");
    cout << "\t\t\t\t\t==========Hasil panen==========" << endl;
    for (int i=0; i<n; i++){
        cout << "stok hasil panen  "<< i+1 << " = " << Hasil[i] << "\n" << endl;
    }
}
