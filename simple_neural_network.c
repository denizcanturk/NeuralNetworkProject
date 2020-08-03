#include "simple_neural_network.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int LEN=3;

double single_in_single_out(double input, double weight){
    return (input * weight);
}

double weighted_sum(double * input_vector, double * weigth_vector, int LEN){
   double output=0;

   for (int i = 0; i < LEN; i++){
       output += input_vector[i] * weigth_vector[i];
   }
   return output;
}

double multiple_input_single_output_nn(double * input_vector, double * weigth_vector, int LEN){ //This is just a wrapper
  return weighted_sum(input_vector, weigth_vector, LEN);
}

void elementwise_multiply(double input_scalar,
                          double * weight_vector,
                          double * output_vector,
                          int LEN){
    for (int i = 0; i < LEN; i++){
        output_vector[i] = input_scalar * weight_vector[i];
    }
}

void single_input_multiple_output(double input_scalar,
                                    double * weight_vector,
                                    double * output_vector,
                                    int LEN){
    elementwise_multiply(input_scalar,weight_vector,output_vector,LEN);

}


void vector_matrix_multiply(double * input_vector,
                            int INPUT_LEN,
                            double * output_vector,
                            int OUTPUT_LEN,
                            double weights_vector[OUTPUT_LEN][INPUT_LEN]){

    for (int i = 0; i < OUTPUT_LEN; i++){
        for (int j = 0; j < INPUT_LEN; j++)
        output_vector[i] += weighted_sum(&input_vector[j],&weights_vector[i][j], LEN);
    }
}

void multiple_input_multiple_output_nn(double * input_vector,
                                       int INPUT_LEN,
                                       double * output_vector,
                                       int OUTPUT_LEN,
                                       double weights_vector[OUTPUT_LEN][INPUT_LEN]){

    vector_matrix_multiply(input_vector,INPUT_LEN,output_vector,OUTPUT_LEN,weights_vector);
}










