//---------------------------------------------------------------------------

#include <vcl.h>
#include <cstdlib>
#include <iostream>
#include <ctime>
#include "System.IOUtils.hpp"
#pragma hdrstop
#include <string>
#include <random>

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
int m = 100;
int n = 50;
 std::default_random_engine generator;
 std::normal_distribution<double> distributionx(50.0,10.0);
 std::normal_distribution<double> distributiony(25.0,5.0);
//int veletlenszam1, veletlenszam2;
int i, j ,k = 0;
String szoveg_ki = "";
String szoveg_ki2 = "";
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
StringGrid1->ColCount = m;
StringGrid1->RowCount = n;
int ismetlesszam = StrToInt(Edit1->Text);
int tomb[m][n];
int tomb1[m][n];
int p[100]={};
for(j = 0; j < m; j++)
	{
		for(k = 0; k < n; k++)
		{
		 tomb[j][k] = 0;
		}
	}

for(i = 1; i < StrToInt(Edit1->Text); i++)
	{
	//veletlenszam1 = random (m) ;
	//veletlenszam2 = random(n);
	double numberx = distributionx(generator);
	double numbery = distributiony(generator);
	if ((numberx>=0.0)&&(numberx<100.0)&&(numbery>=0.0)&&(numbery<50.0)) ++tomb[int(numberx)][int(numbery)];
	//RichEdit1->Lines->Add(IntToStr(tomb[veletlenszam1][veletlenszam2]));
	}
 String szoveg_trans;
//tömb táblába kiírása
for(j = 0; j < m; j++)
	{
		for( k = 0; k < n; k++)
		{
		szoveg_trans = tomb[j][k];
		szoveg_ki2 += szoveg_trans + "; ";
		StringGrid1->Cells[j][k] = tomb[j][k];
		}
		szoveg_ki2 += "\n";
	}
//RichEdit1->Lines = "";
String a = "";

for(j = 0; j < m; j++)
	{
		for(k = 0; k < n; k++)
		{
		float x = (tomb[j][k]) / 1000.0;
		a = FloatToStr(x);
		szoveg_ki += "\n  m" + IntToStr(j) + " " + "n" + IntToStr(k) + " " + a;
	    RichEdit1->Lines->Add("m" + IntToStr(j) + " " + "n" + IntToStr(k) + " " + a);
		}
	}
 Button3->Enabled = true;
 }

//---------------------------------------------------------------------------


void __fastcall TForm2::Button2Click(TObject *Sender)
{
//  itt kell hozzáadni a chartdatához az adatokat olyn ciklussal, mint eggyel fentebb, de nem tudom mit kell pontsan választani, ezt nézd meg
//   Series1->AddXY(1,1);
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button3Click(TObject *Sender)
{
TFile::WriteAllText("textbox.txt", szoveg_ki);
TFile::WriteAllText("tabla.csv", szoveg_ki2);
}
//---------------------------------------------------------------------------



