#pragma once
#pragma once
#include <iostream>
#include<string>
#include <string.h>
#include <cctype>

namespace VOLTMETERGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using namespace System::Data::SqlClient;
	using namespace System::Runtime::InteropServices;


	std::string stringValue;
	int count;
	bool isComplete;
	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		String^ signPtr;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

void EstablishDatabaseConnection()  {
String^ DBconn = "Data Source=localhost\\sqlexpress;Initial Catalog=SmartDB;Integrated Security=True";
		   SqlConnection^ sqlConn = gcnew SqlConnection(DBconn);

		   try
		   {
			   sqlConn->Open();
			   
		   }
		   catch (SqlException^ ex)
		   {
			   // Handle any exceptions related to the database connection
			   MessageBox::Show("Database connection error: " + ex->Message);
		   }
		   finally
		   {
			   sqlConn->Close();
		   }
}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ btnExit;

	private: System::Windows::Forms::Button^ btnConnect;
	private: System::Windows::Forms::GroupBox^ controls;


	private: System::Windows::Forms::Button^ btnRead;
	private: System::Windows::Forms::Button^ btnStatus;




	private: System::Windows::Forms::Button^ btnClrLog;

	private: System::Windows::Forms::Button^ btnLog;
	private: System::Windows::Forms::Button^ btnkV;


	private: System::Windows::Forms::Button^ btnHold;
	private: System::Windows::Forms::Button^ btnV;


	private: System::Windows::Forms::Button^ btnmV;

	private: System::Windows::Forms::Button^ btnCalibrate;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ mV;
	private: System::Windows::Forms::Label^ V;
	private: System::Windows::Forms::Label^ kV;



	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ voltage;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ time;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ date;
	private: System::Windows::Forms::Label^ voltageValue;

	private: System::Windows::Forms::Label^ polaritySign;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label8;
	private: System::IO::Ports::SerialPort^ serialPort1;
	private: System::Windows::Forms::Timer^ readTimer;
	private: System::ComponentModel::IContainer^ components;











	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnConnect = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->controls = (gcnew System::Windows::Forms::GroupBox());
			this->btnClrLog = (gcnew System::Windows::Forms::Button());
			this->btnLog = (gcnew System::Windows::Forms::Button());
			this->btnHold = (gcnew System::Windows::Forms::Button());
			this->btnkV = (gcnew System::Windows::Forms::Button());
			this->btnmV = (gcnew System::Windows::Forms::Button());
			this->btnV = (gcnew System::Windows::Forms::Button());
			this->btnCalibrate = (gcnew System::Windows::Forms::Button());
			this->btnRead = (gcnew System::Windows::Forms::Button());
			this->btnStatus = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->mV = (gcnew System::Windows::Forms::Label());
			this->V = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->kV = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->voltageValue = (gcnew System::Windows::Forms::Label());
			this->polaritySign = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->voltage = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->readTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1->SuspendLayout();
			this->controls->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->groupBox1->Controls->Add(this->btnExit);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->btnConnect);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(576, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(218, 112);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"COM PORT SETTINGS";
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::Red;
			this->btnExit->Location = System::Drawing::Point(109, 73);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(103, 31);
			this->btnExit->TabIndex = 2;
			this->btnExit->Text = L"EXIT";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"BAUD RATE";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"COM PORT";
			// 
			// btnConnect
			// 
			this->btnConnect->BackColor = System::Drawing::Color::Green;
			this->btnConnect->Location = System::Drawing::Point(6, 73);
			this->btnConnect->Name = L"btnConnect";
			this->btnConnect->Size = System::Drawing::Size(103, 31);
			this->btnConnect->TabIndex = 2;
			this->btnConnect->Text = L"CONNECT";
			this->btnConnect->UseVisualStyleBackColor = false;
			this->btnConnect->Click += gcnew System::EventHandler(this, &MyForm::btnConnect_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(100, 46);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(109, 21);
			this->comboBox2->TabIndex = 0;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(100, 19);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(109, 21);
			this->comboBox1->TabIndex = 0;
			// 
			// controls
			// 
			this->controls->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->controls->Controls->Add(this->btnClrLog);
			this->controls->Controls->Add(this->btnLog);
			this->controls->Controls->Add(this->btnHold);
			this->controls->Controls->Add(this->btnkV);
			this->controls->Controls->Add(this->btnmV);
			this->controls->Controls->Add(this->btnV);
			this->controls->Controls->Add(this->btnCalibrate);
			this->controls->Controls->Add(this->btnRead);
			this->controls->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->controls->Location = System::Drawing::Point(576, 190);
			this->controls->Name = L"controls";
			this->controls->Size = System::Drawing::Size(218, 190);
			this->controls->TabIndex = 1;
			this->controls->TabStop = false;
			this->controls->Text = L"CONTROLS";
			// 
			// btnClrLog
			// 
			this->btnClrLog->BackColor = System::Drawing::SystemColors::InfoText;
			this->btnClrLog->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnClrLog->Location = System::Drawing::Point(6, 104);
			this->btnClrLog->Name = L"btnClrLog";
			this->btnClrLog->Size = System::Drawing::Size(97, 31);
			this->btnClrLog->TabIndex = 3;
			this->btnClrLog->Text = L"CLR LOG";
			this->btnClrLog->UseVisualStyleBackColor = false;
			// 
			// btnLog
			// 
			this->btnLog->BackColor = System::Drawing::SystemColors::InfoText;
			this->btnLog->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnLog->Location = System::Drawing::Point(115, 67);
			this->btnLog->Name = L"btnLog";
			this->btnLog->Size = System::Drawing::Size(97, 31);
			this->btnLog->TabIndex = 3;
			this->btnLog->Text = L"LOG";
			this->btnLog->UseVisualStyleBackColor = false;
			// 
			// btnHold
			// 
			this->btnHold->BackColor = System::Drawing::Color::Orange;
			this->btnHold->Location = System::Drawing::Point(115, 30);
			this->btnHold->Name = L"btnHold";
			this->btnHold->Size = System::Drawing::Size(97, 31);
			this->btnHold->TabIndex = 3;
			this->btnHold->Text = L"HOLD";
			this->btnHold->UseVisualStyleBackColor = false;
			// 
			// btnkV
			// 
			this->btnkV->BackColor = System::Drawing::SystemColors::InfoText;
			this->btnkV->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnkV->Location = System::Drawing::Point(115, 141);
			this->btnkV->Name = L"btnkV";
			this->btnkV->Size = System::Drawing::Size(97, 31);
			this->btnkV->TabIndex = 3;
			this->btnkV->Text = L"kV";
			this->btnkV->UseVisualStyleBackColor = false;
			// 
			// btnmV
			// 
			this->btnmV->BackColor = System::Drawing::SystemColors::InfoText;
			this->btnmV->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnmV->Location = System::Drawing::Point(115, 104);
			this->btnmV->Name = L"btnmV";
			this->btnmV->Size = System::Drawing::Size(97, 31);
			this->btnmV->TabIndex = 3;
			this->btnmV->Text = L"mV";
			this->btnmV->UseVisualStyleBackColor = false;
			// 
			// btnV
			// 
			this->btnV->BackColor = System::Drawing::SystemColors::InfoText;
			this->btnV->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnV->Location = System::Drawing::Point(6, 141);
			this->btnV->Name = L"btnV";
			this->btnV->Size = System::Drawing::Size(97, 31);
			this->btnV->TabIndex = 3;
			this->btnV->Text = L"V";
			this->btnV->UseVisualStyleBackColor = false;
			// 
			// btnCalibrate
			// 
			this->btnCalibrate->BackColor = System::Drawing::SystemColors::InfoText;
			this->btnCalibrate->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnCalibrate->Location = System::Drawing::Point(6, 67);
			this->btnCalibrate->Name = L"btnCalibrate";
			this->btnCalibrate->Size = System::Drawing::Size(97, 31);
			this->btnCalibrate->TabIndex = 3;
			this->btnCalibrate->Text = L"CALIBRATE";
			this->btnCalibrate->UseVisualStyleBackColor = false;
			// 
			// btnRead
			// 
			this->btnRead->BackColor = System::Drawing::Color::Green;
			this->btnRead->Location = System::Drawing::Point(6, 30);
			this->btnRead->Name = L"btnRead";
			this->btnRead->Size = System::Drawing::Size(97, 31);
			this->btnRead->TabIndex = 3;
			this->btnRead->Text = L"READ";
			this->btnRead->UseVisualStyleBackColor = false;
			this->btnRead->Click += gcnew System::EventHandler(this, &MyForm::btnRead_Click);
			// 
			// btnStatus
			// 
			this->btnStatus->BackColor = System::Drawing::Color::Red;
			this->btnStatus->Enabled = false;
			this->btnStatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStatus->Location = System::Drawing::Point(576, 130);
			this->btnStatus->Name = L"btnStatus";
			this->btnStatus->Size = System::Drawing::Size(218, 54);
			this->btnStatus->TabIndex = 2;
			this->btnStatus->Text = L"DISCONNECTED";
			this->btnStatus->UseVisualStyleBackColor = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->mV);
			this->panel1->Controls->Add(this->V);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->kV);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(558, 172);
			this->panel1->TabIndex = 3;
			// 
			// mV
			// 
			this->mV->AutoSize = true;
			this->mV->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->mV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mV->Location = System::Drawing::Point(7, 27);
			this->mV->Name = L"mV";
			this->mV->Size = System::Drawing::Size(35, 22);
			this->mV->TabIndex = 0;
			this->mV->Text = L"mV";
			// 
			// V
			// 
			this->V->AutoSize = true;
			this->V->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->V->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->V->Location = System::Drawing::Point(8, 54);
			this->V->Name = L"V";
			this->V->Size = System::Drawing::Size(34, 22);
			this->V->TabIndex = 0;
			this->V->Text = L"V   ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::InfoText;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(0, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(41, 22);
			this->label8->TabIndex = 0;
			this->label8->Text = L"DC ";
			// 
			// kV
			// 
			this->kV->AutoSize = true;
			this->kV->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->kV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->kV->Location = System::Drawing::Point(8, 82);
			this->kV->Name = L"kV";
			this->kV->Size = System::Drawing::Size(34, 22);
			this->kV->TabIndex = 0;
			this->kV->Text = L"kV ";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->voltageValue);
			this->panel2->Controls->Add(this->polaritySign);
			this->panel2->Location = System::Drawing::Point(48, 27);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(504, 122);
			this->panel2->TabIndex = 2;
			// 
			// voltageValue
			// 
			this->voltageValue->AutoSize = true;
			this->voltageValue->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->voltageValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 69.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->voltageValue->Location = System::Drawing::Point(92, 7);
			this->voltageValue->Name = L"voltageValue";
			this->voltageValue->Size = System::Drawing::Size(337, 105);
			this->voltageValue->TabIndex = 1;
			this->voltageValue->Text = L"00.000";
			// 
			// polaritySign
			// 
			this->polaritySign->AutoSize = true;
			this->polaritySign->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->polaritySign->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 69.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->polaritySign->Location = System::Drawing::Point(8, 7);
			this->polaritySign->Name = L"polaritySign";
			this->polaritySign->Size = System::Drawing::Size(100, 105);
			this->polaritySign->TabIndex = 1;
			this->polaritySign->Text = L"+";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->groupBox3->Controls->Add(this->dataGridView1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(12, 190);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(558, 190);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"DATABASE";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->ID, this->voltage,
					this->time, this->date
			});
			this->dataGridView1->Location = System::Drawing::Point(6, 19);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(546, 165);
			this->dataGridView1->TabIndex = 0;
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->Width = 50;
			// 
			// voltage
			// 
			this->voltage->HeaderText = L"voltage";
			this->voltage->Name = L"voltage";
			this->voltage->Width = 150;
			// 
			// time
			// 
			this->time->HeaderText = L"time";
			this->time->Name = L"time";
			this->time->Width = 150;
			// 
			// date
			// 
			this->date->HeaderText = L"date";
			this->date->Name = L"date";
			this->date->Width = 150;
			// 
			// serialPort1
			// 
			this->serialPort1->ReadTimeout = 30;
			this->serialPort1->WriteTimeout = 23;
			// 
			// readTimer
			// 
			this->readTimer->Tick += gcnew System::EventHandler(this, &MyForm::readTimer_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(806, 389);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->controls);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnStatus);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DC Dual-Slope-Integration Voltmeter";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->controls->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//When the windows form starts it will get the available ports, populate the comboBox.
		array<Object^>^ arrayOBJ = SerialPort::GetPortNames();
		this->comboBox1->Items->AddRange(arrayOBJ);

		//When the windows form starts it will load the comboBox with the baudrate options.
		array<Object^>^ baudRates = { 9600, 57600, 115200 };
		this->comboBox2->Items->AddRange(baudRates);

		controls->Enabled = false;
		readTimer->Enabled = false;
	}
	private: void enableCtrls() {
		controls->Enabled = true;
	}

	private: void disableCtrls() {
		controls->Enabled = false;
	}

	private: void connect() {
		bool conError= false;
		if (comboBox1->SelectedIndex != -1 && comboBox2->SelectedIndex != -1) {
			try
			{
				if (!(this->serialPort1->IsOpen)) {
					this->serialPort1->PortName = comboBox1->Text;
					this->serialPort1->BaudRate = Int32::Parse(comboBox2->Text);

					readTimer->Enabled = false;
					this->serialPort1->Open();
					btnStatus->Text = "CONNECTED";
					btnStatus->BackColor = System::Drawing::Color::Green;
					enableCtrls();
				}
			}
			catch (UnauthorizedAccessException^) { conError = true; }
			catch (System::IO::IOException^) { conError = true; }
			catch (ArgumentException^) { conError = true; }
			if (conError) MessageBox::Show(this, "Could not open COM port. Port could be in use!");
		}
		else {
			MessageBox::Show("Please select all COM Port settings");
		}
		
	}

	private: void disconnect() {
		this->serialPort1->Close();
		btnStatus->Text = "DISCONNECTED";
		btnStatus->BackColor = System::Drawing::Color::Red;
		disableCtrls();
	}

private: std::string getValue(String^ tmp1) {
	char* p = (char*)(Marshal::StringToHGlobalAnsi(tmp1)).ToPointer();
	std::string str = p;
	Marshal::FreeHGlobal((IntPtr)p);
	return str;
}

private: int CountDigitsInString(const std::string& inputString) {
	int numberOfDigits = 0;

	for (char c : inputString) {
		if (std::isdigit(c)) {
			numberOfDigits++;
		}
	}

	return numberOfDigits;
}

private: bool IsCompleteMessage(const std::string& message) {
	return message.find('\n') != std::string::npos;
}

private: void processData(int count, bool isComplete, std::string stringValue) {
	int ADC = 0;
	double value;
	double gradient;
	double offset;
	double actualError;
	double voltage;
	String^ strValue;

	gradient = (1023 - 0) / (12 - 0.005);
	offset = 1023 - (gradient * 12);

	if (isComplete) {
		std::string sign, refVolt, adcValue;
		int SubStrCount = 0;

		if (count == 4) {
			sign = stringValue.substr(0, 1);
			refVolt = stringValue.substr(1, 1);
			adcValue = stringValue.substr(2, 2);
			SubStrCount = 2;
		}

		if (count == 5) {
			sign = stringValue.substr(0, 1);
			refVolt = stringValue.substr(1, 1);
			adcValue = stringValue.substr(2, 3);
			SubStrCount = 3;
		}

		if (count == 6) {
			sign = stringValue.substr(0, 1);
			refVolt = stringValue.substr(1, 1);
			adcValue = stringValue.substr(2, 4);
			SubStrCount = 4;
		}

		ADC = std::stoi(adcValue);
		signPtr = gcnew String(sign.data());

		if (isComplete == true && refVolt.length() == 1) {
			if (CountDigitsInString(adcValue) == SubStrCount && stoi(refVolt) == 5) {
				value = ADC * (0.00488);

				std::string StrValue = std::to_string(value);
				//voltage = (ADC - offset) / gradient;
				//actualError = (voltage - (ADC * 0.01173));
				std::string SubStrValue = StrValue.substr(0, 7);
				strValue = gcnew String(SubStrValue.data());
				voltageValue->Text = strValue;
			}
		}

	}
}


private: System::Void btnConnect_Click(System::Object^ sender, System::EventArgs^ e) {
	connect();

	//System::DateTime dateTime = DateTime::Now;
	//System::String^ dateTimeString = dateTime.ToString();
	//System::String^ dateOnly = dateTime.ToString("yyyy-MM-dd");
	//System::String^ timeOnly = dateTime.ToString("HH:mm");
}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	disconnect();
}

private: System::Void btnRead_Click(System::Object^ sender, System::EventArgs^ e) {
	readTimer->Enabled = true;
	serialPort1->DiscardInBuffer();
	serialPort1->DiscardOutBuffer();
}

private: System::Void readTimer_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (serialPort1->IsOpen) {
		try
		{
			String^ incomingData = serialPort1->ReadExisting();
			stringValue = getValue(incomingData);
			count = CountDigitsInString(stringValue);
			isComplete= IsCompleteMessage(stringValue);
			processData(count, isComplete, stringValue);
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show("Could not read from the serial port: " + ex->Message);
		}
	}
}

};
}
