// ques - https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1

class Solution{
public:

	int search(string pat, string txt) {
	    // code here
	    
	    int k=pat.size();
	    map<char,int>m;
	    for(char x:pat){
	        m[x]++;
	    }
	    
	    int n=txt.size();
	    int i=0;
	    int j=0;
	    int c=0;
	    int count=m.size();
	    
	    while(j<n){
	        
	        if(m.find(txt[j])!=m.end()){
	            m[txt[j]]--;
	            if(m[txt[j]]==0)
	                count--;
	        }
	        
	        if(j-i+1<k){
	            j++;
	        }
	        
	        else if(j-i+1==k){
	            if(count==0){
	                c++;
	            }
	            
	            if(m.find(txt[i])!=m.end()){
	                m[txt[i]]++;
	                
	                if(m[txt[i]]==1)
	                    count++;
	            }
	            
	            i++;
	            j++;
	        }
	        
	    }
	   
	    return c;
	}
};
