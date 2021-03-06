/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBVideoPlaybackEventListener.h>

@protocol FBVideoAutoFullScreenControllerDelegate;
@class NSString;

@interface FBVideoAutoFullScreenController : NSObject <FBVideoPlaybackEventListener> {

	double _timeSinceScrolling;
	double _lastPlayerUpdateTime;
	BOOL _enabled;
	id<FBVideoAutoFullScreenControllerDelegate> _delegate;
	double _timeBeforeAutoFullScreen;

}

@property (assign,nonatomic,__weak) id<FBVideoAutoFullScreenControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                             //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) double timeBeforeAutoFullScreen;                                          //@synthesize timeBeforeAutoFullScreen=_timeBeforeAutoFullScreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)videoPlaybackController:(id)arg1 didUpdatePlaybackTime:(double)arg2 ;
-(double)timeBeforeAutoFullScreen;
-(void)setTimeBeforeAutoFullScreen:(double)arg1 ;
-(BOOL)enabled;
-(void)setDelegate:(id<FBVideoAutoFullScreenControllerDelegate>)arg1 ;
-(id<FBVideoAutoFullScreenControllerDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

