#ifndef settings_h
#define settings_h

//Function Prototypes
//void pubnubPublish(char *p_data);
//void prepare_json_data(const char* p_rfidNum);

//Setting up the Linkit to Work with the Local WiFi Router 
#define WIFI_AP       "minyoung"     // provide your WIFI_AP name
#define WIFI_PASSWORD "12345678" //provide your WIFI password

//Setting up the PubNub Publish and Subscribe Channels with Channel Name
const char* g_host      = "pubsub.pubnub.com";
const char* g_pubKey    = "pub-c-08e7fa18-6439-4cd9-92ae-aee1ea9e725a";
const char* g_subKey    = "sub-c-24720d8c-7a8f-11e7-bda6-0619f8945a4f";
const char* g_channel   = "Channel-e18xwofx2";

#endif
