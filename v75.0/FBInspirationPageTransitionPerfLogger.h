/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAnimationPerformanceDisplayLinkTrackingSourceDelegate.h>

@class FBQuickPerformanceLogger, NSString, FBAnimationPerformanceDisplayLinkTrackingSource;

@interface FBInspirationPageTransitionPerfLogger : NSObject <FBAnimationPerformanceDisplayLinkTrackingSourceDelegate> {

	long long _transitionFrameCount;
	double _transitionStartTime;
	double _dragEndTime;
	FBInspirationPageTransitionPerfLoggerTrackState _transitionStartState;
	FBQuickPerformanceLogger* _logger;
	BOOL _transitionLoggingStarted;
	NSString* _startupType;
	long long _transitionCount;
	NSString* _navigationModel;
	FBAnimationPerformanceDisplayLinkTrackingSource* _frameCounter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNavigationModel:(id)arg1 ;
-(void)transitionStartedWithState:(FBInspirationPageTransitionPerfLoggerTrackState)arg1 ;
-(void)draggingEnded;
-(void)transitionEndedWithState:(FBInspirationPageTransitionPerfLoggerTrackState)arg1 transitionTriggeredProgrammatically:(BOOL)arg2 ;
-(void)trackingSourceDidUpdateActualFrameTime:(double)arg1 idealFrameTime:(double)arg2 ;
-(void)dealloc;
-(void)_applicationWillEnterForeground;
@end

