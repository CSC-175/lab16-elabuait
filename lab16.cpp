int gcf(int &n1, int &n2) {
        while (n2 > 0) {
            int r = n1 % n2;
            if (r == 0) {
                return n2;
            } else {
                n1 = n2;
                n2 = r;
            }
        }
        return n1;
    }
