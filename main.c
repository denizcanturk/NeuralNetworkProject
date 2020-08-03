#include "simple_neural_network.h"
#include <stdio.h>

#define NUM_OF_EGS 5
#define NUM_OF_INPUTS 3
#define NUM_OF_OUTPUTS 3

#define INPUT 0.9

#define TEMPRATURE_IDX 0
#define HUMIDITY_IDX 1
#define AIR_QUAL_IDX 2

double temp[]={12,23,50,-10,16};
double humidity[]= {60,67,50,65,63};
double air_quality[] = {60,47,167,187,94};

double weight[] = {-20,95,201};
double eg1[NUM_OF_INPUTS];


// Multi input multi output NN Weights         //temp       humd    airq
double weights[NUM_OF_INPUTS][NUM_OF_OUTPUTS] = {{0.2,      0.1,    0.5},  //Sad
/*MATRIX*/                                       {0.3,      0.5,    0.6},  //sick
                                                 {0.5,      0.8,    0.7}}; //active
//Multiple İnput Multiple Output -> INPUT Vector
double input_vector[]={25,36,45};
double output_vector[NUM_OF_OUTPUTS];


int main()
{

    printf("Hello AI World!\n\r\n");
    multiple_input_multiple_output_nn(input_vector,NUM_OF_INPUTS,output_vector, NUM_OF_OUTPUTS,weights);
    for (int i = 0; i < NUM_OF_OUTPUTS; i++){
        printf("Predicted Values Are : %f\r\n", output_vector[i]);
    }
    printf("\r\n");
    return 0;
}
