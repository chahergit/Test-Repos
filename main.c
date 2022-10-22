/**
  ******************************************************************************
  * @file    main.c
  * @author  Mouadh Dahech
  * @brief   How to develop structured code 
  * @version V1.0.0
  * @date    16-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Macros --------------------------------------------------------------------*/
#define SOM
#define MUL
#define INTEL
//#define OTHERS


/* Private function prototypes -----------------------------------------------*/
static int sum (int a , int b);
static int mul (int a , int b);
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
#ifndef SOM
int resultsum = sum(3,4);

#endif
#ifndef MUL

int resultmul = mul(3,4);
#endif
  while (1)
  {
  }
}
#ifndef SOM

   static int sum (int a , int b)
 {
   return(a+b);
 }
#endif
#ifndef MUL
  static int mul (int a , int b)
 {
   return(a*b);
 }
#endif


/**************************************END OF FILE**************************************/
