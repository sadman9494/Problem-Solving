int count = 0;

int minPartitions(string n) {
    if (n.empty()) {
        return count;
    }

    long long num = 0;
    if (n.back() == '0')
        {
        num =pow(10, (n.length()-1)) ;
        }

    else{
       for (char c : n) {
        num = num * 10 + 1; // Append '1' to the end in each iteration
     }
    }
    

    long long currentNum = stoll(n, nullptr, 10)%num;
    
    if (currentNum % num == 0) {
        return count +(stoll(n) / num);
    }

    count = count +(stoll(n) / num) ;
    return minPartitions(to_string(currentNum));
}