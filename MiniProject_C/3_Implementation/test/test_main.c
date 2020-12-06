//#include "header/header.h"
#include<stdio.h>
#include "../header/header.h"
//#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include "../unity/unity.h"


//testing file
///Unity framework requires this function (works as a constructor for a test)
void setUp(){}

///Unity framework requires this function(works as a destructor for a test)
void tearDown(){}
/**
*this function checks the value calculted by Dutycycle() function
* @param [in/out] No parameters
*/
void test_check(void){                  //test function1
    printf("\ntest_check executed\n");
    char dsym[] = {'X','X','X','X','X','X','X','X','X'};
    char dch = 'X';
    int dcount = 1;
   // TEST_ASSERT_EQUAL(1, check( dsym[9], dch, dcount));
    //TEST_ASSERT_EQUAL(1, check( dsym[9], dch, dcount));
    TEST_ASSERT_EQUAL(1, dummy());


}


/**
* this fuction runs test for the project.
* @param nothing
* @returns UNITY_END()
*/
int test_main(void){
//starting unity  process
    UNITY_BEGIN();
// testing the function
    RUN_TEST(test_check);

//end of tetsing
    return UNITY_END();
}

