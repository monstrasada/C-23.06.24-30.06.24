#include <iostream>
// #include <fstream>
// #include <windows.h>
using namespace std;
#include <time.h>
void test (int a , int b){
    if(a < b){
        cout << "_" << a;
        test (a + 1 , b);
    }
    if(a > b){
        cout << "_" << b;
        test (b + 1, a);
    }
    if(a == b){
        cout <<"_"<< b;
    }
}
void stepen (int a){ 
    if (a == 2) 
    { 
        cout << "YES"; 
    }else{ 
         
        if (a % 2 == 0) 
        { 
            stepen(a / 2); 
        } 
    } 
    if (a % 2 != 0) 
    { 
        cout << "no"; 
    } 
     
} 
int chis_sum(int a){ 
    if (a > 0) 
    { 
        return a % 10 + chis_sum(a / 10); 
         
    }else{ 
        return 0; 
    } 
     
} 
void chet (int a){ 
    if (a > 0){ 
       chet(a / 10); 
       cout << a % 10<<' '; 
         
    } 
} 
void ne_chet(int a){ 
    if (a > 0) 
    { 
        cout << a % 10<<' '; 
        chet(a / 10); 
    }    
} 
 
void Hanoi (int scolko, int otkuda , int kuda ){
    if (scolko !=0) 
    { 
        int p;// вспом стержень = 1+2+3 = 6! 
        p = 6 - otkuda - kuda; 
        Hanoi(scolko-1,otkuda,p); 
        cout << otkuda << "->" << kuda << endl; 
        Hanoi (scolko - 1, p ,kuda); 
 
    } 
}

int system_transfer(int s,int b){
    if(s < b){
       return s; 
    }
    if(s>1){
        return system_transfer(s / b, b) * 10 + s % b;
    }
    return 0;
}




int main(){
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);

    // cout << "the warden" ;
    /*int a,b;
    cin >> a >> b;
    test(a,b);*/
    /*int a; 
    cin >> a; 
    stepen(a);*/ 
    /*int a; 
    cin >> a; 
    cout<<chis_sum(a);*/ 
 
    /*int a; 
    cin >> a; 
    if (a % 2 == 0){ 
        chet(a); 
    }else{ 
        ne_chet(a); 
    }*/ 
    /*int a,b,c; 
    cin >> a >> b >> c; 
    Hanoi(a,b,c);*/ 
    // int n [10]; 
    // cout << &n;
    /*int rost[] = {164,182,195,180,178};
    for(int i = 0; i < 5;i++){
        if(180 < rost[i] && rost[i] < 190){
            cout << rost[i] << endl;
        }
    }*/ // рост баскетболиста 
    /*srand(time(NULL));
    int array = 1 + rand()  % 52;
    cout << array << endl;*/ //рандомные числа


    /*float SUM = 0; // среднее аримметическое
    int num = rand() % 100;
    int RR[100];
    for (int i = 0; i < 100; i++) {
        RR[i] = rand() % 100;
        SUM += RR[i];
    }
    float DEL = SUM / 100;
    cout << DEL;*/
    /*float SUM1=0, SUM2=0,s1=0,s2=0; // сред арифмет 2.0
    int AAA[100];
    // int num = 100;
    for (int i=0; i< 100; i++){
        AAA[i]=rand() % 100;
        //cout << AAA[i]<< " ";
        if (AAA[i] >= 50){
            SUM1+=AAA[i];
            s1++;}
        if (AAA[i] < 50){
            SUM2+=AAA[i];
            s2++;}
    }
    
    float DELIM1 = SUM1/ s1;
    float DELIM2 = SUM2/ s2;
    cout << DELIM1<<endl <<DELIM2<< endl;
    return 0;*/
    /*int n; // от 1 до n 
    int masiv[n];
    for (int i = 0; i < n; i++)
    {
        masiv[i]= i + 1;        
    }
    for (int i = 0; i < n; i++)
    {

        int r_index= rand() % n;
        int temp = masiv[0];
        masiv[0] = masiv[r_index];
        masiv[r_index]= temp; 
    }
    for(int i = 0; i < n; i++){
        cout << masiv[i] << endl;
    }*/
    
    /*int n = 100;
    int find_chis[n];
    for (int i = 0; i < n ; i++)
    {
        find_chis[i] = rand() % 6   ;
        cout << find_chis[i]<< ' ';
    }
    int x;
    cin >> x;
    for(int i = 0; i < n; i++){
        if(find_chis[i]==x){
            cout << i << endl;
        }
    }*/
    /*int n = 20;

    int find_chis[n];
    for (int i = 0; i < n ; i++)
    {
        find_chis[i] = rand() % 6   ;
        cout << find_chis[i]<< ' ';
    }
    cout << endl;
    for(int i = 0; i < n-1; i++){
        if(find_chis[i] == find_chis[i+1]){
            cout << i << endl;
        }
    }*/

    /*int RR[10];
    for (int i = 0; i < 10; i++) {
        RR[i] = rand() % 6;;
    }
    for(int i = 0; i < 10; i++) {
        cout << RR[i] << " ";
    }
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (RR[i] == RR[j] && i != j) {
                cout << endl << i << " я русский " << j << endl;
            }
        }
    }
    return 0;*/
    
    
    /*int M = A[0];nMax = 0;
    for ( i = 1; i < N; i++)
    {
        if (A[i]>M)
        {
            M = A[i];
            nMax = 1;
        }
        
    }
    cout << M;*/
    
    /*int max , max_2,n;
    int m[n];
    for (int i = 0; i < n; i++)
    {
        if (m[i]> max)
        {
            max = m[i];
        }else{
            if (m[i] > max_2){
                max_2 = m[i];
            } 
            {
                
            }
            
        }
        
    }*/
    /*int n;
    cin>>n;
    int m[n];
    int max = m[0];
    int count = 0;
     for (int i = 0; i < n; i++) {
        m[i] = rand() % 6;
        cout << m[i]<<' ';
    }
    for (int i = 0; i < n; i++)
    {
        if (m[i] > max)
        {
            max = m[i];
            count = 0;
        }
        if (m[i] == max)
        {
            count ++;
        }
        
    }
    cout << "max chis" <<" "<< max<<" " << "scolko znach"<<" " << count;
    */ // max znach
    /*int n; 
    cin >> n;
    int m[n];
     for (int i = 0; i < n; i++) {
        m[i] = rand() % 6;
        cout << m[i] << " ";
     }
    for (int i = 0; i < n/2; i++)
    {
        int temp = m[i];
        m[i] = m[n-1-i];
        m[n-1-i]= temp;
    }
    for (int i = 0; i < n; i++)
    {
       cout <<m[i] << " ";
    }*/ // меняет местами все цифры в числе
    /*int n, c ;
    cin >> n;
    int m[n];
     for (int i = 0; i < n; i++) {
        m[i] = rand() % n;
        cout << m[i] << " ";
     }

    c = m[0];
    for (int i = 0; i < n-1; i++)
    {
        m[i] = m[i+1];
    }
    m[n-1] = c;

    cout<<endl;
    for ( int i = 0; i < n; i++){
        cout << m[i] << " ";
    }*/
    /*int n;
    cin >> n;
    int m[n];
    for (int i = 0; i < n; i++) {
        m[i] = rand() % n;
        cout << m[i] << " ";
     }
    for (int i = 0; i < n/4; i++)
    {
        int temp = m[i];
        m[i] = m[n/2 - 1- i];
        m[n/2 - i - 1] = temp;
    }*/
    
    /*int n;
    cin >> n;
    int RR[n];
    for (int i = 0; i < n; i++) {
        cin >> RR[i];
    }
    int target;
    cin >> target;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (RR[i] + RR[j] == target) {
                cout << i << " " << j;
            }
        }
    }
    return 0;*/
    /*int RR[30];
    for (int i = 0; i < 30; i++) {
        RR[i] = rand() % 21;
        cout << RR[i] << " ";
    }
    int n;
    cin >> n;
    int dop = 0;
    while (dop != n) {
        dop++;
        int first = RR[30 - 1];
        for (int i = 30 - 1; i >= 0; i--) {
            RR[i] = RR[i - 1];
        }
        RR[0] = first;
        cout << endl;
    }
    for(int i = 0; i < 30; i++) {
        cout << RR[i] << " ";
    }
    return 0;*/
    /*int massiv[11]={0, 1, 2, 3, 4, 5,6,7,8,9,10}; 
        for( int i = 0; i <= 10; i++){ 
            cout << massiv[i]; 
        } 
        cout << ' '; 
        for( int i = 10; i >=0; i--){ 
            cout << massiv[i]; 
        } 
        for( int i = 0; i <= 10; i+=2){ 
            cout <<endl << "even num : " << i; 
        } 
    for(int i = 1; i <= 10; i+=2){ 
            cout << endl <<"index odd num : "<< i; 
            }*/
    int n;
    cin >> n;
    int RR[n];
    for (int i = 0; i < n; i++) {
        cin >> RR[i];
    }
    int target;
    cin >> target;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (RR[i] + RR[j] == target) {
                cout << i << " " << j;
            }
        }
    }
    return 0;



}