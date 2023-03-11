int tempdivisor = abs(divisor);

    int s = 0;
    int e = dividend;
    int pans;
    int m = s + (e-s)/2;
    while(s<=e){
        if(m * tempdivisor <= tempdividend){
            pans = m;
            s = m + 1;
        }
        else{
            e = m - 1;
        }
        m = s + (e-s)/2;
    }

    if((dividend < 0 && divisor < 0) || (dividend > 0 && divisor > 0)){
        return pans;
    }else{
        return -pans;
    }