// Example program
#include <iostream>
#include <string>
using namespace std;
#include <cmath>
int i_pow(int a, int n){
    int ans = 1;
    for(int i = 0; i < n; i++){
        ans *= a;
    }
    return ans;
}
void two_code (int s){
    int k = 1;
    while (s>0){
        k*=10;
        k+=s%2;
        s=s/2;}
    while (k>1){
        cout<< k%10;
        k/=10;
    }
}
void chislo (int b){
    for(int i = 0  ;i < b;i++){
        cout << "_";
    }
    
}
void Swap(int a, int b){
    int c;
    c=a;a=b;b=c;

}
int Suma_chisel(int a){ 
    int sum = 0;
    while (a>0){
        sum += a % 10 ;
        a /= 10;
    }    
    return sum  ;
}
int NOD (int a, int b){
    int nod  ;
    for(int i=1;i<= a && i<=b;i++){
        if (a % i == 0 && b % i == 0){
            nod = i;
        }
    
    }
    return nod;
}
bool Sovershon(int a , int sum_del){
    int num = 0 ; 
    for(int i = 1;i < sum_del;i++){
        if(sum_del % i == 0){
            num++;     
        }
    }
    if(sum_del == num){
        return sum_del == num;
    }else {
        return false;
    }
}
bool spl(int a, int b){
    int p_d=2;
    while(p_d < a && p_d < b){
        if(a % p_d == 0 && b % p_d == 0){
            return false;
            
        }
    p_d++;
    }
return true;
}
bool is_simple(int a){
    for(int i = 2 ; i < a ; i++){
        if(a % i == 0){
            return false;
        }  
    }
 return true;   
}//
// функция в функцие
bool super_simple(int a){
    while(a > 0){
      if (is_simple(a)){
            a /= 10;
         }else{
             return false;   
            }
    } 
    return true;
    
}//
void test (int a) {
    if(a < 10){
        cout << a <<'+';
        test(a+1);
    }
}

int dvoich(int n){
    if(n == 1){
       return 1; 
    }
    if(n == 0){
       return 0; 
    }
    if(n>1){
        return dvoich(n / 2) * 10 + n % 2;
    }
}

void printer(int n){
    if(n > 0){
        cout << ", " << n;
        printer (n - 1 );
    }
} 


int main()
{
    /*float x = 123.456;
    cout.width(10);
    //cout.precision(5);
    cout.precision(2);
    cout << x << endl;*/   
    /*float a , b , c , d;
    cin >> a >> b >> c >> d;
    cout << sqrt (pow(a-c,2) + pow(b-d,2));*/
    /* int a,s,d; 
    cin >> a >> s >> d; 
    if (a>s && a>d){ 
        cout << a; 
    } else if (s>a && s>d) { 
        cout << s; 
    } else if (d>a && d>s) { 
        cout << d; 
    } else { 
        cout << "ravny"; 
    } 
    return 0; */
    /* int a,c,b; 
    cin >> a >> c >> b; 
    if (a == b && a == c){
        cout << "cool ";
    } else if ( b!= a && a != c){
        cout << "nothing ";
    } else if ( a == b || a == c  ) {
        cout << "50/50";
    } else if( b==c && a != b){
        cout << "50/50";
    } else {
        cout << 0;
    }
    return 0;*/
    /*int a , b ;
    cin >> a >> b;
    while(0 < a && a<=b){
        cout << pow(a,2) << endl;
        a ++;
    }*/
    /*for(int i = 10000;9999<i && i<100000;i++)
        if(i % 133 == 125 && i % 134 == 111){
            cout << i << ' ';
        } ;*/
    /*int a;
    cin >> a;
    for(int i=0; i < a; i++){
        // cout<<endl<<i<<" : ";
        int i_temp = i * i, d_counter = 0;
        while(i_temp > 0) {
            i_temp /= 10;
            d_counter++;
        }
        // cout<<i_temp<<" - "<<d_counter;
        int ten_power = i_pow(10, d_counter - 1);
        // cout<<" = "<<ten_power<<" -> ";
        int last_digits = (i * i) % ten_power;
        // cout<<last_digits % ten_power;
        if(last_digits==i || i == 1){
            cout<<i<<endl;
        }
    
    } 
    return 0;*/
    /*int a ;
    bool n_simple = true;
    for(int a = 2; a < 1000 ; a++){
        for(i = 0 ; i , a ; i++){
            if(a % i == 0){
           n_simple = false;
        }  
        }
    }
    if(n_simple == true){
        cout << a;}*/ //протстые числа от2 до 1000
    /*int  inp_n, last_d ;
    bool proverka = true;
    cin >> inp_n;
    while(inp_n>0){
        last_d= inp_n % 10;
        inp_n /= 10;
        int inp_n_copy = inp_n;
        while(inp_n_copy>0){
            if(last_d == inp_n_copy % 10){
                proverka = false;
            }
        inp_n_copy /= 10;
        }
    }
    if(proverka == true){
    cout << "no";
    }else{
    cout << "yes";
    }*/ //задача одинаковые на цифры
    /*int a , kost;
    kost = 1;
    cin >> a;
    while (a > 0){
        kost *= 10;
        kost += a % 2 ;
        a /= 2;
    while(kost > 1){
        cout << kost % 10;
        kost /= 10;
    }//
    int s,k=1;
    cin >> s;
    while (s>0){
        k*=10;
        k+=s%2;
        s=s/2;}
    while (k>1){
        cout<< k%10;
        k/=10;
    }*/ // дфоичная система записи 
    /*int s;
    cin >> s;
    two_code(s);*/ // процедура по двоичному коду
    /*int i;
    cin >> i;
    chislo(i);*/ // число по которому выставлют пробелы
    /*int x=2 , y=3;
    Swap(x,y);
    cout << x << " " << y;*/ // смена процедцры 
    /*int a;
    cin >> a;
    cout << Suma_chisel(a);*/ // сумма цифр числа
    /*int a,b;
    cin >> a >>b;
    cout << NOD(a,b);*/ // Нод 
    /*int sum_del,a;
    cin >> a;
    cout << Sovershon(sum_del);*/ // совершеные числа
    /*int a , b;
    cin >> a >> b;
    cout << spl(a,b);*/ // совершенные числа 2.0
    /*int a;
    cin >> a;
    cout << super_simple(a);*/ // гипер простые числа
    //test(1); // процедура рекурсии 
    /*int a;
    cin >> a;
    cout << dvoich(a);*/ // двоичный код 2.0
    int a;
    cin >> a;
    printer(a);


}
                            
        
    
    







