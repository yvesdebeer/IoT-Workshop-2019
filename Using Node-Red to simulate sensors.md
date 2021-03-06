# Using Node-Red to simulate sensors

In this quick lab, you will learn howto setup and run Node-Red within the IBM Cloud and use it to experiment with virtual sensors.

# 1. Create and IBMid on the IBM Cloud

In order to work in the IBM Cloud you need to register and get an IBMid. 
If you already have an IBMid, just log in to the IBM Cloud. Else, follow the next steps to create a free Lite account.

1. Goto [IBM CLoud](https://ibm.biz/becode_liege)
2. Click Create an IBM Cloud account
3. Follow the steps to create your IBMid

You can now start using the IBM Cloud. Lots of the available services have a free tier, so you can start experimenting for free.

# 2. Deploy a Node-Red starter kit

Following set of steps details out on the deployment of the Node-Red starter kit

1. Log into the IBM Cloud with your IBM id and access the ***'Catalog'***
2. Choose to click on the **'Node-RED Starter'**. This can be easy found by clicking on **'Starter Kits'** from the left menu.

![Node-Red-Starter.png](https://github.com/yvesdebeer/IoT-Workshop-2019/blob/master/images/Node-Red-Starter.png)

3. Provide a App name and click create. This will create a Node-Red instance (Node.js app within Cloud Foundry) and a Cloudant database which will be used for storing your Node-Red flows. Additionally you can also use the database for storing sensor data.

Please be patient as the deployment of the Node-Red instance can take a couple of minutes.
As soon as the deployment has finished you can click the **'Visit App URL'** to access the application.

- Follow the instructions to secure your Node-Red environment by clicking **Next**

- Secure your Node-Red editor by providing a **Username** and a **Password** and click **Next**

- Click **Next** on the 'Browse available IBM Cloud nodes' (you will install those later)

- Click **Finish** to finish the installation

- Click **Go to your Node-RED flow editor** and login using your username and password you set earlier

# 3. Add the Node-Red dashboard module to the environment

Within the Node-Red flow editor click on the hamburger-menu in the top right corner and click **Manage palette**

Next click on **Install** and search for the module **node-red-dashboard** and click install.

![Node-Red-Dashboard.png](https://github.com/yvesdebeer/IoT-Workshop-2019/blob/master/images/Node-Red-Dashboard.png)

This will add additional UI components to the Node-Red palette

Install also the additional module **node-red-node-random** as it will be used by the example flow you will import in the next step.

![Node-Red-Random.png](https://github.com/yvesdebeer/IoT-Workshop-2019/blob/master/images/Node-Red-Random.png)

# 4. Import the example Node-Red flow

Download [example.json](https://raw.githubusercontent.com/yvesdebeer/IoT-Workshop-2019/master/example.json) and save it on your local machine.

Within the Node-Red flow editor click on the hanburger-menu in the top right corner and click **Import**

Next click **select a file to import and select the example.json file which you can downloaded in the previous step.

Next click the **Deploy** button on the top right to activate the flow.

# 5. Verify the flow

Examine the flow components and verify the working application within the Node-Red dashboard.

You can access the dashboard by selecting **Dashboard** as show in the picture below:

![Dashboard.png](https://github.com/yvesdebeer/IoT-Workshop-2019/blob/master/images/Dashboard.png)




