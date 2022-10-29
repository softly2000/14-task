/*--------------------------------------------------*/

          /*1 - Вариант*/

/*bool one(int n)
{
    if(0 < n){
       cout << n * n;
       return true;
    }       
    else 
       return false;
}

int main()
{
    int n,on;
        cout << "n=";cin >> n;
        on = one(n);
        if(on)cout << endl << "расчет выполнен! ";
        else cout << "Ошибка расчет не выполнен! ";
          
}
//принцип работы:
// 1 сценарий //
 // n=2;
 // 4
// 2 сценарий //
 // n=0
 //Ошибка расчет не выполнен
 */


/*--------------------------------------------------*/

        /*2 - Вариант*/


/*
bool two(float a, float b)
{
    if(b != 0)
    {
        cout << (a+b)/b;
        return false;
    }
    else 
    {
        //Можно сделать вместо if(b = 0); вот так b = 0;
        if(b = 0);
        cout << "Ошибка при деление! ";
        return true;
    }
}

int main()
{
    float a, b, bt;
      cout << "a=";cin >> a;
      cout << "b=";cin >> b;
      bt = two(a,b);
      if(bt);
      //else cout << "Ошибка при деление! ";
}

//принцип работы:
// 1 сценарий //
 // a=45.45;
 // b=56.7
 // 1.80159
// 2 сценарий //
 // a=8.78
 // b=0
 //Ошибка при деление!
 */



/*--------------------------------------------------*/

           /*3 - Вариант*/

/*
bool tree(int t)
{
    //Поменяй если препод скажет что неправильно: if(t >= 0)
    if(t <= 0){
        cout << -1 * t;
        return true;
    }
    else {
         if(t > 0);
         return false;
    }
}

int main()
{
    int t,to;
    cout << "t="; cin >> t;
    to = tree(t);
    if(to);
    else cout << "Расчет не выполнен";
}
//принцип работы:

//t=-8
//ответ: 8
*/




/*--------------------------------------------------*/

           /*4 - Вариант*/

/*bool four(int b, int c)
{
       if(b < c)
         return false;
       else
         return true;
}

int main()
{
    int b,c,fo;
    cout << "b=";cin >> b;
    cout << "c=";cin >> c;
    fo = four(b,c);
    if(fo)cout << "b >- c";
    else cout << "b < c";
}*/

//принцип работы:
//он просто сравнивает b и c;




/*--------------------------------------------------*/

           /*5 - Вариант*/

/*bool five(char sym)
{
    if(sym == '#')
       return false;
    else 
       return true;
}

int main()
{
    char sym, fi;
    cout << "sym=";cin >> sym;
    fi = five(sym);
    if(fi)cout << "# not";
    else cout << "# yes";
    
}*/



/*--------------------------------------------------*/

           /*6 - Вариант*/

/*
bool six(int a, int b)
{
    if(a==0)
      return false;
    else
      cout << (a+b)*b;
      return true;
}

int main()
{
    int a, b, si;
    cout << "a=";cin >> a;
    cout << "b=";cin >> b;
    si = six(a,b);
    if(si);
    else cout << "error";
    
}

//принцип работы:
// 1 сценарий //
 // a=0
 // b=2
 // error
// 2 сценарий //
 // a=2
 // b=4
 // 24
*/


/*--------------------------------------------------*/

           /*7 - Вариант*/

/*bool seven(int s)
{
    //Поменяй если препод скажет что неправильно: if(s >= 0)
    //если поменяешь то вводи 8
    if(s <= 0){
      cout << -1*s;
      return true;
    } 
    else {
      if(s > 0);
      return false;
    }
}
int main()
{
    int s, sev;
    cout << "s=";cin >> s;
    sev = seven(s);
    if(sev);
    else cout << "Расчет не выполнен";
    
}
//принцип работы:
// 1 сценарий //
 // s=-8;
 // 8
// 2 сценарий //
//если ты поменял то:
 // s=8
 // -8
 */



/*--------------------------------------------------*/

           /*8 - Вариант*/

/*bool eight(char L)
{
    if(L == '&')
      return false;
    else 
      return true;
}

int main()
{
    char L,ei;
    cout << "L=";cin >> L;
    ei = eight(L);
    if(ei)cout << "& not";
    else cout << "& yes";
}*/





/*--------------------------------------------------*/

           /*9 - Вариант*/
          
/*bool nine(float a,float b) 
{ 
  if(b == 0)
    return false;
  else 
    cout << 3 * a / b;
    return true;
}

int main()
{
  float a,b, ni;
  bool cont = true;
  while(cont)
  {
         cout << "a="; cin >> a;
         cout << "b="; cin >> b;
         ni = nine(a,b);
         if(not ni)cout << "delete na 0";
         cout << endl;
         cout << "continue";
         cin >> cont;
  }
    
}*/



/*--------------------------------------------------*/

           /*10 - Вариант*/

/*
bool ten(int p)
{
    //Поменяй если препод скажет что неправильно: if(b > 0)
    if(p < 0){
      cout << p*p*p;
      return true;
    } 
    else 
      return false;
}

int main()
{
    int p,te;
    if(p != 0);
    cout << "p=";cin >> p;
    te = ten(p);
    if(te);
}

//принцип работы:
// 1 сценарий //
 // p=-9
 // -729
// 2 сценарий //
//если ты поменял то:
 // p=9
 // 729
 */



/*--------------------------------------------------*/

           /*11 - Вариант*/

/*bool eleven(char s, int n)
{
    if(s == '*'){
      cout << n * n;
      return true;
    }  
    else return false;  
}

int main()
{   
    char s;
    int n,el;
    if(n > 0);
    cout << "s=";cin >> s;
    cout << "n=";cin >> n;
    el = eleven(s,n);
    if(el);
    else cout << "Error";
    
}
//принцип работы:
// 1 сценарий //
 // s=*
 // n=2
 // 4
// 2 сценарий //
 // s=+
 // n=2
 // Error
 */


/*--------------------------------------------------*/

           /*12 - Вариант*/


/*bool twelve(char M)
{
    if(M == '?')
       return true;
    else 
       return false;
}

int main()
{
     char M,tw;
     cout << "M=";cin >> M;
     tw = twelve(M);
     if(tw)cout << "? yes";
     else cout << "? not";
     
}

//принцип работы:
// 1 сценарий //
 //M=?
 //? yes
// 2 сценарий //
 // M=$
 // ? not
 */