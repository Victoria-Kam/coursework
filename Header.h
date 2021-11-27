#pragma once
#ifndef HEADER_H
#define HEADER_H

class FamilyClass
{
public:
	FamilyClass();
	double raschet_communalki(double obch_dohod);
	double raschet_zatrat_productov(double obch_dohod);
	double raschet_odezdy_and_obuvy(double obch_dohod);
	double rasche_for_pets(double obch_dohod);
	double raschet_for_lecure(double obch_dohod);
	double raschet_zatrad_for_kids(double obch_dohod, int kolvo_child);
	double raschet_zatrat_na_transport(double obch_dohod);
	double raschet_zatrat_kosmetiki_i_parfum(double obch_dohod);
	double raschet_for_study(double obch_dohod);
	double raschet_for_tourizm(double obch_dohod);
	~FamilyClass();

private:

};
#endif  