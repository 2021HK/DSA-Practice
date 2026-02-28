int Count(string S) {
    // complete the function here
    int count = 0 ; 
    
    for(int i = 0; i < S.size() ; i++){
        char ch = S[i];
        
        if((ch >= 'a' && ch <= 'z') ||   (ch >= 'A' && ch <= 'Z')) {
                count++;
            }
        
    }
    return count;
}
