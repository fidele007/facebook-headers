/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBMPOutput.h>

@class FBMPBaseConsumerPort, NSString;

@interface FBMPLowLightDetector : NSObject <FBMPOutput> {

	/*^block*/id _callback;
	FBMPBaseConsumerPort* _port;
	long long _mode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)consumerPorts;
-(void)handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithCallback:(/*^block*/id)arg1 ;
@end

