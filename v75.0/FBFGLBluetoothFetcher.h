/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFGLDataFetcher.h>

@class FBGravityBeaconsManager, FBFGLLogger, NSString;

@interface FBFGLBluetoothFetcher : NSObject <FBFGLDataFetcher> {

	FBGravityBeaconsManager* _manager;
	FBFGLLogger* _logger;
	BOOL _off;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL off;                            //@synthesize off=_off - In the implementation block
+(id)fetcherId;
-(void)turnOn;
-(void)performLocationFetch:(id)arg1 ;
-(id)initWithBeaconsManager:(id)arg1 logger:(id)arg2 ;
-(BOOL)off;
-(void)turnOff;
@end

