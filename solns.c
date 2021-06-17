/* Enter your solutions in this file */
#include <stdio.h>
	#include <assert.h>
	

	 int max(int arr[], int size){
	

	        int maximum = arr[0];
	        for(int i = 1; i < size; i++)
	        {
	            if(maximum < arr[i])
	                maximum = arr[i];
	        }
	

	        return maximum;
	    }
	

	

	int min(int arr[], int size){
	

	    int  mini = arr[0];
	

	    for(int i = 1; i < size; i++)
	    {
	        if(mini > arr[i])
	            mini = arr[i];
	    }
	    
	    return mini;
	}
	

	float average(int arr[], int size)
	{
	   
	    int sum = 0;
	

	    for(int i = 0; i < size; i++)
	    {
	        sum += arr[i];
	    }
	

	    return (float)(sum)/size;
	}
	

	

	

	int mode(int arr[], int size)
	{
	    int max = arr[0], val;
	

	  for(int i = 0; i < size; i++)
	  {
	      if(max < arr[i])
	        max = arr[i];
	  }
	

	

	  int s = max + 1;
	  int count[s];
	  
	  for(int i = 0; i < s; i++)
	  {
	      count[i] = 0;
	  }
	

	  for(int i = 0; i < size; i++)
	    count[arr[i]]++;
	

	   max = count[0];
	

	    for(int i = 1; i < s; i++)
	    {
	        if(max < count[i])
	            {
	                max = count[i];
	                val = i;
	            }
	    }
	  
	    return val;
	

	}
	

	

	

	int factors(int num, int a[])
	{
	  int c = 0;
	  int primes[num] ;
	 
	  for(int i = 0; i < num; i++)
	  {
	      primes[i] = 0;
	  }
	

	 int i = 2;
	while(i <= num)
	{
	  while(num % i == 0)
	  {
	      num = num / i;
	      primes[c] = i;
	       c++;
	  }
	

	   if(i == 2)
	        i++;
	

	    else
	    {
	        i++;
	        for(int j = 2; j < i; j++)
	        {
	            if(i % j == 0)
	                i++;
	        }
	    }
	  
	}
	

	

	for(int i = 0; i < c; i++)
	{
	    a[i] = primes[i];
	}
	

	return c;
	}

