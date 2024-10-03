#include <iostream>
#include <unistd.h> // لتستخدم دالة sleep
using namespace std;

/**** var ****/
double a; // المتغير لتخزين القيمة الأولى
double b; // المتغير لتخزين القيمة الثانية
int c; // المتغير لتخزين اختيار المستخدم
string op; // المتغير لتخزين العملية الحسابية
/**** var ****/

/**** func ****/
double hesab(double, string, double); // دالة الحساب
void Perimeter_calculation(double, double); // دالة حساب المحيط
void Area_calculation(double, double); // دالة حساب المساحة
/**** func ****/

int main() {
    while (true) {
        system("cls"); // مسح الشاشة
        // عرض القائمة الرئيسية
        cout << "\n"
             << "\n"
             << "\n"
             << "\n"
             << "\n"
             << "\t \t \t \t \t /---------------------------------\\  \n"
             << "\t \t \t \t \t |                                 | \n"
             << "\t \t \t \t \t | 1 to calculator                 | \n"
             << "\t \t \t \t \t | 2 to Perimeter calculation      | \n"
             << "\t \t \t \t \t | 3 to Area calculation           | \n"
             << "\t \t \t \t \t |                                 | \n"
             << "\t \t \t \t \t \\---------------------------------/ \n"
             << "\n"
             << "\n"
             << "\n"
             << "\n"
             << "\n"
             << "\n"
             << ">> ";

        cin >> c; // إدخال اختيار المستخدم

        // معالجة اختيار المستخدم
        if (c == 1) {
            cout << ">> ";
            cin >> a >> op >> b; // إدخال القيم والعملية
            hesab(a, op, b); // استدعاء دالة الحساب
        } else if (c == 2) {
            Perimeter_calculation(a, b); // استدعاء دالة حساب المحيط
        } else if (c == 3) {
            Area_calculation(a, b); // استدعاء دالة حساب المساحة
        } else {
            cout << "\a"; // صوت تنبيه عند اختيار غير صحيح
        }

        getchar(); // الانتظار لإدخال المستخدم
    }
}

double hesab(double a, string op, double b) {
    // معالجة العمليات الحسابية
    if (op == "+") {
        cout << "= " << a + b << endl; // جمع
    } else if (op == "-") {
        cout << "= " << a - b << endl; // طرح
    } else if (op == "*") {
        cout << "= " << a * b << endl; // ضرب
    } else if (op == "/") {
        if (b != 0) {
            cout << "= " << a / b << endl; // قسمة
        } else {
            cout << "error: division by zero" << endl; // خطأ في القسمة على صفر
        }
    } else {
        cout << "error: invalid operator" << endl; // خطأ في العملية
    }
    sleep(3); // الانتظار لمدة 3 ثوانٍ

    int rut;
    while (true) {
        cout << "\nPress 0 to return to the main interface\n"; // طلب العودة للقائمة الرئيسية
        cin >> rut; // إدخال المستخدم
        if (rut == 0) {
            main(); // العودة إلى الدالة الرئيسية
        }
    }
}

void Perimeter_calculation(double a, double b) {
    int c1; // متغير لتخزين اختيار المستخدم
    system("cls"); // مسح الشاشة
    // عرض قائمة حساب المحيط
    cout << "\n"
         << "\n"
         << "\n"
         << "\n"
         << "\n"
         << "\t \t \t \t \t /---------------------------------\\  \n"
         << "\t \t \t \t \t |                                 | \n"
         << "\t \t \t \t \t | 1 to square                     | \n"
         << "\t \t \t \t \t | 2 to rectangular                | \n"
         << "\t \t \t \t \t |                                 | \n"
         << "\t \t \t \t \t \\---------------------------------/ \n"
         << "\n"
         << "\n"
         << "\n"
         << "\n"
         << "\n"
         << "\n"
         << ">> ";
    cin >> c1; // إدخال اختيار المستخدم

    // حساب المحيط بناءً على الاختيار
    if (c1 == 1) {
        cout << "Enter the length of the side\n>> "; // طلب إدخال طول الضلع
        cin >> a; // إدخال طول الضلع
        cout << ">> = " << a * 4 << " cm"; // حساب المحيط وعرضه
    } else if (c1 == 2) {
        cout << "Enter the length of the side & the offer\n>> side = "; // طلب إدخال الطول والعرض
        cin >> a; // إدخال الطول
        cout << ">> the offer = ";
        cin >> b; // إدخال العرض
        cout << ">> = " << (a + b) * 2 << " cm"; // حساب المحيط وعرضه
    }

    sleep(3); // الانتظار لمدة 3 ثوانٍ
    int rut;
    while (true) {
        cout << "\nPress 0 to return to the main interface\n"; // طلب العودة للقائمة الرئيسية
        cin >> rut; // إدخال المستخدم
        if (rut == 0) {
            main(); // العودة إلى الدالة الرئيسية
        }
    }
}

void Area_calculation(double a, double b) {
    int c2; // متغير لتخزين اختيار المستخدم
    system("cls"); // مسح الشاشة
    // عرض قائمة حساب المساحة
    cout << "\n"
         << "\n"
         << "\n"
         << "\n"
         << "\n"
         << "\t \t \t \t \t /---------------------------------\\  \n"
         << "\t \t \t \t \t |                                 | \n"
         << "\t \t \t \t \t | 1 to square                     | \n"
         << "\t \t \t \t \t | 2 to rectangular                | \n"
         << "\t \t \t \t \t |                                 | \n"
         << "\t \t \t \t \t \\---------------------------------/ \n"
         << "\n"
         << "\n"
         << "\n"
         << "\n"
         << "\n"
         << "\n"
         << ">> ";
    cin >> c2; // إدخال اختيار المستخدم

    // حساب المساحة بناءً على الاختيار
    if (c2 == 1) {
        cout << "Enter the length of the side\n>> "; // طلب إدخال طول الضلع
        cin >> a; // إدخال طول الضلع
        cout << ">> = " << a * a << " cm²"; // حساب المساحة وعرضها
    } else if (c2 == 2) {
        cout << "Enter the length of the side & the offer\n>> side = "; // طلب إدخال الطول والعرض
        cin >> a; // إدخال الطول
        cout << ">> the offer = ";
        cin >> b; // إدخال العرض
        cout << ">> = " << a * b << " cm²"; // حساب المساحة وعرضها
    }

    sleep(3); // الانتظار لمدة 3 ثوانٍ
    int rut;
    while (true) {
        cout << "\nPress 0 to return to the main interface\n"; // طلب العودة للقائمة الرئيسية
        cin >> rut; // إدخال المستخدم
        if (rut == 0) {
            main(); // العودة إلى الدالة الرئيسية
        }
    }
}
