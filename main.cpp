double my_pow(double num, unsigned int deg) {
    double result = 1;
    for(long i = 0; i < deg; i++) {
        result *= num;
    }
    return result;
}
