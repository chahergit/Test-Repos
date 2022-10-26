/**
  **************************************************************************
  * @file    main.c
  * @author  CHAHER KHLIFI
  * @brief   Macros 
  * @version V1.0.0
  * @date    26-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/
/* Macros --------------------------------------------------------------------*/

//#define INTEL
 //variable declaration
 int a=10, b=20;

// MACROS functions(SOM, MIN, MUL, MAX)
#define SOM(a,b)  (a+b)
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MUL(a, b) (a*b)
#define MAX(a, b) ((a) < (b) ? (b) : (a))
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{ int ResultSum, ResultMin, ResultMul, ResultMax; 
  // Define MACRO SOM:
#ifdef SOM 
      ResultSum = SOM(a,b);
#endif
  // Define MACRO MIN:
#ifdef MIN
      ResultMin = MIN(a,b);
#endif
     // Define MACRO MUL:
#ifdef MUL
      ResultMul = MUL(a,b);
#endif
     // Define MACRO MAX:
#ifdef MAX
      ResultMax = MAX(a,b);
#endif     
  while(1)
  {
  }
}

/**************************************END OF FILE**************************************/
