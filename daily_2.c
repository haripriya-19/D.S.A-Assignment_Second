#include<stdio.h>
#include<time.h>

int base(long long int);//function declaration

int base(long long int n)//function for finding the base
{
  int max_base = 0; //it will store the greatest of all digit
  int r; //remainder is stored to check greatest number
  while (n>0)//loop will work to check which no. is greatest in all
  {
    r = n % 10; //here the remainder is stored to compare greatest of all digits
   
    if (max_base < r)//condition to check the greatest one
    {
      max_base = r;//max no. will store greatest digit of the generated no.
    }
     n = n / 10;  //integer is stored so as to change it after every time 
  }

  return max_base+1;//return one more than the greatest no. because base is 1 more than greatest digit used in no.
}

int main()
{
  long long int arr[50]; //it will store the random no. which is of 10 digits so long long int is used because int cannot store than a specific value
  int large; // variable to store the result of function
  srand(time(NULL));//time function is used because time is continually changing and generate ramdom no.s
  for (size_t i = 0; i < 50; i++)//loop for printing and storing random no.s
  {
    arr[i]= rand() % 100000000 + 5000000000; //scaling factor and shifting factor to have the desired no. of 10 difits with last place more than 5
    printf("%lld", arr[i]);// random nomber is printed here
    
  large = base(arr[i]);//function called to check the base

  printf("\n The Highest Base of %lld is %d \n", arr[i], large);//final result
  }
  
}
