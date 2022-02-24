// Accepted at GFG practise
/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
  stack<int>temp;
  while(!s.empty())
  {
      int t=s.top();
      s.pop();
      while(!temp.empty() && temp.top()>t)
      {
          s.push(temp.top());
          temp.pop();
      }
      temp.push(t);
  }
  s=temp;// very important to write this line
 
}
