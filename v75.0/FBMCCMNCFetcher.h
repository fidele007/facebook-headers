/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, FBCarrier, NSString;

@interface FBMCCMNCFetcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	FBCarrier* _carrier;

}

@property (nonatomic,retain) FBCarrier * carrier;                   //@synthesize carrier=_carrier - In the implementation block
@property (nonatomic,copy,readonly) NSString * MCCMNC; 
-(void)setCarrier:(FBCarrier *)arg1 ;
-(FBCarrier *)carrier;
-(NSString *)MCCMNC;
-(id)init;
@end
