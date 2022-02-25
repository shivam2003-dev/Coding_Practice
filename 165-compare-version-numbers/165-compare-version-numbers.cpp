class Solution {
public:
    int compareVersion(string v1, string v2) {
	// iterators for v1 and v2 respectively 
        int i = 0 ; 
        int j = 0 ; 
        while(i<v1.length() || j<v2.length()){
            // convert the string into int and store in x and y respectivley 
			// advantage : problem of trailing 0's eliminated 
			int x = 0 ;
            int y = 0 ; 
			
			// index out of bound check. If not then convert that part into int 
            while(i < v1.length() && v1[i] != '.'){
                x = x*10 + v1[i]-'0' ;  i++ ; 
            }
			
			// same as above 
            while(j < v2.length() &&  v2[j] != '.'){
                y = y*10 + v2[j]-'0' ; j++ ; 
            }
			
			// currently i and j pointing at '.' increment it for pointing to next part  
            i++ ; j++ ; 
		 
			
            if(x < y) return -1 ; 
            else if(x>y) return 1 ; 
        }
        return 0 ; 
    }
};