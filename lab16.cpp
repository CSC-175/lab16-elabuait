int gcf(int &n1, int &n2) {
int r;
    while ((n1%n2)>0) {
        r=n1%n2;
        n1=n2;
        n2=r;
    }
    return n2;
}