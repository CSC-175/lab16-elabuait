int gcf(int &n1, int &n2) {
    while ((n1%n2) > 0) {
        int remainder = n1%n2;
        n1 = n2;
        n2 = remainder;
    }
}