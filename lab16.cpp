int gcf(int &n1, int &n2) {
    int remainder;
    while ((n1%n2) > 0) {
        remainder = n1%n2;
        n1 = n2;
        n2 = remainder;
    }
    return n2;
}