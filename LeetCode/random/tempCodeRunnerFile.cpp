    int count = 0;
    int mid  = (s.length()-1)/2; 
    for (int i = mid ; i>=0;i--) {
        if (s[i] == s[i - 1]) {
            if (s[i-1] == '1') {
                s[i-1] = '0';
                count++;
            } else {
                s[i-1] = '1';
                count++;
            }
        }
    }
    for (int j = mid+1; j<s.length()-1;j++ )
    {
         if (s[j] == s[j + 1]) {
            if (s[j+1] == '1') {
                s[j+1] = '0';
                count++;
            } else {
                s[j+1] = '1';
                count++;
            }
        }
    }
    return count;