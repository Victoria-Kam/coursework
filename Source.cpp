#include<cmath>
#include"Header.h"

FamilyClass::FamilyClass()
{
}

double FamilyClass::raschet_communalki(double obch_dohod)  //затраты на коммуналку
{
	double kommun = floorl((((obch_dohod * 9) / 100))*100)/100;
	return kommun;

}

double FamilyClass::raschet_zatrat_productov(double obch_dohod)  // затраты на еду
{
	double producty = floorl((((obch_dohod * 23) / 100)) * 100) / 100;
	return producty;
}

double FamilyClass::raschet_odezdy_and_obuvy(double obch_dohod)  //затраты на одежду и обувь
{
	double odezda_and_obuv = floorl((((obch_dohod * 9) / 100)) * 100) / 100;
	return odezda_and_obuv;
}

double FamilyClass::rasche_for_pets(double obch_dohod)  // затраты на животных
{
	double pets = floorl((((obch_dohod * 13) / 100)) * 100) / 100;
	return pets;
}

double FamilyClass::raschet_for_lecure(double obch_dohod)  //затраты на лекарства
{
	double lecure = floorl((((obch_dohod * 7) / 100)) * 100) / 100;
	return lecure;
}

double FamilyClass::raschet_zatrad_for_kids(double obch_dohod, int kolvo_child)  //затраты на детей
{
	double kids = floorl((((obch_dohod * 12) / 100)) * 100) / 100;
	return kids;
}

double FamilyClass::raschet_zatrat_na_transport(double obch_dohod)  //затраты на транспорт
{
	double transport = floorl((((obch_dohod * 3) / 100)) * 100) / 100;
	return transport;
}

double FamilyClass::raschet_zatrat_kosmetiki_i_parfum(double obch_dohod)  // затраты на косметику и парфюмерию
{
	double cosm_and_parf = floorl((((obch_dohod * 3) / 100)) * 100) / 100;
	return cosm_and_parf;
}

double FamilyClass::raschet_for_study(double obch_dohod)  //затраты на обучение
{
	double study = floorl((((obch_dohod * 3) / 100)) * 100) / 100;
	return study;
}

double FamilyClass::raschet_for_tourizm(double obch_dohod)  //затраты на обучение
{
	double tourizm = floorl((((obch_dohod * 3) / 100)) * 100) / 100;
	return tourizm;
}

FamilyClass::~FamilyClass()
{
}
