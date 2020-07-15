object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'ProjectOne'
  ClientHeight = 598
  ClientWidth = 1095
  Color = clBtnShadow
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  DesignSize = (
    1095
    598)
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 24
    Top = 27
    Width = 133
    Height = 13
    Caption = 'N '#1082'-'#1089#1090#1100'('#1095#1080#1089#1083#1086' '#1077#1083#1077#1082#1090#1088#1086#1085#1110#1074')'
  end
  object Edit1: TEdit
    Left = 161
    Top = 24
    Width = 145
    Height = 21
    NumbersOnly = True
    TabOrder = 0
    Text = '10000'
  end
  object Button1: TButton
    Left = 24
    Top = 51
    Width = 91
    Height = 25
    Cancel = True
    Caption = #1057#1090#1072#1088#1090
    TabOrder = 1
    OnClick = Button1Click
  end
  object StringGrid1: TStringGrid
    Left = 176
    Top = 82
    Width = 580
    Height = 508
    Anchors = [akLeft, akTop, akRight, akBottom]
    BiDiMode = bdRightToLeft
    ColCount = 1
    DefaultColWidth = 20
    DefaultRowHeight = 10
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    Options = [goVertLine, goHorzLine, goRangeSelect, goRowSizing, goColSizing]
    ParentBiDiMode = False
    TabOrder = 2
  end
  object RichEdit1: TRichEdit
    Left = 8
    Top = 82
    Width = 162
    Height = 508
    Anchors = [akLeft, akTop, akBottom]
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ScrollBars = ssVertical
    TabOrder = 3
    Zoom = 100
  end
  object Button2: TButton
    Left = 384
    Top = 51
    Width = 75
    Height = 25
    Caption = 'Chart1'
    TabOrder = 4
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 224
    Top = 51
    Width = 96
    Height = 25
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
    Enabled = False
    TabOrder = 5
    OnClick = Button3Click
  end
  object Chart1: TChart
    Left = 770
    Top = 82
    Width = 325
    Height = 297
    Title.Text.Strings = (
      'TChart')
    TabOrder = 6
    DefaultCanvas = 'TGDIPlusCanvas'
    ColorPaletteIndex = 13
    object Series1: TLineSeries
      DataSource = DBCrossTabSource1
      Brush.BackColor = clDefault
      Pointer.InflateMargins = True
      Pointer.Style = psRectangle
      XValues.Name = 'X'
      XValues.Order = loAscending
      YValues.Name = 'Y'
      YValues.Order = loNone
    end
  end
  object SeriesDataSet1: TSeriesDataSet
    Active = True
    Series = Series1
    Left = 872
    Top = 448
    object SeriesDataSet1X: TFloatField
      FieldName = 'X'
    end
    object SeriesDataSet1Y: TFloatField
      FieldName = 'Y'
    end
  end
  object DBCrossTabSource1: TDBCrossTabSource
    Series = Series1
    DataSet = SeriesDataSet1
    Left = 960
    Top = 448
  end
end
