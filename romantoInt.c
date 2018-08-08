

int romanToInt(char* s) {
    
    int i;
    int sum = 0;
    for(i =0 ;i<strlen(s);i++)
   {
      
        
        if(*(s+i) == 'I')
            if(*(s+i+1) == 'X' || *(s+i+1) == 'V' )
                           *(s+i) = 'O';
        if(*(s+i) == 'X')
            if(*(s+i+1) == 'L' || *(s+i+1) == 'C' )
                           *(s+i) = 'P';  
        if(*(s+i) == 'C')
            if(*(s+i+1) == 'D' || *(s+i+1) == 'M' )
                           *(s+i) = 'Q';
        switch(*(s+i))
        {
            case 'I':
             sum = sum + 1;
             break;
            case 'V':
             sum = sum + 5;
             break;
           case 'X':
             sum = sum + 10;
             break;
           case 'L':
             sum = sum + 50;
             break;
           case 'C':
             sum = sum + 100;
             break;
           case 'D':
             sum = sum + 500;
             break;
           case 'M':
             sum = sum + 1000;
             break;
                
            case 'O':
             sum = sum -1;
             break;
           case 'P':
             sum = sum -10;
             break;
           case 'Q':
             sum = sum -100;
             break;
        }
    }
    
    //pritnf("%d\n",sum);
    
    
    return sum;
    
}