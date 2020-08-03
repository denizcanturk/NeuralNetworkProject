#ifndef SIMPLE_NEURAL_NETWORK_H
#define SIMPLE_NEURAL_NETWORK_H

double single_in_single_out(double input, double weight);
double weighted_sum(double * input_vector, double * weigth_vector, int LEN);
double multiple_input_single_output_nn(double * input_vector, double * weigth_vector, int LEN);

void elementwise_multiply(double input,
                          double * weight_vector,
                          double * output_vector,
                          int LEN);

void single_input_multiple_output(double input_scalar,
                                    double * weight_vector,
                                    double * output_vector,
                                    int LEN);

void vector_matrix_multiply(double * input_vector,
                            int INPUT_LEN,
                            double * output_vector,
                            int OUTPUT_LEN,
                            double weights_vector[OUTPUT_LEN][INPUT_LEN]);

void multiple_input_multiple_output_nn(double * input_vector,
                                        int INPUT_LEN,
                                        double * output_vector,
                                        int OUTPUT_LEN,
                                        double weights_vector[OUTPUT_LEN][INPUT_LEN]);


#endif // SIMPLE_NEURAL_NETWORK_H
