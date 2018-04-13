using UnityEngine;
using System.Collections;
using System.IO.Ports;
using System.Threading;

public class Sending : MonoBehaviour {
    
		public static SerialPort sp = new SerialPort("/dev/cu.usbmodem1411", 9600);
	public string message2;
	float timePassed = 0.0f;
	// Use this for initialization
	void Start () {
		OpenConnection();
	}
	

	void Update () {

	
			message2 = sp.ReadLine();
			print(message2);
	

	public void OpenConnection() 
    {
       if (sp != null) 
       {
         if (sp.IsOpen) 
         {
          sp.Close();
          print("Closing port, because it was already open!");
         }
         else 
         {
          sp.Open(); 
          sp.ReadTimeout = 16; 
          print("Port Opened!");
		
         }
       }
       else 
       {
         if (sp.IsOpen)
         {
          print("Port is already open");
         }
         else 
         {
          print("Port == null");
         }
       }
    }

    void OnApplicationQuit() 
    {
       sp.Close();
    }

    public static void sendYellow(){
    	sp.Write("b1");
    }

    public static void sendGreen(){
    	sp.Write("b2");
    	//sp.Write("\n");
    }

    public static void sendRed(){
    	sp.Write("b3");
    }

	public static void turnOff(){
		sp.Write("off");
	}
}
