#include "pch.h"
using namespace CppCLRWinFormsProject;
using namespace std;
using namespace msclr; 

// #include "Form1.h"

Deque *dq[2]; 
CharQue cQ(5);
Int iQ(5);
bool Form1::printLog(Deque *items, int controlType) {
	string s = interop::marshal_as<string>(textBox1->Text);
	string st = interop::marshal_as<string>(textBox1->Text);
	int i = 0;
	char c = s[0];
	switch (controlType) {
	case 1:
		if (items->isempty()) {
			label4->Text = "Hata! Sýra boþ!";
			a = 0;
			timer1->Start();
			return false; 
		}
		label4->Text = "Silme iþlemi baþarýlý.";
		a = 0;
		timer1->Start();
		return true; 
		break; 
	case 2: 
		if (check()) {
			if (textBox1->Text == "") {
				label4->Text = "Hata! Hiç bir þey girmediniz!";
				a = 0;
				timer1->Start();
				return false; 
			}
			if (items->isfull()) {
				label4->Text = "Hata! Sýra dolu!";
				a = 0;
				timer1->Start();
				return false;
			}
			for (string::const_iterator it = s.begin(); it != s.end(); it++, i++) {
				if (!isdigit(st[i])) {
					label4->Text = "Hata! Tam sayý seçiliyken karakter giriþi yaptýnýz!";
					a = 0;
					timer1->Start();
					return false;
				}
			}
		}
		if (!check()) {
			if (textBox1->Text == "") {
				label4->Text = "Hata! Hiç bir þey girmediniz!";
				a = 0;
				timer1->Start();
				return false;
			}
			if (items->isfull()) {
				label4->Text = "Hata! Sýra dolu!";
				a = 0;
				timer1->Start();
				return false;
			}

			for (string::const_iterator it = s.begin(); it != s.end(); it++, i++) {
				if (isdigit(st[i])) {
					label4->Text = "Hata! Karakter seçiliyken tam sayý giriþi yaptýnýz!";
					a = 0;
					timer1->Start();
					return false;
				}
			}
			return true;
		}
		return true; 
		break; 
	
	}
}

 
bool Form1::check() {
	if (radioButton1->Checked == true ) {
		dq[0] = &iQ;
		return true; 
	}
	else {
		dq[1] = &cQ;
		return false; 
	}
}

void Form1::Form1_Load(Object^ sender, EventArgs^ e) {
	
	not = label4->Text; 
	this->Text = "Dequeue implementation";
}

bool isdigit(const string& s) {
	string::const_iterator it;
	for (it = s.begin(); it != s.end() && isdigit(*it); it++) {

	}
	return !s.empty() && it == s.end();
}

void Form1::button1_Click(Object^ sender, EventArgs^ e) { //Öne ekle
	if (check()) {
		if (printLog(dq[0], 2)) {
			string s = interop::marshal_as<string>(textBox1->Text);
			int i = stoi(s);
			dq[0]->ins_front(i);
			label4->Text = "Baþarýlý! \"" + i + "\" deðeri sýraya eklendi!";
			a = 0; 
			timer1->Start();
			front->Text = iQ.returnfront().ToString();
			if (rear->Text == "") {
				rear->Text = iQ.returnrear().ToString();
			}
		}
	}
	else {
		if (printLog(dq[1], 2)) {
			string s = interop::marshal_as<string>(textBox1->Text);
			dq[1]->ins_front(s[0]);
			string front(1, cQ.returnfront());
			string rear(1, cQ.returnrear());
			String^ fs = gcnew String(front.c_str());
			String^ rs = gcnew String(rear.c_str());
			label4->Text = "Baþarýlý! \"" + fs + "\" deðeri sýraya eklendi!";
			a = 0;
			timer1->Start();
			
			frontC->Text = fs;
			rearC->Text = rs; 
		}
		
	}

}
void Form1::button2_Click(Object^ sender, EventArgs^ e) { //Önden Sil 
	if (check()) {
		if (printLog(dq[0], 1)) {
			int i = iQ.returnfront();
			dq[0]->del_front(); 
			label4->Text = "Baþarýlý! \"" + i + "\" deðer sýradan silindi!";
			if (iQ.isempty()) {
				front->Text = "";
				rear->Text = "";
			}
			else {
				front->Text = iQ.returnfront().ToString();
			}
		}
	}
	else {
		if (printLog(dq[1], 1)) {
			string front(1, cQ.returnfront());
			String^ fs = gcnew String(front.c_str());
			dq[1]->del_front();
			label4->Text = "Baþarýlý! \"" + fs + "\" deðer sýradan silindi!";
			a = 0;
			timer1->Start();
			if (cQ.isempty()) {
				frontC->Text = "";
				rearC->Text = "";
			}
			else {
				string front(1, cQ.returnfront());
				string rear(1, cQ.returnrear());
				String^ fs = gcnew String(front.c_str());
				String^ rs = gcnew String(rear.c_str());
				frontC->Text = fs;
				rearC->Text = rs;
			}
		}
	}
}
void Form1::button3_Click(Object^ sender, EventArgs^ e) { //Arkaya Ekle
	if (check()) {
		if (printLog(dq[0], 2)) {
			string s = interop::marshal_as<string>(textBox1->Text);
			int i = stoi(s);
			dq[0]->ins_rear(i);
			label4->Text = "Baþarýlý! \"" + i + "\" deðeri sýraya eklendi!";
			a = 0;
			timer1->Start();
			rear->Text = iQ.returnrear().ToString();
			if (front->Text == "") {
				front->Text = iQ.returnfront().ToString();
			}
		}
	}
	else {
		if (printLog(dq[1], 2)) {
			string s = interop::marshal_as<string>(textBox1->Text);
			dq[1]->ins_rear(s[0]);
			string front(1, cQ.returnfront());
			string rear(1, cQ.returnrear());
			String^ fs = gcnew String(front.c_str());
			String^ rs = gcnew String(rear.c_str());
			label4->Text = "Baþarýlý! \"" + rs + "\" deðeri sýraya eklendi!";
			a = 0;
			timer1->Start();
			frontC->Text = fs;
			rearC->Text = rs;
		}
	}
}

void Form1::button4_Click(Object^ sender, EventArgs^ e) {
	if (check()) {
		if (printLog(dq[0], 1)) {
			int i = iQ.returnrear();
			dq[0]->del_rear();
			label4->Text = "Baþarýlý! \"" + i + "\" deðer sýradan silindi!";
			a = 0;
			timer1->Start();
			if (iQ.isempty()) {
				front->Text = "";
				rear->Text = "";
			}
			else {
				rear->Text = iQ.returnrear().ToString();
			}
		}
	}
	else {
		if (printLog(dq[1], 1)) {
			string rear(1, cQ.returnrear());
			String^ rs = gcnew String(rear.c_str());
			dq[1]->del_rear();
			label4->Text = "Baþarýlý! \"" + rs + "\" deðer sýradan silindi!";
			a = 0;
			timer1->Start();
			if (cQ.isempty()) {
				frontC->Text = "";
				rearC->Text = "";
			}
			else {
				string front(1, cQ.returnfront());
				string rear(1, cQ.returnrear());
				String^ fs = gcnew String(front.c_str());
				String^ rs = gcnew String(rear.c_str());
				frontC->Text = fs;
				rearC->Text = rs;
			}
		}
	}
}