// 1. Define a function to check whether a given number is a Prime number or not.
//  #include <iostream>
//  using namespace std;
//  void Prime_or_not(int n)
//  {
//      int flag = 0;
//      for (int i = 2; i <= n/2; i++)
//      {
//          if (n%i==0)
//          {
//              flag++;
//              break;
//          }     
//      }
//      if (flag == 1)
//      {
//          printf("Not prime.");
//      }
//      else
//      printf("Prime");
//  }
//  int main()
//  {
//      int num;
//      cout<<"Enter a number:: ";
//      cin>>num;
//      Prime_or_not(num);
//      return 0;
//  }

// 2. Define a function to find the highest value digit in a given number.
// #include <iostream>
// using namespace std;
// void Highest_val_dig(int a,int b)
// {
//     int ca = 0,cb = 0;
//     while (a != 0)
//     {
//         a = a/10;
//         ca++;
//         if (b != 0)
//         {
//             b = b/10;
//             cb++;
//         }
//     }
//     (ca>cb) ? cout<<"Highest value digit is -> "<<ca : cout<<"Highest value digit is -> "<<cb;
// }
// int main()
// {
//     Highest_val_dig(123,45);
//     return 0;
// }

// 3. Define a function to calculate x raised to the power y.
// #include <iostream>
// using namespace std;
// int pow(int x,int y)
// {
//     int ans = 1;
//     for (int i = 0; i < y; i++)
//     {
//         ans = ans * x;
//     }
//     return ans;
// }
// int main()
// {
//     cout<<pow(2,4);
//     return 0;
// }

// 4. Define a function to print Pascal Triangle up to N lines.
// #include <iostream>
// using namespace std;
// int fact(int n)
// {
//     int fact = 1;
//     if (n == 1 || n == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             fact = fact * i;
//         }
//         return fact;
//     }
// }
// int ncr(int n, int r)
// {
//     return fact(n) / (fact(n - r) * fact(r));
// }
// void pascal(int n)
// {
//     for (int i = 0; i <= n; i++)
//     {
//         for (int k = 0; k <= (n - i); k++)
//         {
//             cout <<" ";
//         }
//         for (int j = 0; j <= i; j++)
//         {
//             cout<<" "<<ncr(i,j);
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     pascal(5);
//     return 0;
// }

// 5. Define a function to check whether a given number is a term in a Fibonacci series or not.
// #include <iostream>
// using namespace std;
// int fibo_series_or_not(int n)
// {
//     int Ans = 0;
//     int n1 = 0,n2 = 1,n3;
//     if (n==1 || n==0)
//     {
//         Ans++;
//     }
//     else
//     {
//         for (int i = 2; i <= n; i++)
//         {
//             n3 = n1+n2;
//             n1 = n2;
//             n2 = n3;
//             if (n3==n)
//             {
//                 Ans++;
//                 break;
//             }
//         }
//     }
//     return Ans;
// }
// int main()
// {
//     int n;
//     cout<<"Enter term::"<<endl;
//     cin>>n;
//     int a = fibo_series_or_not(n);
//     if (a != 0)
//     {
//         cout<<"YES, "<<n<<" is a term in a Fibonacci series";
//     }
//     else
//     {
//         cout<<"NO, "<<n<<" is not a term in a Fibonacci series";
//     }
//     return 0;
// }

// 6. Define a function to swap data of two int variables using call by reference
// #include <iostream>
// using namespace std;
// void swap(int &a,int &b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
// int main()
// {
//     int x = 4,y = 8;
//     cout<<"Before swap"<<endl;
//     cout<<"x = "<<x<<" y = "<<y<<endl;
//     swap(x,y);
//     cout<<"After swap"<<endl;
//     cout<<"x = "<<x<<" y = "<<y<<endl;
//     return 0;
// }

// 7. Write a function using the default argument that is able to add 2 or 3 numbers.
// #include <iostream>
// using namespace std;
// int add(int a,int b,int c = 0)
// {
//     return a+b+c;
// }
// int main()
// {
//     int x = add(1,2); //Two argument
//     int y = add(1,2,3);  //Three argument
//     cout<<"1 + 2 = "<<x<<endl;
//     cout<<"1 + 2 + 3 = "<<y<<endl;
//     return 0;
// }

// 8. Define overloaded functions to calculate area of circle, area of rectangle and area of
// triangle
// #include <iostream>
// using namespace std;
// class calculate
// {
//   public:
//   float area(float r)
//   {
//     return (3.14*r*r);
//   }
//   int area(int l,int b)
//   {
//     return (l*b);
//   }
//   double area(double b,double h)
//   {
//     return (0.5*b*h);
//   }
// };
// int main()
// {
//     calculate a1;
//     cout<<"Area of circle :- "<<a1.area(2.5)<<endl;
//     cout<<"Area of rectangle :- "<<a1.area(2,4)<<endl;
//     cout<<"Area of triangle :- "<<a1.area(5.0,5.0)<<endl;
//     return 0;
// }

// 9. Write functions using function overloading to find a maximum of two numbers and both
// the numbers can be integer or real.
// #include <iostream>
// using namespace std;
// class A
// {
//     public:
//     void Max(int a,int b)
//     {
//         (a>b) ? cout<<a<<" is maximum"<<endl : cout<<b<<" is maximum"<<endl;
//     }
//     void Max(double a,float b)
//     {
//         (a>b) ? cout<<a<<" is maximum"<<endl : cout<<b<<" is maximum"<<endl;
//     }
// };
// int main()
// {
//     A obj;
//     obj.Max(4,5);
//     obj.Max(5.4,5.3);
//     return 0;
// }

// 10. Write functions using function overloading to add two numbers having different data
// types.
// #include <iostream>
// using namespace std;
// class A
// {
//     public:
//     int add(int a,int b)
//     {
//         return a+b;
//     }
//     double add(int a,double b)
//     {
//         return a+b;
//     }
//     double add(double a , double b)
//     {
//         return a+b;
//     }
//     double add(double a,int b)
//     {
//         return a+b;
//     }
// };
// int main()
// {
//     A obj;
//     cout<<"1 + 2 = "<<obj.add(1,2)<<endl;
//     cout<<"1 + 2.1 = "<<obj.add(1,2.1)<<endl;
//     cout<<"1.0 + 2.1 = "<<obj.add(1,2.1)<<endl;
//     cout<<"1.1 + 2 = "<<obj.add(1.1,2)<<endl;
//     return 0;
// }

