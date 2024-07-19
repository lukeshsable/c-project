//#include<stdio.h>
//int main()
//{
//printf("\n name :: lukesh");
//printf("\n address :: a/p sultangade \t taluka :: khanapur \t district :: sangli \t pin code :: 415307 ");
//printf("\n ssc marks :: 65%% \t diploma marks :: 88%% ");
//printf("\n abc is my best friend \r nitin ");
//printf("\n what about you \?");
//return 0;
//
//}
//=========================================================================================================================================================

/// write a program to declare multiple variable of different data type input through key word and display all
//#include<stdio.h>
//int main ()
//{
// int a,b;
// char x,y;
// float p,q;
// double j,k;
// printf(" enter the values of A and B :: ");
// scanf("%d %d",&a,&b);
// printf("\n a=%d\t b=%d",a,b);
// printf("\n enter the values of a and b ::");
// scanf("%f %f",&p,&q);
// printf("\n a=%f\t b=%f",p,q);
// printf("\n enter the values of a and b ::");
// scanf(" %c %c",&x,&y);
// printf("\n a=%c\t b=%c",x,y);
// printf("\n enter the value of a and b ::");
// scanf("%f %f",&j,&k);
// printf("\n a=%f\t b=%f",j,k);
//
// return 0;
//}
//=========================================================================================================================================================

/// write a c program to enter the two values and interchange the value variable
//#include<stdio.h>
//int main ()
//{
// int a,b,temp;
// printf(" enter the values of A and B ");
// scanf ("%d %d",&a ,&b);
// printf(" \n the values of a and b before exchange is :: %d %d",a,b);
//
// temp =a;
// a=b;
// b=temp;
// printf("\n");
// printf("the values of a and b after exchange is %d %d",a ,b);
// return 0;
//}
//=========================================================================================================================================================

/// write a c program to enter the two values and swap without using third variable
// #include<stdio.h>
// int main()
//{
// int a,b;
// printf (" enter the values of a and b");
// scanf("%d %d",&a,&b);
// printf("\n a and b before swapping \t");
// printf(" a :: %d b :: %d ",a,b);
// a=a+b;
// b=a-b;
// a=a-b;
// printf("\n a and b after swapping \t");
// printf("a=%d b=%d",a,b);
//return 0;
// }
//=========================================================================================================================================================

/// write program to perform increament decreament operator

//  #include<stdio.h>
//  int main ()
//{
//  int a,b,c;
//  a=12; b=34;
//  printf("a=%d b=%d \t",a,b);
//  c=++a;
//  printf("c=%d",c);
//  int ans = ++b - c--; //
//  printf("\n ans = %d",ans);
//  return 0;
//  }

//=========================================================================================================================================================

/// write a c program to enter two numbers and perform the all the arithmatic operation
// #include<stdio.h>
//int main ()
//{
//  float a,b;
//  float ans;
// printf("enter the a and b::");
// scanf("%f%f",&a,&b);
// printf("\n a=%f b=%f",a,b);
// printf("\n sum=%f",a+b);
// printf("\n substraction=%f",a-b);
// printf("\n multiplication =%f",a*b);
// printf("\n division = %f",a/b);
// return 0;
//}
//=========================================================================================================================================================

/// write a c program to enter length breadth of rectangle and find its perimeter
//#include<stdio.h>
// int main ()
//{
// float l,b,p;
// printf("enter the length of the rectangle ::");
// scanf("%f",&l);
// printf("\n l=%f",l);
// printf("\n enter the breadth of the rectangle ::");
// scanf("%f",&b);
// printf("\n b=%f",b);
// p=2*(l+b); // formula
// printf("\n perimeter of the rectangle ::%f",p);
// return 0;
//}
//==========================================================================================================================================================

/// write a program to enter length and breadth of rectangle and find its area
// #include<stdio.h>
// int main ()
// {
//  float l,b,a;
//  printf("enter the length of the rectangle ::");
//  scanf("%f",&l);
//  printf("\n enter the breadth of the rectangle ::");
//  scanf("%f",&b);
//  a=l*b;
//  printf("the area of rectangle is :: %f",a);
//  return 0;
// }
//=========================================================================================================================================================

/// write a c program to enter radius of circle and find its diameter circumference and area
// #include<stdio.h>
// int main ()
// {   float r,d,c,a;
//     printf("enter the radius of the circle::");
//     scanf("%f",&r);
//     d=2*r;
//     printf(" \n the diameter of the circle = %f ",d);
//     printf("\n the circumference of the circle = %f",2*3.14*r);
//     printf("\n the area of the circle= %f",pow(3.14*r,2));
//     return 0;
// }
//=========================================================================================================================================================

/// write a c program to enter length in centimeter and convert it into meter and kilometer
//#include<stdio.h>
//int main ()
//{
//  float l;
//  printf("enter the length in cm::");
//  scanf("%f",&l);
//  printf(" \n the length in meter :: %f",l/100);
//  printf("\n the length in kilometer:: %f",l/100000);
//  return 0;
//}
//==========================================================================================================================================================

///// write a c program to enter temperature in celsius and convert it into fehrenhnite
//#include<stdio.h>
//int main ()
//{ float celsius;
//  printf("temperature in celsius::");
//  scanf("%f",&celsius);
//  printf("\n temperature in fehrenhnite :: %f ",(celsius*1.8)+32);
//  return 0;
//}

//==========================================================================================================================================================
/// write a c program to enter temperature in fehrenhnite and convert it into celsius
//#include<stdio.h>
//  int main ()
//{ float fehrenhnite;
//  printf("enter the temperature in fehrenhnite::");
//  scanf("%f",&fehrenhnite);
//  printf("\n the temperature in celsius %f::" ,(fehrenhnite-32)/1.8);
//  return 0;
//}
//==========================================================================================================================================================
/// write a c program to convert days into years weeks and days
//#include<stdio.h>
//int main ()
//{
//  int days,weeks,years;
//  printf("enter the days ::");
//  scanf("%d",&days);
//  printf("\n years=%d",days/365);
//  printf("\n weeks=%d",days/7);
//  printf("\n days:: %d",days/1);
//  return 0;
//}
//==========================================================================================================================================================
/// write a c program to find the power of any number
//#include<stdio.h>
//#include<math.h>
//int main ()
//{
//int a=1,b=2;
//printf("%d",pow(a,b));
//return 0;
//}
//==========================================================================================================================================================
/// write a c program to enter any number and calculate its square root
//#include<stdio.h>
//int main ()
//{
//     float n,i;
//     printf(" enter any number ::");
//     scanf("%f",&n);
//     for(i=0.001; i*i<n; i=i+0.001);
//
//      printf("square root of %f is %f" ,n,i);
//
//    return 0;
//
//}
//==========================================================================================================================================================
/// write a program to enter two angles of triangle and find its third angle
//#include<stdio.h>
//int main ()
//{  float a,b,c;
//   printf(" enter the first angle of triangle::");
//   scanf("%f",&a);
//   printf("\n the first angle is :: %f",a);
//   printf("\n enter the second angle of triangle::");
//   scanf("%f",&b);
//   printf("\n the second angle is :: %f",b);
//   c=180-(a+b);
//   printf("\n the third angle of triangle is :: %f",c);
//   return 0;
//}
//==========================================================================================================================================================
/// write a c program to enter base and height of triangle to find its area
// #include<stdio.h>
// int main ()
// {
//  float b,h,a;
//  printf("enter the base of the triangle ::");
//  scanf("%f",&b);
//  printf("\n the base of the triangle is :: %f",b);
//  printf("\n enter the height of the triangle ::");
//  scanf("%f",&h);
//  printf("\n the height of the triangle :: %f",h);
//  printf("\n the area of the triangle :: %f ",b*h/2);
//  return 0;
// }
//==========================================================================================================================================================
/// write a c program to find the area of equilateral triangle
//#include<stdio.h>
//#include<math.h>
//  int main ()
//{ float s,a;
// printf("enter the first side of the equilateral triangle::");
// scanf("%f",&s);
// printf("\n the side of equilateral triangle :: %f",s);
// a=sqrt(3)/4*s*s;
// printf("\n the area of equilateral triangle :: %f",a);
// return 0;
//}
//==========================================================================================================================================================
/// write a c program to enter the marks of the five subject and calculate total,average and its percentage
//#include<stdio.h>
//int main ()
//{
// float physics,chemistry,maths,bio,english,t,a,p;
// printf("********** enter marks of the subjects **********");
// printf("\n \t enter marks of physics ");
// scanf("%f",&physics);
// printf("\n marks of the physics :: %f",physics);
// printf("\n enter  marks of the chemistry ::");
// scanf("%f",&chemistry);
// printf("\n marks of the chemistry :: %f",chemistry);
// printf("\n enter marks of the bio ::");
// scanf("%f",&bio);
// printf("\n marks of the bio :: %f",bio);
// printf("\n marks of english::");
// scanf("%f",&english);
//
// t=physics+chemistry+maths+bio+english;
// printf("\n total marks:: %f",t);
// a= t/5;
// printf("\n average of marks is:: %f",a);
// p=t/500*100;
// printf("\n percentage :: %f",p);
// return 0;
//}
//============================================================================================================================================================
/// write a program to entered number is divisible by 3 & 5
//#include<stdio.h
//int main ()
//{ int n;
//printf(" enter the number ::");
//scanf("%d",&n);
//if (n%3==0){
//    if(n%5 ==0){
//        printf("\n divisible by both");
//    }else { printf("\n no is divisible by 3 only");
//    }
//}
//else {
//    if(n%5==0){
//        printf("\n no is divisible by 5 only");
//    }else {
//    printf("\n no is not divisible by both");
//    }
//}
//return 0;
//}
//==========================================================================================================================================================
/// write a program to enter any three digit number and display the addition of all three digit
//#include<stdio.h>
//
//int main ()
//{
//    int n,rem,sum=0;
//    printf("enter the any three digit number::");
//    scanf("%d",&n);
//    rem=n%10; // 8
//    sum=sum+rem;//8
//    n=n/10;     // 14
//
//    rem=n%10;     //4
//    sum=sum+rem;  //12
//    n=n/10;       //1
//
//    rem=n%10;     //1
//    sum=sum+rem;  //13
//    n=n/10;       //0
//    printf("\n the sum of three digit number == %d",sum);
//    return 0;
//}
//==========================================================================================================================================================
/// Enter the price of 4 items and find the total bill. also calculate the discount with 5% when amount is greater than 500 otherwise discount is 2%.
/// and finally display the payable amount.
//  #include<stdio.h>
//  int main ()
//  {
//      int p1,p2,p3,p4,t,discount;
//      printf("enter the price of the four items ::");
//      scanf("%d %d %d %d",&p1,&p2,&p3,&p4);
//      t=p1+p2+p3+p4;
//      discount= (t>500) ? (t*0.05) : (t*0.02);
//      printf("\n the payable amount is = %d",t-discount);
//      return 0;
//  }
//==========================================================================================================================================================
/// write a program to fins max from three numbers without using third variable
//   #include<stdio.h>
//    int main ()
//{
//    int n1,n2,n3,max,t;
//    printf("enter the three numbers ::");
//    scanf("%d %d %d",&n1,&n2,&n3);
//    max=(n1>n2)?(n1>n3 ? n1>n3) : (n2>n3?n2 n3);
//    printf("\n max is %d",max);
//    return 0;
//}
//==========================================================================================================================================================
/// enter the no through keyboard and display menu to perform following operation option 1 - to check the number is positive or negative
//option 2 - to check number is divisible by 5 or not.   menu driven

//#include<stdio.h>
//int main()
//{
//   int n1,opt;
//   printf("enter the number" );
//   scanf("%d",&n1);
//   printf("\n *********** enter your option ***********");
//   printf("\n enter the option 1 to check number is positive or negative or  option 2 to check number is divisible by 5 or not ");
//   scanf("%d",&opt);
//
//   if (opt==1)
//    {
//        if(n1>=0)
//        {
//          printf("\n number is positive");
//        }
//        else
//        {
//              printf("\n number is nigative");
//        }
//        else
//          {
//              if(opt==2)
//               {
//                  if(n1%5==0)
//                    {
//                       printf("\n number is divisible by 5");
//                  }
//                    else
//                    {
//                         printf("\n number is not divisible by 5");
//                    }
//              }
//                else ("\n invalid option !!!!!!!");
//         }
//
//    return 0;
//
//}
//===========================================================================================================================================================================//
/// Write a C program to enter P, T, R and calculate Simple Interest.
//#include<stdio.h>
//int main()
//{
//  float p,t,r,si;
//  printf(" enter the principal :: ");
//  scanf("%f",&p);
//  printf("\n enter interest rate ::");
//  scanf("%f",&r);
//  printf("\n enter the time in years ::");
//  scanf("%f",&t);
//  si=p*t*r/100;
//  printf("\n simple interest = %f",si);
//  return 0;
//}
//==========================================================================================================================================================================//
/// Write a C program to enter P, T, R and calculate Compound Interest.
//#include<stdio.h>
//#include<math.h>
//int main ()
//{
//     float p,t,r,a,n=10;
//     printf("enter the principal=");
//     scanf("%f",&p);
//     printf("\n enter the interest rate =");
//     scanf("%f",&r);
//     printf("\n enter time in years=");
//     scanf("%f",&t);
//
//     a=p*[pow(1+r/n ,nt)-1];
//     printf("\n compound interest=%f ",a);
//    return 0;
//}
//==============================================================================================================================================================================
/*********************************** CONDITIONAL OPERATOR EXERCISES ****************************************/

/// Write a C program to find maximum between two numbers using conditional operator

//#include<stdio.h>
//int main ()
//{
//  int n1,n2,max;
//  printf(" enter the two numbers ::");
//  scanf("%d %d",&n1,&n2);
//
//   max=(n1>n2)?(n1):(n2) ;
//   printf("\n the maximum number is %d",max);
//   return 0;
//}
//===============================================================================================================================================================================
/// Write a C program to find maximum between three numbers using conditional operator

//#include<stdio.h>
//int main ()
//{
//    int a,b,c,max;
//    printf("enter the two numbers::");
//    scanf("%d %d %d",&a,&b,&c);
//    max=(a>b) ? (a>c ? a:c ):(b>c) ? (b) :(c);
//    printf("\n max is %d",max);
//
//return 0;
//}
//===============================================================================================================================================================================
/// Write a C program to check whether a number is even or odd using conditional operator

//#include<stdio.h>
//int main ()
//{
//
//    int n;
//    printf(" enter any number :");
//    scanf("%d",&n);
//    (n%2==0)?(printf("\n number is even")) : (printf("\n number is odd")) ;
//    return 0;
//
//}
//===============================================================================================================================================================================
/// Write a C program to check whether year is leap year or not using conditional operator.
//#include<stdio.h>
//int main ()
//{
//    int y;
//    printf("enter the year :: ");
//    scanf("%d",&y);
//    (y%4==0)? (printf("\n entered year is leap year")) :(printf(" entered year is not leap year sorry "));
//    return 0;
//}
//===============================================================================================================================================================================
/// Write a C program to check whether character is an alphabet or not using conditional operator

//#include<stdio.h>
//int main ()
///{
//    char ch;
//    printf(" enter any character::");
//    scanf("%c",&ch);
//    (ch>='A'&& ch<='Z'|| ch>='a' && ch<='z') ? (printf("\n entered character is alphabet")) : (printf("\n entered character is not alphabet"));
//    return 0;
//
//}
//===============================================================================================================================================================================
/************************************************ IF ELSE EXERCISES **********************************************/

/// Write a C program to find maximum between two numbers.
//#include<stdio.h>
//int main ()
//{
//    int a,b;
//    printf(" enter any two numbers::");
//    scanf("%d %d",&a,&b);
//    if(a>b){
//        printf("\n a is max %d",a);
//    }else{
//         printf("\n b is max%d",b);
//         }
//return 0;
//}
//===============================================================================================================================================================================
/// Write a C program to find maximum between three number

//#include<stdio.h>
//int main ()
//{
//   int a,b,c;
//   printf(" enter any three numbers ::");
//   scanf("%d %d %d",&a,&b,&c);
//
//   if(a>b)
//    {
//      if(a>c)
//        printf("\n a is max %d",a);
//
//      else printf("\n c is max %d",c);
//    } else{
//        if(b>c)
//      printf("\ b is max %d",b);
//      else printf("\n c is max %d",c);
//    }
//    return 0;
//}
//===============================================================================================================================================================================
/// Write a C program to check whether a number is negative, positive or zero.

//#include<stdio.h>
//int main ()
//{
//    int n;
//    printf(" enter any number ::");
//    scanf("%d",&n);
//
//    if(n==0)
//    {
//         printf("\n number is zero");
//    }else
//    {
//        if(n>0)
//            printf("\n number is positive");
//        else printf("\n number is negative");
//    }
//}
//===============================================================================================================================================================================
/// write a program to enter amount and purchase gold platinum and silver with the per gram rate of 8000,6000,and 700 and display cash in hand
//#include<stdio.h>
//int main ()
//{
//   int amt,g,p,s;
//   printf("enter the amount ::");
//   scanf("%d",&amt);
//
//   p=amt/8000;       //gram
//   amt=amt%8000; //
//
//   g=amt/6000;   // gram
//   amt=amt%6000;
//
//   s=amt/700;    // gram
//   amt=amt%700;
//
//   printf("\n platinum in gram :%d \t gold in gram  :%d \t silver in :%d \t cash in hand :%d  ",g,p,s,amt) ;
//    return 0;
//}
//===============================================================================================================================================================================
/// write a program to display the sum of numbers from 1 to 10 using for loop
//#include<stdio.h>
//int main ()
//{
//    int i,sum=0;
//
//    for(i=1;i<=10;i+=1)
//    {
//          sum=sum+i;
//    }
//    printf("\n th sum is %d",sum);
//
//return 0;
//}
//===============================================================================================================================================================================
/// write a program to print table of any number using for loop

//#include<stdio.h>
//int main ()
//{
//  int n,table;
//  printf("enter any number::");
//  scanf("%d",&n);
//
//  for(int i=1;i<=10;i+=1)
//  {
//      printf("\n %d",n*i);
//  }
//}
//===============================================================================================================================================================================
/// write a program to enter any number and display addition of all digit
//#include<stdio.h>
//int main ()
//{
//    long int n,rem,sum=0;                 /// here signed int is used
//    printf("enter an number \t");
//    scanf("%ld",&n);
//
//    for( ;n!=0; )
//    {
//      rem=n%10;
//      sum=sum+rem;
//      n=n/10;
//    }
//    printf("\n the sum of number is %d",sum);
//    return 0;
//}
//==============================================================================================================================================================
/// WAP to display all even nos from 1 to 100
//#include<stdio.h>
//int main ()
//{
//   for(int i=1;i<=100;i+=1)
//   {
//       if(i%2==0)
//
//        printf("\n even numbers :: %d",i);
//   }
//    printf("\n ");
//
//   for(int i=1;i<=100;i+=1)
//   {
//       if(i%2!=0)
//
//        printf("\n odd numbers ::%d ",i);
//
//   }
//   return 0;
//}
//==============================================================================================================================================================

/// another way to display odd and even numbers ***without using if condition***
//#include<stdio.h>
//int main ()
//{
//  for(int i=0;i<=100;i+=2)
//
//    printf("\n even numbers =%d",i);
//    printf("\n \n ");
//
//    for(int i=1;i<=100;i+=2)
//    printf("\n odd numbers =%d",i);
//
//    return 0;
//}
//==============================================================================================================================================================
/// WAP to display addition of 5 nos entered  through keyboard
//#include<stdio.h>
//int main ()
//{
//    int i,n,sum=0;
//    printf("enter any five numbers::");
//    for(i=1;i<=5;i+=1)
//    {
//      scanf("%d",&n);
//      sum= sum+n;
//    }
//    printf(" \n sum is %d",sum);
//    return 0;
//}
//==============================================================================================================================================================
/// Write a C program to check whether a number is divisible by 5 and 11 or not.
//#include<stdio.h>
//int main ()
//{
//    int n;
//    printf(" enter any number::");
//    scanf("%d",&n);
//
//    if(n%5==0 && n%11==0)
//
//            printf("\n number is divisible by 5 and 11");
//    else
//            printf("\n number is not divisible by 5 and 11");
//    return 0;
//
//}
//==============================================================================================================================================================
/// Write a C program to check whether a number is even or not
//#include<stdio.h>
//int main ()
//{
//   int n;
//   printf(" enter any number::");
//   if(n%2==0)
//
//          printf("\n number is even");
//   else
//          printf("\n number is not even");
//   return 0;
//}
//==============================================================================================================================================================
///  Write a C program to check whether a year is leap year or not.
//#include<stdio.h>
//int main ()
//{
//    int y;
//    printf(" enter any year::");
//    scanf("%d",&y);
//    if(y%4==0)
//    {
//        printf("\n %d is leap year",y);
//    }
//     else
//    printf("\n %d is not leap year",y);
//   return 0;
//}
//==============================================================================================================================================================
///  Write a C program to check whether a character is alphabet or not.
//#include<stdio.h>
//int main ()
//{
//   char ch;
//   printf("enter the character::");
//   scanf("%c",&ch);
//
//   if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
//    printf("\ character is alphabet");
//    else
//        printf("\n character is not alphabet");
//    return 0;
//
//}
//==============================================================================================================================================================
///  Write a C program to input any alphabet and check whether it is vowel or consonant.
//#include<stdio.h>
//int main ()
//{
//  char ch;
//  printf("enter any character to check its vowel or consonant ::");
//  scanf("%c",&ch);
//  if(ch=='a'||ch=='i'||ch=='o'||ch=='u'||ch=='e')
//        printf("\n character is vowel");
//  else
//    printf("\n character is not alphabet");
//  return 0;
//}
//==============================================================================================================================================================
/// Write a C program to input any character and check whether it is alphabet, digit or special character.

//#include<stdio.h>
//int main ()
//{
//    char ch;
//    printf("enter any character to check whether it is alphabet ,digit or special character");
//    scanf("%c",&ch);
//    if(ch>='A' && ch<='Z'|| ch>='a' && ch<='z')
//    {
//        printf("\n entered character is alphabet");
//    }  else{
//
//     if(ch>='0' && ch<= '9')
//        printf("\n entered character is digit");
//     else
//
//        printf("\n special character");
//    }
//}
//==============================================================================================================================================================
/// Write a C program to check whether a character is uppercase or lowercase alphabet.
//#include<stdio.h>
//int main ()
//{
//    char ch;
//    printf("enter any character to check whether is UP case or LW case ::");
//    scanf("\t %c",&ch);
//    if(ch>='A' && ch<='Z')
//    printf("\n entered character is upper case");
//    else
//    if(ch>='a' && ch<='z')
//    printf("\n entered character is lower case");
//      else
//        printf("\n invalid character !!!!!!!");
//      return 0;
//}
//==============================================================================================================================================================
/// Write a C program to input week number and print week day.
//#include<stdio.h>
//int main ()
//{
//    int weeks,days;
//    printf("\n enter the number of weeks::");
//    scanf("%d",&weeks);
//    days=weeks*7;
//    printf("days ::%d",days);
//    return 0;
//}
//==============================================================================================================================================================
/// Write a C program to input month number and print number of days in that month.
//#include<stdio.h>
//int main()
//{
//    int months,days;
//    printf("enter the months ::");
//    scanf("%d",&months);
//
//    days=months*30;
//    printf("\n days are %d",days);
//    return 0;
//}
//==============================================================================================================================================================
/// WAP to enter any number and display its table
//#include<stdio.h>
//int main()
//{
//    int no,i,ans;
//
//    printf("\n ENter any no ");
//    scanf("%d",&no);
//
//    ans=no;
//    printf("\n  Multiplication of %d",ans);
//    for(i=1;i<=10;i++,ans+=no)
//    {
//        printf("\n %d*%d = %d",no,i,ans);
//    }
//    return 0;
//}
//==============================================================================================================================================================
/// WAP to enter any number and find its even max and odd max digit
//#include<stdio.h>
//
//int main()
//{
//    int no,rem,emax=0,omax=0,max;
//
//    printf("\n Enter any no :");
//    scanf("%d",&no);
//
//    for(max=0;no!=0;no=no/10 )
//    {
//        rem=no%10;
//        if(rem>max)
//        {
//            max=rem;
//            if(max%2==0)
//                emax=max;
//            else
//                omax=max;
//        }
//    }
//    printf("\n Even  Max digit is %d",emax);
//    printf("\n Odd  Max digit is %d",omax);
//    return 0;
//}
//==============================================================================================================================================================
/// WAP to enter any number and display in reverse
//#include<stdio.h>
//int main ()
//{
//   int n,rev,rem;
//   printf(" enter any number");
//   scanf("%d",&n);
//    for(rev=0;n!=0;n=n/10){
//
//        rev=(rev*10)+(n%10);
//    }
//    printf("\n reverse number is %d",rev);
//    return 0;
//}
//==============================================================================================================================================================
/// WAP to enter any number any display its digit count
//#include<stdio.h>
//int main ()
//{
//   int n,count=0;
//   printf("enter any number");
//   scanf("%d",&n);
//
//   for(; n!=0; n=n/10)
//        count++;
//   printf("\n count of digit is %d",count);
//   return 0;
//}
/// another way
//   #include<stdio.h>
//   int main  ()
//   {
//       int n,count=0;
//       printf(" enter any number ");
//       scanf("%d",&n);
//       for(; n!=0; )
//        {
//        count++;
//        n=n/10;
//        }
//       printf("\n count of digit is %d",count);
//       return 0;
//   }
//==============================================================================================================================================================
/// WAP to display even count and odd count from given range 1 to 100
//  #include<stdio.h>
//  int main ()
//  {
//    int ecount=0,ocount=0;
//    for(int i=1;i<=100;i++)
//    {
//        if(i%2==0)
//        ecount++;
//        else
//        ocount++;
//    }
//    printf("\n even count is %d",ecount);
//    printf("\n odd count is %d",ocount);
//    return 0;
//  }
//==============================================================================================================================================================
///  WAP to enter any number and find its even min and odd min digit
//#include<stdio.h>
//int main ()
//{
//    int n,min,emin=0,omin=0,rem;
//    printf("enter any number ::");
//    scanf("%d",&n);
//    min=n%10;
//    n=n/10;
//    for( ;n!=0;n=n/10 )
//    {
//      rem=n%10;
//    if(rem<min)
//    {
//     min=rem;
//     if(min%2==0)
//        emin=min;
//     else
//        omin=min;
//    }
//    }
//    printf("\n even min is %d",emin);
//    printf("\n odd min is %d",omin);
//
//    return 0;
//}
//==============================================================================================================================================================
/// Write a C program to count total number of notes in given amount
//#include<stdio.h>
//int main ()
//{
//    int n,amt,notes,rupese;
//    printf("enter any amount::");
//    scanf("%d",&amt);
//    printf("\n enter the which notes you want::");
//    scanf("%d",&n);
//
//    notes= amt/n;
//
//    printf("\n notes are %d",notes);
//    rupese=amt%n;
//    printf("\n rupese are %d",rupese);
//    return 0;
//
//}
//==============================================================================================================================================================
///  Write a C program to input angles of a triangle and check whether triangle is valid or not
//#include<stdio.h>
//int main ()
//{
//    int a,b,c,ans;
//    printf("enter the angles of triangles ::");
//    scanf("%d %d %d",&a,&b,&c);
//    if(a+b+c==180)
//        printf("\n triangle is valid");
//    else
//        printf("\n triangle is not valid ");
//    return 0;
//}
//==============================================================================================================================================================
/// Write a C program to input all sides of a triangle and check whether triangle is valid or not
//#include<stdio.h>
//int main ()
//{
//    int a,b,c;
//    printf(" enter the all sides of triangle ");
//    scanf("%d %d %d",&a,&b,&c);
//    if(a+b>c && b+c>a && a+c>b)
//        printf("\n triangle is valid");
//    else
//        printf("\n triangle is not valid");
//    return 0;
//}
//==============================================================================================================================================================
///  Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle
//#include<stdio.h>
//int main ()
//{
//  int a,b,c;
//  printf(" enter the area and side of equilateral triangle ");
//  scanf("%d %d %d",&a,&b,&c);
//  if(a==b && b==c && a==c)
//  {
//      printf("\n this is equilateral triangle");
//
//  }else
//  {
//     if(a==b || a==c ||b==c)
//     {
//         printf("\n this is isosceles triangle ");
//
//     }else
//     printf("\n this is scalene triangle");
//  }
//   return 0;
//}
//==============================================================================================================================================================
/// write a c program to find all roots of quadratic equation
//#include<stdio.h>
//int main ()
//{
//
//}
//==============================================================================================================================================================
/// Write a C program to calculate profit or loss
//#include<stdio.h>
//int main ()
//{
//    int sp,cp,p,l;
//    printf(" enter the selling price and cost price ::");
//    scanf("%d %d",&sp,&cp);
//    if(sp>cp)
//        printf("\n profit :: %d",sp-cp);
//     else
//            printf("\n loss :: %d",cp-sp);
//return 0;
//}
//==============================================================================================================================================================
/// write a c program to input marks of five subjects p,c,m,b,CMP,PER;
//#include<stdio.h>
//int main ()
//{
//   int p,c,m,b,cmp,per;
//   printf(" ENTER THE MARKS OF STUDENT \t");
//   scanf("%d %d %d %d %d",&p,&c,&m,&b,&cmp);
//
//    per= (p+c+m+b+cmp)/5;
//    printf("\n percentage :: %d",per);
//
//    if(per>90 || per==90)
//
//        printf("\n Grade A");
//    else if (per>=80 && per<90)
//        printf("\n Grade B");
//
//    else if (per>=70 && per<80)
//
//        printf("\n Grade C");
//
//    else if (per>=60 && per<70)
//
//        printf("\n Grade D");
//
//    else if(per>=40 && per<60)
//
//        printf("\n Grade E");
//
//    else if (per<40)
//
//        printf("\n Grade F");
//
//
//    return 0;
//
//}
//==============================================================================================================================================================
/// Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
/// Basic Salary <= 10000 : HRA =20%,DA=80%
/// Basic Salary <= 20000 : HRA =25%,DA=90%
/// Basic Salary > 20000 : HRA =30%,DA=95%

//#include<stdio.h>
//int main ()
//{
//    float bs,gs;
//    printf("ENTER THE BASE SALARY ::");
//    scanf("%f",&bs);
//
//    if(bs<=10000)
// {
//    gs=(bs*0.2)+(bs*0.8);
//    printf("\n Gross salary of employee is %f",gs+bs);
//
// }
//    if(bs<=20000 && bs>10000)
// {
//    gs=(bs*0.25)+(bs*0.9);
//    printf("\n Gross Salary Of Employee is %f",gs+bs);
// }
//    if(bs>20000)
// {
//      gs=(bs*0.30)+(bs*0.95);
//      printf("\n Gross Salary Of Employee is %f",gs+bs);
// }
//
//return 0;
//
//}
//==============================================================================================================================================================
/// Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
///For first 50 units Rs. 0.50/unit
///For next 100 units Rs. 0.75/unit
///For next 100 units Rs. 1.20/unit
///For unit above 250 Rs. 1.50/unit
///Anadditional surcharge of 20% is added to the bill

//#include<stdio.h>
//int main ()
//{
//    float unit,charges;
//    printf("ENTER YOUR ELECTRICITY CONSUMED UNITS::");
//    scanf("%f",&unit);
//
//    if(unit<=50)
// {
//    charges=0.50*unit;
//    printf("\n TOTAL ELECTRICITY BILL RS::%f",charges);
// }
//    if(unit<=150 && unit>50)
//
// {
//    charges=0.75*unit;
//    printf("\n TOTAL LECTRICITY BILL RS::%f",charges);
// }
//    if(unit<=250 && unit>150)
// {
//    charges=1.20*unit;
//    printf("\n TOTAL ELECTRICITY BILL RS::%f",charges);
// }
//    if(unit>250)
// {
//    charges=1.50*unit;
//    printf("\n ELECTRICITY BILL RS::%f",charges);
// }
// return 0;
//}
//==============================================================================================================================================================
/*********************************************** FOR LOOP EXERCISES **********************************************************************/

///  Write a C program to print all natural numbers from 1 to n
//#include<stdio.h>
//int main ()
//{
//  int n;
//  printf("ENTER THE NUMBER \t");
//  scanf("%d",&n);
//  printf("\n NATURAL NUMBERS FROM 1-%d",n);
//      for(int i=1;i<=n;i++)
//  {
//      printf("\n %d",i);
//  }
//return 0;
//
//
//}
//==============================================================================================================================================================
/// Write a C program to print all natural numbers in reverse (from n to 1)
//#include<stdio.h>
//int main ()
//{
//    int n;
//    printf("ENTER THE NUMBER \t");
//    scanf("%d",&n);
//    printf("NATURAL NUMBERS FROM %d-1",n);
//    for(int i=n; i>=1; i--)
//    {
//        printf("\n %d",i);
//    }
//
//    return 0;
//
//
//}
//==============================================================================================================================================================
/// Write a C program to print all alphabets from a to z
//#include<stdio.h>
//int main ()
//{
//
//        for(int i='a';i<='z';i++)
//    {
//        printf("%c \t ",i);
//    }
//
//    return 0;
//
//}
//==============================================================================================================================================================
/// Write a C program to print all even numbers between 1 to 100
//#include<stdio.h>
//int main ()
//{
//    printf("ALL EVEN NUMBERS BETWEEN 1-100");
//    for(int i=1;i<=100;i++)
//{
//    if(i%2==0)
//    printf("\n  %d",i);
//}
//    return 0;
//
//}
//==============================================================================================================================================================
/// Write a C program to print all odd number between 1 to 100
//#include<stdio.h>
//int main ()
//{
//      printf("ALL THE EVEN NUMBERS FROM 1-100");
//      for(int i=1;i<=100;i++)
// {
//      if(i%2!=0)
//        printf("\n  %d",i);
// }
//
//    return 0;
//}
//==============================================================================================================================================================
/// Write a C program to find sum of all natural numbers between 1 to n
//#include<stdio.h>
//int main ()
//{
//   int n,sum=0;
//   printf("ENTER THE NUMBER:: \t");
//   scanf("%d",&n);
//   for(int i=1;i<=n;i++)
//   {
//     sum=sum+i;
//   }
//    printf("\n THE OF ALL NATURAL NUMBERS FROM 1-N %d \t",sum);
//
// return 0;
//}
//==============================================================================================================================================================
/// Write a C program to find sum of all even numbers between 1 to n.
//#include<stdio.h>
//int main ()
//{
//    int n,sum;
//    printf("ENTER THE NUMBER:: \t");
//    scanf("%d",&n);
//    for(int i=0;i<=n;i+=2)
//    {
//        sum=sum+i;
//    }
//
//    printf("\n SUM OF ALL EVEN NUMBERS FROM 1-N %d",sum);
//
//   return 0;
//}
//==============================================================================================================================================================

///WAP to generate max from digits of entered number

//#include <stdio.h>
//int main()
//{
//	int no,nn=0,rem,tmp;
//	printf("\n Enter the No: ");
//	scanf("%d",&no);
//	tmp=no;
//
//	for(int i=9;i>=0;i--)
//	{
//		no=tmp;
//		for(;no!=0;)
//		{
//			rem=no%10;
//			if(rem==i)
//			{
//				nn=(nn*10)+rem;
//			}
//			no=no/10;
//		}
//	}
//	printf("\n Max Number: %d",nn);
//	return 0;
//}

//==============================================================================================================================================================

//#include<stdio.h>
//   int main ()
//{
//    int n,emax=0,omax=0,temp,rem;
//
//    printf("enter the number");
//    scanf("%d",&n);
//    temp=n;
//    for(int i=9; i>=0;i--)
//    {
//        n=temp;
//        for( ; n!=0; )
//
//      {
//          rem=n%10;
//          if(rem==i)
//        {   if(rem%2==0)
//
//            emax=(emax*10)+rem;
//            else
//            omax=(omax*10)+rem;
//        }
//         n=n/10;
//      }
//
//
//    }
//    printf("\n maximum even digits from number %d",emax);
//    printf("\n maximum odd digits from number %d",omax);
//
//    return 0;
//}
//==============================================================================================================================================================
///WAP to Find Missing digits in a number entered through keyboard.    e.g.  no: 15967	=  Missing digits: 0, 2, 3, 4, 8
#include<stdio.h>
int main ()
{
    int n,rem;
    printf(" enter the number \t");
    scanf("%d",&n);

    for(int i=1;i<=9;i++)
 {
     for(; n!=0; )

    {
         rem=n%10;

         if(rem!=i)

      {
      printf("\n %d",i);

      }
           n=n/10;
    }
 }


return 0;
}






























