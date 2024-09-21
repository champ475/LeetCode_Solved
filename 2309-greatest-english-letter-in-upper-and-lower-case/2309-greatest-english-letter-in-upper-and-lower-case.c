char* greatestLetter(char* s) {
  char k='\0';
  char key='\0';
  int l=strlen(s);
  for(int i=0;i<l;i++){
    for(int j=0;j<l;j++){
        if(s[i]!=s[j] && (tolower(s[i]))==(tolower(s[j])))
            k= toupper(s[i]);
        if(k>key)
            key=k;
    }
  }
  if(key=='\0')
    return "";
  s[0]=key;
  s[1]='\0';
  return s;  
}