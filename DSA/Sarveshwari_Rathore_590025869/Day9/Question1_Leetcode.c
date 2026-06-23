int lengthOfLastWord(char* s) {
    int right=strlen(s)-1;
    int count=0;
    while(s[right] == ' ' && right>=0){
        right--;
    }
    while(s[right] != ' ' && right>=0){
        count++;
        right--;
    }
    return count;
}