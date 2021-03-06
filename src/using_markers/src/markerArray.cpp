#include <ros/ros.h>
#include <visualization_msgs/MarkerArray.h>
#include <visualization_msgs/Marker.h>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{	
        // Initialize the ros 
	ros::init(argc,argv,"markerArray");
	ros::NodeHandle n;
	ros::Publisher markerArray_pub = n.advertise<visualization_msgs::MarkerArray>("markerArray",10);
	ros::Rate r(1);

	// Define two array for the x, y positions of several waypoints
	int x[] = {0,5,10,15,20};
	int y[] = {0,5,10,15,20};
	
	
while(ros::ok())
{
		visualization_msgs::MarkerArray markerArray;
		for (size_t i = 0; i < sizeof(x)/sizeof(int); i++)
		{
			// Create the marker at different position;
			visualization_msgs::Marker marker;
			// Set the frame_id and timestamp.
			marker.header.frame_id = "/map";
			marker.header.stamp = ros::Time();
			
			// Set the namespace and id for this marker. This serves to create a unique ID
			// Any marker sent with the same namespace and id will overwrite the old one
			marker.ns = "marker_array";
			marker.id = i;
			
			// Set the marker type, here we're using the sphere for the waypoints
			marker.type = visualization_msgs::Marker::SPHERE;
			
			// Set the marker actio.
			marker.action = visualization_msgs::Marker::ADD;

			// Set the pose of the marker. This is a full 6DOF pose relative to the frame/time specified in the header.
			marker.pose.position.x = (float)x[i];
			marker.pose.position.y = (float)y[i];
			marker.pose.position.z = 0;
			marker.pose.orientation.x = 0.0;
			marker.pose.orientation.y = 0.0;
			marker.pose.orientation.z = 0.0;
			marker.pose.orientation.w = 1.0;


			// Set the scale of the marker
			marker.scale.x = 1.0;
			marker.scale.y = 1.0;
			marker.scale.z = 1.0;	
			// Set the color for the marker
			marker.color.r = 0.0f;
			marker.color.g = 1.0f;
			marker.color.b = 0.0f;
			marker.color.a = 1;
			
			//marker.lifetime = ros::Duration();
			markerArray.markers.push_back(marker);
			
		}
			markerArray_pub.publish(markerArray);
		while(markerArray_pub.getNumSubscribers() < 1)
		{
			if (!ros::ok())
			{
				return 0;
			}
			ROS_WARN_ONCE("Please create a subscriber to the markerArray.");
			sleep(1);
		}
		cout<<"There are "<<markerArray.markers.size()<<" markers in this array."<<endl;
	

		//ros::spinOnce();		
		r.sleep();
	

}	


}
