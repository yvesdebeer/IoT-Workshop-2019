# Using the IBM Watson IoT platform with virtual sensors

In this quick lab, you will learn howto define a sensor within the platform and simulate some sensor data which will then be used to create a dashboard for device monitoring.

# 1. Create an IBMid on the IBM Cloud

In order to work in the IBM Cloud you need to register and get an IBMid. 
If you already have an IBMid, just log in to the IBM Cloud. Else, follow the next steps to create a free Lite account.

1. Goto [IBM CLoud](https://ibm.biz/devoxx_2019)
2. Click Create an IBM Cloud account
3. Follow the steps to create your IBMid

You can now start using the IBM Cloud. Lots of the available services have a free tier, so you can start experimenting for free.

# 2. Deploy Internet of Things (IoT) Platform service

Sign up for an [IBM CLoud](https://ibm.biz/devoxx_2019) if you don't have an IBM Cloud account yet.

Following set of steps details out on the deployment of the IoT Platform Starter service:

1. Log into the IBM Cloud with your IBM id and access the ***'Catalog'***
2. Choose to click on the **'Internet of Things Platform service'**. This can be easy found by clicking on **'Internet of Things'** from the left menu.

![IoT-Service-Tile.png](https://github.com/yvesdebeer/IoT-Workshop-2019/blob/master/images/IoT-Service-Tile.png)

3. Click on Create to go ahead and deploy the service.

# 3. Devices in IBM Watson IoT Platform

1. ***Click*** the Hamburger-menu on the left and select ***Resource list***.

2. You can find the ***'Internet of Things Platform'*** Service listed under 'Services'

3. Observe the Welcome page, click on the ***Launch*** button to enter into the IBM Watson IoT Platform organization space.
	The IoT organization is a space used for connecting and managing devices to the IBM Watson IoT Platform, so that your applications can access their live and historical data.
	
	![IoT-Launch.png](https://github.com/yvesdebeer/IoT-Workshop-2019/blob/master/images/IoT-Launch.png)
	
4. Observe the right top corner of the page, where you’ll find the six character ***OrganizationID*** that is created for you
	to identify your instance of the Watson IoT Platform service. Here you can add, connect and manage your IoT devices.
	
### Create a Device Type
	
Each device that connects to the IBM Watson IoT Platform is associated with a device type.
Device types are intended to be groups of devices which share common characteristics. 
So in order to add devices you need to create a device type first.

- In the IBM Watson IoT Platform dashboard, click **Devices** in the menu on the left

- Select the Device Types tab, then click on the **Add Device Type** button

- Observe that there are two options provided now, namely **Device** type and **Gateway** type. 
As this recipe focuses on adding a device and not a gateway, select ***Device***.
(Gateways are a specialized class of devices in the IBM Watson IoT Platform. Gateways are devices which serve as access points to the IBM Watson IoT Platform for other devices. Gateway devices can register new devices and can send and receive data on behalf of devices connected to them. Refer to the documentation for more information about the Gateway).

- Specify a name for the devicetype, use for example **'Thermostat'**. Optionally add a description and click Next.

- Observe that a template page is given where you can select and define one or more attributes. All of these attributes are optional. 
They will be used as a template for new devices that are assigned to this device type. 
Attributes that you do not define may still be edited individually later when you add the device. 
Define for example some attributes for **Manufacturer** and **Model**, then click ***Finish***.

We have now successfully created a device type in IBM Watson IoT Platform organization.

### Add a Device in IBM Watson IoT Platform
	
A device can be defined that has a connection to the internet and has data it wants to get into the cloud and devices can accept commands from applications as well. You need to add the device in IBM Watson IoT Platform Organization before connecting it to the IoT. Carry out the following steps to add the device in IBM Watson IoT Platform,

1.	In the IBM Watson IoT Platform dashboard choose the **Devices** menu on the left, click the Browse tab and then **'Add Device'** button

2.	Choose the device type **'Thermostat'** that we created in the last step. Enter a unique device id, in our case use **'LivingRoomThermo1'**, which will distinguish your device from all other devices that you might connect to the IoT (you can use 1 or something more sophisticated like your devices MAC address), then click ***Next***.

3.	In the Device Information page you can enter more information about your device. Click ***Next***.

4.	On the next page, you can either add your own authentication token, or allow the IBM Watson IoT Platform to generate a token for you. The IBM Watson IoT Platform generated token will be 18 characters long and will contain a mix of alphanumeric characters and symbols. The token will be returned to you at the end of the registration process. In case if you want to add your own token, enter the token, then click ***Next***.

5. You will be given a summary page to verify the details before adding the device to IBM Watson IoT Platform. Verify and click ***Finish***.

6. 	At this step, the device is registered to your Organization and you will be provided with the registration details. To get your device connected, you need to add the credentials to your device. So make a note of them, especially of the token since this is the last time that you’ll see it.

7. 	Click the browser’s Back button to get back to the main dashboard and observe that the device is added in your Organization.

So, now we have successfully added a device in the IBM Watson IoT Platform organization.
 
### Explore 

In the IBM Watson IoT Platform click on ***Boards*** (top icon) in the menu on the left. You will see an overview of all the board available to you:

![IoT-Dashboard.png](https://github.com/yvesdebeer/IoT-Workshop-2019/blob/master/images/IoT-Dashboard.png)

Click the **Usage Overview** board to open it. You will see a number of so-called cards containing information about your devices. 

On the Risk and Security Overview board you’ll find security information.

	
# 4. Work with built-in simulated devices 
	
In operational situations you will connect real devices to the Watson IoT Platform and collect the device data for analysis purposes to improve your business. In the steps above we’ve seen how to create a device type and add a device to the platform.

In this section we will explore the built-in device simulation capability of the IBM Watson IoT Platform.

### Enable simulation 
	
Before we can use the simulation feature of the platform we need to enable it.

1.	To enable simulation, on the left menu ***click on Settings***. Scroll down the page to **Device Simulator**. Activate the Device Simulator.

![IoT-Device-Simulator.png](https://github.com/yvesdebeer/IoT-Workshop-2019/blob/master/images/IoT-Device-Simulator.png)

2.	At the bottom right you will find a tab **“0 simulations running”**. Click on it and click ***'Create Simulation'***. Select **'Thermostat'** as the device type.

3.	Click on ***New Event type***. Set the JSON message. You can use the sample message also or create your own JSON message as well. Click on **Save**.

You have now created a Simulation, but no device is using this simulation yet. So let’s select one. 

1.	Click ***Create Simulated Device***. A new device will be created and the simulation starts immediately.

2.	You can also simulate a device that you already registered yourself. Click ***Use Registered Device*** and select the device that you created earlier (e.g. LivingRoomThermo1).

3.	Now go to the Devices page of Watson IoT Platform, click on the simulated device and check for events coming in, in the **'Recent Events'** tab of the device. 

![IoT-Simulated-Device.png](https://github.com/yvesdebeer/IoT-Workshop-2019/blob/master/images/IoT-Simulated-Device.png)

# 5. Create a device dashboard 

Operators want to monitor the data coming from devices. So let’s create a dashboard to monitor devices of type 'Thermostat'.
 
1.	On Watson IoT Platform go to the Boards page. 

2.	Click ***Create New Board*** and name it **'Device Monitor'** and make it your landing page.

3.	Click ***Next*** and ***Submit***. A new Board is now created.
A Board is a page on your dashboard. Open the new Board by clicking on it.

4.	Click ***Add New Card***. A Card is a widget on a dashboard.

5.	Select **Device List**. This Card will show the devices of a specified device type.
 
6.	Click ***Settings***, select **'Thermostat'** as the device type for this Card. Make sure to check the Device Type checkbox.
 
7.	Click ***Next***, enter a Title for the card or accept the default title and click **Submit**. You will see the card showing all the devices of type 'Thermostat'.

8.	Add a second Card, select the **Donut Chart**.

9.	As Card Source Data use the previously created Device List card. Click ***Next***.

10.	Connect a new data set. Use the **simulated event** and the **randomNumber** as property.

11.	Click ***Next*** and ***Next***, choose a Title, e.g. Random Number and click Submit.

12.	Now you see two cards on your Device Monitor page. On the Device List you can select the device that you want to monitor. The Donut chart will show the random number of the selected device.


# Conclusion

So far we demonstrated how to setup an IBM Watson IoT Platform Organization, create a Device Type and register a Device using the IBM Watson IoT Platform dashboard, and we explored how to visualize and analyse device data.

# Where to go from here? 

1. Browse through various tutorials available in DeveloperWorks Recipes to know how to connect specific devices to IBM Watson IoT Platform, visualize the events originating from these devices, control, process and analyze these device events using applications. Say, for example, if you want to connect a Raspberry Pi device, Arduino or similar device to IBM Watson IoT Platform, search for the appropriate recipe. More recipes on https://developer.ibm.com/recipes/. 

Note that Recipes are community-created content. They are neither monitored nor endorsed by IBM. If you find inappropriate content, please use Report Abuse to let us know. For more information on community content, please refer to our Terms of Use. 

2. Browse through various IBM IoT Programming guides (https://console.bluemix.net/docs/services/IoT/index.html) to develop your own device or application code. There are several client libraries available for use with the IBM Watson IoT Platform. The client libraries are designed to allow users to interact with their devices and applications using their preferred language, and to simplify this interaction as much as possible. 





 


