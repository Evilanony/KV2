#ifndef HEADER_H
#define HEADER_H


int zauzimanje_memorije_sok(struct sokovi *);
int zauzimanje_memorije_kava(struct kava *);
int zauzimanje_memorije_alkohol(struct alkohol*);
int unos_gaziranog(struct sokovi *);
int unos_ne_gaziranog(struct sokovi *);
int unos_kave_obicne(struct kava *);
int unos_kave_cappucino(struct kava *);
int unos_alkohola_obicni(struct alkohol *);
int unos_alkohola_zestoko(struct alkohol *);
int ispis_gaziranog(struct sokovi *);
int ispis_ne_gaziranog(struct sokovi*);
int ispis_kave_obicne(struct kava *);
int ispis_kave_cappucino(struct kava*);
int ispis_alkohola_obicni(struct alkohol *);
int ispis_alkohola_zestoko(struct alkohol *);
int izbornik(void);

struct gazirano {
	float cijena_gazirano;
	char naziv_gazirano[20];
	int kolicina_gazirano;
};
struct ne_gazirano {
	float cijena_ne_gazirano;
	char naziv_ne_gazirano[20];
	int kolicina_ne_gazirano;
};

struct sokovi {
	struct gazirano gazirano;
	struct ne_gazirano ne_gazirano;
};

struct obicna {
	float cijena_obicna;
	char naziv_obicna[20];
	int kolicina_obicna;
};

struct cappucino {
	float cijena_cappucino;
	char naziv_cappucino[20];
	int kolicina_cappucino;
};

struct kava {
	struct obicna obicna;
	struct cappucino cappucino;
};

struct obicni {
	float cijena_obicni;
	char naziv_obicni[20];
	int kolicina_obicni;
};

struct zestoko {
	float cijena_zestoko;
	char naziv_zestoko[20];
	int kolicina_zestoko;
};

struct alkohol {
	struct obicni obicni;
	struct zestoko zestoko;
};

// deklaracije i definicije koje idu u zaglavlje
#endif // HEADER_H