public class linked_list {
    node head;
    class node{
        int data;
        node next;
        
        node(int data)
        {
            this.data=data;
            this.next=null;
        }
    }
    // adding the data at first
    public void add_first(int d)
    {
        node newnode = new node(d);

        if(head==null)
        {
            head=newnode;
            return;
        }
        else
        {
            newnode.next=head;
            head=newnode;
        }
    }
public void addlast(int d)
{
    node newnode = new node(d);
    if(head==null)
    {
        head=newnode;
        return;
    }
    else
    {
        node currnode = head;
        while(currnode.next!=null)
        {
            currnode=currnode.next;
        }
        currnode.next=newnode;
    }

}
public void printll()
{
    if(head==null)
    {
        System.out.println("List is empty");
    }
    else
    {
        node currnode = head;
        while(currnode!=null)
        {
            System.out.print(currnode.data+"->");
            currnode=currnode.next;
        }
        System.out.print("NULL");}
        
}
public void deletelast()
{
    if(head==null)
    {
        System.out.println("List is empty");
        return;
    }
    else if(head.next==null)
    {
        head=null;
        return;
    }
    else 
    {
        node lastnode = head.next;
        node secondlast = head;
        while(lastnode.next!=null)
        {
            lastnode = lastnode.next;
            secondlast = secondlast.next;

        }
        lastnode = null;
        secondlast.next = null;
    }
}
public void delefir()
{
    if(head==null)
    {
        System.out.println("List is empty");
        return;
    }
    else
    {
        node currnode = head;
        head = null;
        currnode.next=head;
    }
}
     public static void main(String args[])
    {
      linked_list list1 = new linked_list();
      list1.add_first(1);
      list1.add_first(0);
      list1.addlast(3);
      list1.printll();
     // list1.deletelast();
      //list1.printll();
      System.out.println();
      list1.delefir();
      list1.printll();


    }
    
}
