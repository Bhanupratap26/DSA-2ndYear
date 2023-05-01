bool isPalindrome(int x) {
        vector<int>v;

        if(x<0)
        {
            return false;
        }

        else
        {
            while(x>0)
        {
            int k = x%10;
            v.push_back(k);
            x=x/10;
        }
        
        int i = 0;
        int j = v.size()-1;
        while(i<j)
        {
            if(v[i]!=v[j])
            {
               return false;

            }
            i++;
            j--;

        }

        return true;

        }

        
