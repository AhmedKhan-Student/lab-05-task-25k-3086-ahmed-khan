#include <stdio.h>
int main(){

int device, symptom;
printf("enter device 1 for laptop");
printf("enter device 2for smartphone");
printf("enter device 3 for router");
scanf("%d",&device);
    switch (device) {
        case 1: //laptop
        printf("enter your error code 10/11/12");
        scanf("%d",&symptom);
	
            switch (symptom) {
                case 10:
                    printf("Advice: Check if the power cable is properly connected. Try resetting the battery.\n");
                    break;
                case 11:
                    printf("Advice: Ensure the cooling fan is working. Clean the vents or try using a cooling pad.\n");
                    break;
                case 12:
                    printf("Advice: Close unnecessary background programs. Consider upgrading your RAM or SSD.\n");
                    break;
                default:
                    printf("Invalid symptom code for Laptop.\n");
            }
            break;

        case 2:// smartphone
        printf("enter your error code 20/21/22");
        scanf("%d",&symptom);
        
		
		
            switch (symptom) {
                case 20:
                    printf("Advice: Check for apps consuming excessive battery. Consider turning off unused services like Bluetooth.\n");
                    break;
                case 21:
                    printf("Advice: Try restarting your phone or switching to airplane mode and back. Check network settings.\n");
                    break;
                case 22:
                    printf("Advice: Clean the screen or reset the touchscreen settings in the phone’s settings.\n");
                    break;
                default:
                    printf("Invalid symptom code for Smartphone.\n");
            }
            break;

        case 3://router
        printf("enter your error code 30/31/31");
        scanf("%d",&symptom);
            switch (symptom) {
                case 30:
                    printf("Advice: Check if the router is connected to the internet properly. Try restarting your router.\n");
                    break;
                case 31:
                    printf("Advice: Place your router in a more central location. Avoid interference from other devices.\n");
                    break;
                case 32:
                    printf("Advice: Restart your router. Ensure that the device is within range of the router.\n");
                    break;
                default:
                    printf("Invalid symptom code for Router.\n");
            }
            break;

        default:
            printf("Invalid device type.\n");
    } 


return 0;
}


