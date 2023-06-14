#include <iostream>
#include <vector>
#include <string>
using namespace std;

class penerbit;

class buku {
public:
	string namaBuku;
	buku(string pNamaBuku) :namaBuku(pNamaBuku) {}
};

class pengarang {
public:
	string namaPengarang;
	vector<penerbit*>dafftar_penerbit;
	vector<buku*>daftar_buku;
	
	pengarang(string pNama) : namaPengarang(pNama) {}

		void tambahPenerbit(penerbit*);
		void cetakPenerbit();

		void tambahBuku(buku*);
		void cetakBuku();
};

class penerbit {
public:
	string namaPenerbit;
	vector<pengarang*> daftar_pengarang;

	penerbit(string pNama) : namaPenerbit(pNama){}
	
	void tambahPengarang(pengarang*);
	void cetakPengarang();
};

void pengarang::tambahPenerbit(penerbit *pPenerbit)
{
	dafftar_penerbit.push_back(pPenerbit);
}

void pengarang::cetakPenerbit() {
	cout << "Daftar penerbit yang diikuti \"" << this->namaPengarang << "\":n";
	for (auto& a : dafftar_penerbit) {
		cout << a->namaPenerbit << "\n";
	}
	cout << endl;
}

void penerbit::tambahPengarang(pengarang* pPengarang) {
	daftar_pengarang.push_back(pPengarang);
}

void penerbit::cetakPengarang() {
	cout << "Daftar penerbit yang diikuti \"" << this->namaPenerbit << "\":n";
	for (auto& a : daftar_pengarang) {
		cout << a->namaPengarang << "\n";
	}
	cout << endl;
}

void pengarang::tambahBuku(buku* pNamaBuku) {
	daftar_buku.push_back(pNamaBuku);
}

void pengarang::cetakBuku() {
	cout << "Daftar Buku yang dikarang \"" << this->namaPengarang << "\":";
	for (auto& a : daftar_buku) {
		cout << a->nama
	}
}