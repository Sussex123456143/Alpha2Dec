int chartoInt(char c){
    int x = c;
    if (x >= 65 && x <= 90){
        return x - 64;
    }
    else if(x >= 97 && x <= 122){
        return x - 96;
    }
    return -1;
}

int stringtoInt(std::string c){
    int x = 0;
    for(int i = 0; i < c.length(); i++){
        x += chartoInt(c[i]);
    }
    return x;
}

int* stringofInt(std::string c){
    int* v = new int[c.length()];
    for(int i = 0; i < c.length(); i++){
        v.push_back(chartoInt(c[i]));
    }
    return v;
}
