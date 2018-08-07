public class FixedCapacityStackOfString()
{
	private String[] s;
	private int N = 0;

	public FixedCapacityStackOfString(int capacity)
	{	s = new String[capacity];	}

	public boolean isEmpty()
	{	return N == 0;	}

	public void push(String item)
	{	s[N++] = item;	}

	public void pop()
	{	return s[--N];	}
}