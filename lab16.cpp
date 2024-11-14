int gcf(int &n1, int &n2) {

    while (n2 != 0) {
        int q = n1/n2;
        int r = n1-q*n2;
        n1 = n2;
        n2 = r;
    }
    return n1;
}