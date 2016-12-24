/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMPSingleInput.h>
#import <Facebook/FBMPTriggerableInput.h>

@protocol OS_dispatch_queue;
@class UIImage, NSObject, NSString;

@interface FBMPLocalImageInput : FBMPSingleInput <FBMPTriggerableInput> {

	BOOL _videoPortConnected;
	BOOL _sessionStarted;
	UIImage* _image;
	NSObject*<OS_dispatch_queue> _videoQueue;
	unsigned long long _uniqueId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUIImage:(id)arg1 uniqueId:(unsigned long long)arg2 ;
-(void)produceImageData;
-(void)sessionWillStart:(id)arg1 ;
-(void)sessionWillStop:(id)arg1 ;
-(void)sessionConnectedPort:(id)arg1 context:(id)arg2 ;
-(void)sessionDisconnectedPort:(id)arg1 context:(id)arg2 ;
-(void)_produceDataIfNeeded:(id)arg1 ;
-(void)_produceVideoData:(id)arg1 ;
-(void)sessionNeedsInputData:(id)arg1 ;
-(id)initWithUIImage:(id)arg1 ;
@end
