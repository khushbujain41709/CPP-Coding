/* If u want sqaure , use 
for(int i =n ; i<= n ; i++){
    for (int j =n ; j <=n ; j++){
    }
}

/* If u want ascending left sided triangle, use 
for(int i =1 ; i<= n ; i++){
    for (int j =1 ; j <=i ; j++){
    }
}

/* If u want descending left sided triangle, use 
for(int i =1 ; i<= n ; i++){
    for (int j =1 ; j <=n-i+1 ; j++){
    }
}

/* If u want ascending right sided triangle, use 
for(int i = 1 ; i<= n ; i++){
    for (int j = 1 ; j <=n ; j++){
        if (i+j >= n+1 )cout<<"*";
    }
} 
or 
/* If u want ascending right sided triangle, use 
for(int i = 1 ; i<= n ; i++){
    for (int j = 1 ; j <= n-i ; j++){
        for(int k = 1;k <= i ; k++){
            cout<<"*"
        }
    }
}
Imp patterns - 19 onwards
*/