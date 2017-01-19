// Ile_alkoholu_wypije.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>
#include <fstream>

double losuj(double, double);
bool probaBernoulliego(double);
using namespace std;
int main()
{
	srand(time(NULL));
	double los, alko = 0, alkoEtyl = 0, temp = 0;
	bool losB;
	double czyPijeWeek = 0.25;
	double czyPijeWeekend = 0.55;
	double pijeSam = 0.4;
	double pijeZeZnajomymi = 0.6;
	double wDomu = 0.31;
	double wBarze = 0.41;
	double wParku = 0.5;
	double piwo = 0.4;
	double wodka = 0.43;
	double wino = 0.45;
	double whisky = 0.55;
	double ile = 0.35;


	int dni = 21900; // 60 lat

	fstream plik;
	plik.open("ileWypije.txt", ios::out | ios::app);
	for (int i = 0; i < 10000; i++) {
		for (int i = 0; i < dni; i++) {


			// pije w tygodniu
			if ((i % 7) <= 3) {
				losB = probaBernoulliego(czyPijeWeek);
				if (losB) {
					los = losuj(0.0, 1.0);

					if (los <= pijeSam) {
						los = losuj(0.0, 1.0);

						if (los <= wDomu) {
							los = losuj(0.0, 1.0);

							if (los <= piwo) {
								los = losuj(0.0, 1.0);

								if (los <= ile) {
									alko += 0.5;
									alkoEtyl += 22.5;
								}
								else {
									alko += 1.5;
									alkoEtyl += 67.5;
								}

							}
							else if (piwo < los <= wodka) {
								los = losuj(0.0, 1.0);

								if (los <= (ile + 0.3)) {
									alko += 0.1;
									alkoEtyl += 40.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 200.0;
								}
							}
							else if (wodka < los <= wino) {
								los = losuj(0.0, 1.0);

								if (los <= (ile + 0.35)) {
									alko += 0.175;
									alkoEtyl += 21.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 57.143;
								}
							}
							else if (wino < los <= whisky) {
								los = losuj(0.0, 1.0);

								if (los <= (ile + 0.35)) {
									alko += 0.150;
									alkoEtyl += 60.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 200.0;
								}
							}
							else {
								continue;
							}

						}
						else if (wDomu < los < wBarze) {
							los = losuj(0.0, 1.0);
							temp = 0.1;
							if (los <= (piwo + temp)) {
								los = losuj(0.0, 1.0);

								if (los <= ile) {
									alko += 0.5;
									alkoEtyl += 22.5;
								}
								else {
									alko += 2.0;
									alkoEtyl += 90.0;
								}

							}
							else if ((piwo + temp) < los <= (temp + wodka)) {
								los = losuj(0.0, 1.0);

								if (los <= (ile + 0.3)) {
									alko += 0.1;
									alkoEtyl += 40.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 200.0;
								}
							}
							else if ((wodka + temp) < los <= (wino + temp)) {
								los = losuj(0.0, 1.0);

								if (los <= (ile + 0.35)) {
									alko += 0.175;
									alkoEtyl += 21.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 57.143;
								}
							}
							else if (wino < los <= whisky) {
								los = losuj(0.0, 1.0);

								if (los <= (ile + 0.45)) {
									alko += 0.150;
									alkoEtyl += 60.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 200.0;
								}
							}
							else {
								continue;
							}

						}
						else if (wBarze < los < wParku) {
							los = losuj(0.0, 1.0);
							temp = 0.4;
							if (los <= (piwo + temp)) {
								los = losuj(0.0, 1.0);

								if (los <= ile) {
									alko += 0.5;
									alkoEtyl += 22.5;
								}
								else {
									alko += 2.0;
									alkoEtyl += 90.0;
								}

							}
							else if ((piwo + temp) < los <= (temp + wodka)) {
								los = losuj(0.0, 1.0);

								if (los <= (ile + 0.3)) {
									alko += 0.1;
									alkoEtyl += 40.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 200.0;
								}
							}
							else if ((wodka + temp) < los <= (wino + temp)) {
								los = losuj(0.0, 1.0);

								if (los <= (ile + 0.35)) {
									alko += 0.175;
									alkoEtyl += 21.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 57.143;
								}
							}
							else if (wino < los <= whisky) {
								los = losuj(0.0, 1.0);

								if (los <= (ile + 0.45)) {
									alko += 0.150;
									alkoEtyl += 60.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 200.0;
								}
							}
							else {
								continue;
							}

						}
						else {
							continue;
						}

					}
					else if (pijeSam < los < pijeZeZnajomymi) {
						los = losuj(0.0, 1.0);

						if (los <= wDomu) {
							los = losuj(0.0, 1.0);

							if (los <= (piwo - 0.15)) {
								los = losuj(0.0, 1.0);

								if (los <= ile - 0.15) {
									alko += 0.5;
									alkoEtyl += 22.5;
								}
								else {
									alko += 2.0;
									alkoEtyl += 90.0;
								}

							}
							else if ((piwo - 0.15) < los <= (wodka + 0.2)) {
								los = losuj(0.0, 1.0);

								if (los <= (ile)) {
									alko += 0.1;
									alkoEtyl += 40.0;
								}
								else {
									alko += 0.7;
									alkoEtyl += 280.0;
								}
							}
							else if ((wodka + 0.2) < los <= (wino + 0.2)) {
								los = losuj(0.0, 1.0);

								if (los <= (ile + 0.35)) {
									alko += 0.175;
									alkoEtyl += 21.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 57.143;
								}
							}
							else if ((0.2 + wino) < los <= (0.2 + whisky)) {
								los = losuj(0.0, 1.0);

								if (los <= (ile)) {
									alko += 0.150;
									alkoEtyl += 60.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 200.0;
								}
							}
							else {
								continue;
							}

						}
						else if (wDomu < los < wBarze) {
							los = losuj(0.0, 1.0);
							temp = 0.3;
							if (los <= (piwo + temp)) {
								los = losuj(0.0, 1.0);

								if (los <= ile) {
									alko += 0.5;
									alkoEtyl += 22.5;
								}
								else {
									alko += 2.0;
									alkoEtyl += 90.0;
								}

							}
							else if ((piwo + temp) < los <= (temp + wodka)) {
								los = losuj(0.0, 1.0);

								if (los <= (ile)) {
									alko += 0.1;
									alkoEtyl += 40.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 200.0;
								}
							}
							else if ((wodka + temp) < los <= (wino + temp)) {
								los = losuj(0.0, 1.0);

								if (los <= (ile + 0.35)) {
									alko += 0.175;
									alkoEtyl += 21.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 57.143;
								}
							}
							else if (wino < los <= whisky) {
								los = losuj(0.0, 1.0);

								if (los <= (ile)) {
									alko += 0.150;
									alkoEtyl += 60.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 200.0;
								}
							}
							else {
								continue;
							}

						}
						else if (wBarze < los < wParku) {
							los = losuj(0.0, 1.0);
							temp = 0.4;
							if (los <= (piwo + temp)) {
								los = losuj(0.0, 1.0);

								if (los <= ile) {
									alko += 0.5;
									alkoEtyl += 22.5;
								}
								else {
									alko += 2.0;
									alkoEtyl += 90.0;
								}

							}
							else if ((piwo + temp) < los <= (temp + wodka)) {
								los = losuj(0.0, 1.0);

								if (los <= (ile + 0.1)) {
									alko += 0.2;
									alkoEtyl += 80.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 200.0;
								}
							}
							else if ((wodka + temp) < los <= (wino + temp)) {
								los = losuj(0.0, 1.0);

								if (los <= (ile + 0.35)) {
									alko += 0.175;
									alkoEtyl += 21.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 57.143;
								}
							}
							else if (wino < los <= whisky) {
								los = losuj(0.0, 1.0);

								if (los <= (ile + 0.45)) {
									alko += 0.150;
									alkoEtyl += 60.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 200.0;
								}
							}
							else {
								continue;
							}

						}
						else {
							continue;
						}
					}
					else {
						continue;
					}
				}
				else {
					continue;
				}
			}

			else if ((i % 7) > 3) {
				losB = probaBernoulliego(czyPijeWeekend);
				if (losB) {
					los = losuj(0.0, 1.0);

					if (los <= pijeSam) {
						los = losuj(0.0, 1.0);

						if (los <= wDomu) {
							los = losuj(0.0, 1.0);

							if (los <= piwo) {
								los = losuj(0.0, 1.0);

								if (los <= ile) {
									alko += 0.5;
									alkoEtyl += 22.5;
								}
								else {
									alko += 2.0;
									alkoEtyl += 90.0;
								}

							}
							else if (piwo < los <= wodka) {
								los = losuj(0.0, 1.0);

								if (los <= (ile + 0.45)) {
									alko += 0.15;
									alkoEtyl += 60.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 200.0;
								}
							}
							else if (wodka < los <= wino) {
								los = losuj(0.0, 1.0);

								if (los <= (ile + 0.35)) {
									alko += 0.175;
									alkoEtyl += 21.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 57.143;
								}
							}
							else if (wino < los <= whisky) {
								los = losuj(0.0, 1.0);

								if (los <= (ile + 0.35)) {
									alko += 0.250;
									alkoEtyl += 100.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 200.0;
								}
							}
							else {
								continue;
							}

						}
						else if (wDomu < los < wBarze) {
							los = losuj(0.0, 1.0);
							temp = 0.4;
							if (los <= (piwo + temp)) {
								los = losuj(0.0, 1.0);

								if (los <= ile) {
									alko += 0.5;
									alkoEtyl += 22.5;
								}
								else {
									alko += 2.0;
									alkoEtyl += 90.0;
								}

							}
							else if ((piwo + temp) < los <= (temp + wodka)) {
								los = losuj(0.0, 1.0);

								if (los <= (ile)) {
									alko += 0.1;
									alkoEtyl += 40.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 200.0;
								}
							}
							else if ((wodka + temp) < los <= (wino + temp)) {
								los = losuj(0.0, 1.0);

								if (los <= (ile + 0.35)) {
									alko += 0.175;
									alkoEtyl += 21.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 57.143;
								}
							}
							else if (wino < los <= whisky) {
								los = losuj(0.0, 1.0);

								if (los <= (ile)) {
									alko += 0.150;
									alkoEtyl += 60.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 200.0;
								}
							}
							else {
								continue;
							}

						}
						else if (wBarze < los < wParku) {
							los = losuj(0.0, 1.0);
							temp = 0.4;
							if (los <= (piwo + temp)) {
								los = losuj(0.0, 1.0);

								if (los <= ile) {
									alko += 0.5;
									alkoEtyl += 22.5;
								}
								else {
									alko += 2.0;
									alkoEtyl += 90.0;
								}

							}
							else if ((piwo + temp) < los <= (temp + wodka)) {
								los = losuj(0.0, 1.0);

								if (los <= (ile + 0.3)) {
									alko += 0.1;
									alkoEtyl += 40.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 200.0;
								}
							}
							else if ((wodka + temp) < los <= (wino + temp)) {
								los = losuj(0.0, 1.0);

								if (los <= (ile + 0.35)) {
									alko += 0.175;
									alkoEtyl += 21.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 57.143;
								}
							}
							else if (wino < los <= whisky) {
								los = losuj(0.0, 1.0);

								if (los <= (ile + 0.45)) {
									alko += 0.150;
									alkoEtyl += 60.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 200.0;
								}
							}
							else {
								continue;
							}

						}
						else {
							continue;
						}

					}
					else if (pijeSam < los < pijeZeZnajomymi + 0.35) {
						los = losuj(0.0, 1.0);

						if (los <= wDomu) {
							los = losuj(0.0, 1.0);

							if (los <= (piwo - 0.15)) {
								los = losuj(0.0, 1.0);

								if (los <= ile - 0.15) {
									alko += 0.5;
									alkoEtyl += 22.5;
								}
								else {
									alko += 3.0;
									alkoEtyl += 135.0;
								}

							}
							else if ((piwo - 0.15) < los <= (wodka + 0.2)) {
								los = losuj(0.0, 1.0);

								if (los <= (ile)) {
									alko += 0.1;
									alkoEtyl += 40.0;
								}
								else {
									alko += 0.7;
									alkoEtyl += 280.0;
								}
							}
							else if ((wodka + 0.2) < los <= (wino + 0.2)) {
								los = losuj(0.0, 1.0);

								if (los <= (ile)) {
									alko += 0.175;
									alkoEtyl += 21.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 57.143;
								}
							}
							else if ((0.2 + wino) < los <= (0.2 + whisky)) {
								los = losuj(0.0, 1.0);

								if (los <= (ile)) {
									alko += 0.150;
									alkoEtyl += 60.0;
								}
								else {
									alko += 0.7;
									alkoEtyl += 280.0;
								}
							}
							else {
								continue;
							}

						}
						else if (wDomu < los < wBarze) {
							los = losuj(0.0, 1.0);
							temp = 0.3;
							if (los <= (piwo + temp)) {
								los = losuj(0.0, 1.0);

								if (los <= ile) {
									alko += 0.5;
									alkoEtyl += 22.5;
								}
								else {
									alko += 2.0;
									alkoEtyl += 90.0;
								}

							}
							else if ((piwo + temp) < los <= (temp + wodka)) {
								los = losuj(0.0, 1.0);

								if (los <= (ile)) {
									alko += 0.1;
									alkoEtyl += 40.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 200.0;
								}
							}
							else if ((wodka + temp) < los <= (wino + temp)) {
								los = losuj(0.0, 1.0);

								if (los <= (ile + 0.35)) {
									alko += 0.175;
									alkoEtyl += 21.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 57.143;
								}
							}
							else if (wino < los <= whisky) {
								los = losuj(0.0, 1.0);

								if (los <= (ile)) {
									alko += 0.150;
									alkoEtyl += 60.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 200.0;
								}
							}
							else {
								continue;
							}

						}
						else if (wBarze < los < wParku) {
							los = losuj(0.0, 1.0);
							temp = 0.4;
							if (los <= (piwo + temp)) {
								los = losuj(0.0, 1.0);

								if (los <= ile) {
									alko += 0.5;
									alkoEtyl += 22.5;
								}
								else {
									alko += 2.0;
									alkoEtyl += 90.0;
								}

							}
							else if ((piwo + temp) < los <= (temp + wodka)) {
								los = losuj(0.0, 1.0);

								if (los <= (ile + 0.1)) {
									alko += 0.2;
									alkoEtyl += 80.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 200.0;
								}
							}
							else if ((wodka + temp) < los <= (wino + temp)) {
								los = losuj(0.0, 1.0);

								if (los <= (ile + 0.35)) {
									alko += 0.175;
									alkoEtyl += 21.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 57.143;
								}
							}
							else if (wino < los <= whisky) {
								los = losuj(0.0, 1.0);

								if (los <= (ile + 0.45)) {
									alko += 0.150;
									alkoEtyl += 60.0;
								}
								else {
									alko += 0.5;
									alkoEtyl += 200.0;
								}
							}
							else {
								continue;
							}

						}
						else {
							continue;
						}
					}
					else {
						continue;
					}
				}
				else {
					continue;
				}
			}

		}
		alkoEtyl /= 1000;
		//	cout << alko << "\t" << alkoEtyl << endl;
		alko = 0;
		alkoEtyl = 0;
	}
	plik.close();
	return 0;
}


double losuj(double first, double second) {

	double random, range;
	range = second - first;
	random = first + (double)rand() / (double)(RAND_MAX)* range;


	return random;

}
bool probaBernoulliego(double prawdopodobienstwo) {
	double random = (double)rand() / (double)RAND_MAX;

	if (random < prawdopodobienstwo) {
		return true;
	}
	else {
		return false;
	}
}