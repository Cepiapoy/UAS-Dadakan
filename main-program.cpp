/* Cepi Saepul Rohman
* NIM. 16.111.320
* TIF RM 16C
* TUGAS UAS (06/07/2017)
* Compiler : G++ Linux
*/

#include <iostream> //input & output stream
#include "Algo_Search.cpp"
#include "Apoy.cpp"
#include "Arraywow.cpp"
#include "Belajar2_1.cpp"
#include "Belajar2_2.cpp"
#include "Belajar2.cpp"
#include "Elearning.cpp"
#include "helo.cpp"
#include "main.cpp"
#include "matriksbiasa.cpp"
#include "Matrikstabel.cpp"
#include "modular.cpp"
#include "parameter.cpp"
#include "tugascepi.cpp"
#include "vaktorial.cpp"


using namespace std;

int main(){
	int pil;
	system("clear");
		cout<<"-----------------------------\n";
		cout<<"PROGRAM KOMPILASI APPLIKASI\n";
		cout<<"UAS ALGORITMA PEMROGRAMAN II\n";
		cout<<"Dosen : Frencius, MT.\n";
		cout<<"Nama  : Cepi Saepul Rohman\n\n\n";
        cout<<"-----------------------------\n";
		cout<<"------------MENU-------------\n";
        cout<<"1. Algo_Search\n";
        cout<<"2. Apoy\n";
        cout<<"3. Arraywow\n";
        cout<<"4. Belajar2_1\n";
        cout<<"5. Belajar2_2\n";
        cout<<"6. Belajar2\n";
        cout<<"7. Elearning\n";
        cout<<"8. helo\n";
        cout<<"9. Matrikbiasa\n";
        cout<<"10. Matriktabel\n";
        cout<<"11. modular\n";
        cout<<"12. parameter\n";
        cout<<"13. tugascepi\n";
        cout<<"14. vaktorial\n";
    
    
    
        
        cout<<"\n"<<"Masukan Pilihan :";
		cin>>pil;
		
		if(cin.fail()){
			cin.clear(); cin.ignore(); main();
		} else {		
			//seleksi data
			if(pil == 1){ aa();}
			else if(pil == 2){ bb(); }
            else if(pil == 3){ cc(); }
            else if(pil == 4){ dd(); }
            else if(pil == 5){ ee(); }
            else if(pil == 6){ ff(); }
            else if(pil == 7){ gg(); }
            else if(pil == 8){ hh(); }
            else if(pil == 9){ ii(); }
            else if(pil == 10){ jj(); }
            else if(pil == 11){ kk(); }
            else if(pil == 12){ ll(); }
			else if(pil == 13){ mm(); }
            else if(pil == 14){ nn(); }
            else if(pil == 15){ oo(); }
            
            else{
				//return main();
                cout<<"KESALAHAN INPUT, ULANGI!\n\n";
			}
		}		
	
}