#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
struct sokovi *sok;
struct kava *kava;
struct alkohol *alkohol;

int zauzimanje_memorije_sok(struct sokovi* sok) {
	int n;
	printf("unesite broj koliko razlicitih sokova zelite unijet\n");
	scanf("%d", &n);
	sok = (struct sokovi*)calloc(n, sizeof(struct sokovi));
	if (sok == NULL) {
		return 1;

		

	}
	return sok;
}
int zauzimanje_memorije_kava(struct kava* kava) {
	int n;
	printf("unesite broj koliko razlicitih kava zelite unijet\n");
	scanf("%d", &n);
	kava = (struct kava*)calloc(1, sizeof(struct kava));
	if (kava == NULL) {
		return 1;
	}
	return kava;
}

int zauzimanje_memorije_alkohol(struct alkohol* alkohol) {
	int n;
	printf("unesite broj koliko razlicitog alkohola zelite unijet\n");
	scanf("%d", &n);
	alkohol = (struct alkohol*)calloc(1, sizeof(struct alkohol));
	if (alkohol == NULL) {
		return 1;
	}
	return alkohol;
}
int unos_gaziranog(struct sokovi* sok) {
	printf("unesite naziv gaziranog pica\n");
	fgets(sok->gazirano.naziv_gazirano, 19, stdin);
	printf("unesite cijenu pica\n");
	scanf("%f", &sok->gazirano.cijena_gazirano);
	printf("unesite kolicinu pica\n");
	scanf("%d", &sok->gazirano.kolicina_gazirano);

	return NULL;
}

int ispis_gaziranog(struct sokovi* sok) {
	printf("___________________________________________________\n");
	printf("uneseni gazirani sok je %s\n", sok->gazirano.naziv_gazirano);
	printf("___________________________________________________\n");
	printf("cijena soka je %fkn\n", sok->gazirano.cijena_gazirano);
	printf("___________________________________________________\n");
	printf("kolicina je %d\n", sok->gazirano.kolicina_gazirano);
	printf("___________________________________________________\n");
	return NULL;
}
int unos_ne_gaziranog(struct sokovi* sok) {
	printf("unesite naziv ne gaziranog pica\n");
	getchar();
	fgets(sok->ne_gazirano.naziv_ne_gazirano, 19, stdin);
	printf("unesite cijenu pica\n");
	scanf("%f", &sok->ne_gazirano.cijena_ne_gazirano);
	printf("unesite kolicinu pica\n");
	scanf("%d", &sok->ne_gazirano.kolicina_ne_gazirano);
	return NULL;
}


	int ispis_ne_gaziranog(struct sokovi* sok) {
	printf("___________________________________________________\n");
	printf("uneseni ne gazirani sok je %s\n", sok->ne_gazirano.naziv_ne_gazirano);
	printf("___________________________________________________\n");
	printf("cijena je %fkn\n", sok->ne_gazirano.cijena_ne_gazirano);
	printf("___________________________________________________\n");
	printf("kolicina je %d\n", sok->ne_gazirano.kolicina_ne_gazirano);
	printf("___________________________________________________\n");
	return NULL;
}

int unos_kave_obicne(struct kava* kava) {
	printf("unesite naziv kave\n");
	getchar();
	fgets(kava->obicna.naziv_obicna, 19, stdin);
	printf("unesite cijenu kave\n");
	scanf("%f", &kava->obicna.cijena_obicna);
	printf("unesite kolicinu kave\n");
	scanf("%d", &kava->obicna.kolicina_obicna);
	return NULL;
}

	int ispis_kave_obicne(struct kava* kava) {
	printf("___________________________________________________\n");
	printf("unesena kava je %s\n", kava->obicna.naziv_obicna);
	printf("___________________________________________________\n");
	printf("cijena kave je %f kn\n", kava->obicna.cijena_obicna);
	printf("___________________________________________________\n");
	printf("kolicina je %d\n", kava->obicna.kolicina_obicna);
	printf("___________________________________________________\n");
	return NULL;
}

	int unos_kave_cappucino(struct kava* kava) {
		printf("unesite naziv cappucina\n");
		getchar();
		fgets(kava->cappucino.naziv_cappucino, 19, stdin);
		printf("unesite cijenu cappucina\n");
		scanf("%f", &kava->cappucino.cijena_cappucino);
		printf("unesite kolicinu kave\n");
		scanf("%d", &kava->cappucino.kolicina_cappucino);
		return NULL;
	}


	int ispis_kave_cappucino(struct kava* kava) {
	printf("___________________________________________________\n");
	printf("uneseni cappucino je %s\n", kava->cappucino.naziv_cappucino);
	printf("___________________________________________________\n");
	printf("cijena cappucina je %fkn\n", kava->cappucino.cijena_cappucino);
	printf("___________________________________________________\n");
	printf("kolicina je %d\n", kava->cappucino.kolicina_cappucino);
	printf("___________________________________________________\n");
	return NULL;
}


	int unos_alkohola_obicni(struct alkohol* alkohol) {
		printf("unesite naziv alkohola\n");
		getchar();
		fgets(alkohol->obicni.naziv_obicni, 19, stdin);
		printf("unesite cijenu alkohola\n");
		scanf("%f", &alkohol->obicni.cijena_obicni);
		printf("unesite kolicinu alkohola\n");
		scanf("%d", &alkohol->obicni.kolicina_obicni);
		return NULL;
	}

	int ispis_alkohola_obicni(struct alkohol* alkohol) {
	printf("___________________________________________________\n");
	printf("uneseni alkohol je %s\n", alkohol->obicni.naziv_obicni);
	printf("___________________________________________________\n");
	printf("cijena alkohola je %fkn\n", alkohol->obicni.cijena_obicni);
	printf("___________________________________________________\n");
	printf("kolicina je %d\n", alkohol->obicni.kolicina_obicni);
	printf("___________________________________________________\n");
	return NULL;
}

	int unos_alkohola_zestoko(struct alkohol* alkohol) {
		printf("unesite naziv zestokog alkohola\n");
		getchar();
		fgets(alkohol->zestoko.naziv_zestoko, 19, stdin);
		printf("unesite cijenu alkohola\n");
		scanf("%f", &alkohol->zestoko.cijena_zestoko);
		printf("unesite kolicinu alkohola\n");
		scanf("%d", &alkohol->zestoko.kolicina_zestoko);
		return NULL;
	}

	int ispis_alkohola_zestoko(struct alkohol* alkohol) {
	printf("___________________________________________________\n");
	printf("uneseni alkohol je %s\n", alkohol->zestoko.naziv_zestoko);
	printf("___________________________________________________\n");
	printf("cijena alkohola je %fkn\n", alkohol->zestoko.cijena_zestoko);
	printf("___________________________________________________\n");
	printf("kolicina je %d\n", alkohol->zestoko.kolicina_zestoko);
	printf("___________________________________________________\n");
	return NULL;
}

	int izbornik(void){
		
		printf("====================");
		printf("Odaberite jednu od ponudenih opcija:");
		printf("====================\n");
		printf("\t\t\t1. pregled zaliha u skladistu\n");
		printf("\t\t\t2. narucivanje\n");
		printf("\t\t\t3. pretrazivanje\n");
		int uvjet = 0;
		scanf("%d", &uvjet);
		switch (uvjet) {
		case 1:
			//unos_kave_obicne(&kava);
			ispis_gaziranog(&sok);
			ispis_ne_gaziranog(&sok);
			ispis_kave_obicne(&kava);
			ispis_kave_cappucino(&kava);
			ispis_alkohola_zestoko(&alkohol);
			ispis_alkohola_obicni(&alkohol);
			//pregled zaliha u skladistu
			break;
		case 2:
			//narucivanje
			break;
		case 3:
			//pretrazivanje
			break;
		default:
			uvjet = 0;


		}
		return uvjet;
	}
