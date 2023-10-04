#include <stdio.h>


// #include <

int get_size(void);
void print_grid(int size);

int main(void) {
  
// Get size of grrid using the function 
  int n = get_size();


  
//  Print the grid using the funcion created
  print_grid(n);
  
}



















  // Get size of grid using a function
  int get_size(void)
{
  int n;
  do 
    {
      printf("Enter number: ");
      scanf("%d", &n);
    } while(n < 1);

    return n;
}


  // Creating a function for printing th grid
  void print_grid(int size)
{
    
     for (int i = 0; i < size; i++)
    {
      for(int j = 0; j < size; j++)
        {
          printf("#");
          
        }
      printf("\n");
    }
}



