#include <iostream>
#include <sstream>
#include <fstream>
#include <math.h>
#include <vector>
#include "classifier.h"

/**
 * Initializes GNB
 */
GNB::GNB() {
    
}

GNB::~GNB() {}

float GNB::GNB_product(float obs,float mu,float sig)
{
    float num = pow((obs-mu),2.0);
    float sig2 = pow(sig,2.0);
    float denum = 2*sig2;
    float norm = 1.0 / (sqrt(2.0*M_PI*sig2));
    return norm*exp(-num/denum);
}

void GNB::train(vector<vector<double>> data, vector<string> labels)
{
    
    /*
     Trains the classifier with N data points and labels.
     
     INPUTS
     data - array of N observations
     - Each observation is a tuple with 4 values: s, d,
     s_dot and d_dot.
     - Example : [
     [3.5, 0.1, 5.9, -0.02],
     [8.0, -0.3, 3.0, 2.2],
     ...
     ]
     
     labels - array of N labels
     - Each label is one of "left", "keep", or "right".
     */
}

string GNB::predict(vector<double> sample)
{
    /*
     Once trained, this method is called and expected to return
     a predicted behavior for the given observation.
     
     INPUTS
     
     observation - a 4 tuple with s, d, s_dot, d_dot.
     - Example: [3.5, 0.1, 8.5, -0.2]
     
     OUTPUT
     
     A label representing the best guess of the classifier. Can
     be one of "left", "keep" or "right".
     """
     # TODO - complete this
     */
    
    return this->possible_labels[1];
    
}
