//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Data.DB.hpp>
#include <Data.FMTBcd.hpp>
#include <Data.SqlExpr.hpp>
#include <IBX.IBCustomDataSet.hpp>
#include <IBX.IBTable.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <VCLTee.TeeDraw3D.hpp>
#include <VclTee.TeeGDIPlus.hpp>
#include <VCLTee.TeeProcs.hpp>
#include <Web.DBWeb.hpp>
#include <Web.HTTPApp.hpp>
#include <Vcl.Grids.hpp>
#include <VCLTee.Chart.hpp>
#include <VCLTee.DBChart.hpp>
#include <VCLTee.Series.hpp>
#include <VCLTee.TeEngine.hpp>
#include <VCLTee.TeeData.hpp>
#include <VCLTee.TeeDBCrossTab.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TEdit *Edit1;
	TButton *Button1;
	TLabel *Label1;
	TStringGrid *StringGrid1;
	TRichEdit *RichEdit1;
	TButton *Button2;
	TButton *Button3;
	TChart *Chart1;
	TLineSeries *Series1;
	TSeriesDataSet *SeriesDataSet1;
	TDBCrossTabSource *DBCrossTabSource1;
	TFloatField *SeriesDataSet1X;
	TFloatField *SeriesDataSet1Y;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
