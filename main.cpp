#include <iostream>
#include <cmath>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    cout << "Добро пожаловать в DebilniyCalculator" << endl;
    cout << "Текущая версия: 0.8.3" << endl;

    int profile;
    cout << "Список профилей:" << endl
         << "1 - Обыкновенные вычисления." << endl
         << "2 - Квадратные уравнения." << endl
         << "3 - НОД чисел." << endl
         << "4 - НОК чисел." << endl
         << "5 - Процент от числа" << endl
         << "6 - Теорема Пифагора" << endl
         << "7 - Логарифм" << endl;
    cout << "Выберите профиль: ";
    cin >> profile;

    switch(profile) {
        case 1: {
            float num1, num2, result;
            char op;

            cout << "Введите выражение (например 2 + 3): ";
            cin >> num1 >> op >> num2;

            
            switch(op) {
                case '+': result = num1 + num2; break;
                case '-': result = num1 - num2; break;
                case '*': result = num1 * num2; break;
                case '/': result = num1 / num2; break;
                default:
                    cout << "Неверный оператор." << endl;
                    return 1;
            }
            
            cout << "Результат: " << result << endl;
            break;
        }
        
        case 2: {
            float a, b, c;
            
            cout << "Введите коэффициенты квадратного уравнения (например 1 2 -3): ";
            cin >> a >> b >> c;
            
            float discriminant = b * b - 4 * a * c;
            
            if (discriminant > 0) {
                float x1 = (-b + sqrt(discriminant)) / (2 * a);
                float x2 = (-b - sqrt(discriminant)) / (2 * a);

                cout << "Дискриминант равен: " << discriminant << endl;
                cout << "Корни уравнения: " << x1 << " и " << x2 << endl;
                
            } else if (discriminant == 0) {
                float x = -b / (2 * a);

                cout << "Дискриминант равен: " << discriminant << endl;
                cout << "Уравнение имеет один корень: " << x << endl;

            } else {
                cout << "Дискриминант равен: " << discriminant << endl;
                cout << "Уравнение не имеет действительных корней." << endl;
            }
            
            break;
        }
        
        case 3: {
            int n;

            cout << "Введите количество чисел: ";
            cin >> n;

            int num;
            cin >> num;

            int gcd = num;

            for (int i = 1; i < n; i++) {
                cin >> num;
                gcd = __gcd(gcd, num);
            }

            cout << "Наибольший общий делитель: " << gcd << endl;
            break;
        }
        
        
        case 4: {
            int n;

            cout << "Введите количество чисел: ";
            cin >> n;

            int num;
            cin >> num;

            int lcm = num;

            for (int i = 1; i < n; i++) {
                cin >> num;
                lcm = lcm * num / __gcd(lcm, num);
            }
            cout << "Наименьшее общее кратное: " << lcm << endl;
             break;
        }
        
        
        case 5: {
          float num1, num2, percent_result;
          char op;
          
          cout << "Введите выражение (например 2 % 5)";
          cin >> num1 >> op >> num2;
          
          switch(op) {
                case '%': percent_result = (num2 / num1) * 100; break;
                break;

                default:
                    cout << "Неверный оператор." << endl;
                    return 1;
            }
          
          cout << num1 << " % " << num2 << " = " << percent_result << "% ";
          break;
          
        }
        
        case 6: {
          float a, b, c;

          cout << "Введите коэффициенты a и b ";
          cin >> a >> b;

          c = sqrt(a*a + b*b);
          
          cout << "Гипотензуза равна " << c;
          break;
        }
        
        case 7: {
          double num, result;
          
          cout << "Введите ваше число: ";
          cin >> num;
          
          result = log(num);
          
          cout << "Логарифм из числа " << num << " = " << result;
          break;
        }
        
        default:
            cout << "Неверный профиль." << endl;
            return 1;
            
    }
    
    return 0;
}