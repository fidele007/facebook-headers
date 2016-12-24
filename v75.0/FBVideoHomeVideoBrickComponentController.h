/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKComponentController.h>
#import <Facebook/FBComponentControllerWorkingRangeListenerProviding.h>

@class FBConsistentLookasideCacheObservationHandle, NSString;

@interface FBVideoHomeVideoBrickComponentController : CKComponentController <FBComponentControllerWorkingRangeListenerProviding> {

	FBConsistentLookasideCacheObservationHandle* _clcHandleStory;
	FBConsistentLookasideCacheObservationHandle* _clcHandleNotification;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didMount;
-(void)willUnmount;
-(id)workingRangeListenerForComponent:(id)arg1 ;
-(void)_willStartLiveToVODTransitionAction;
-(void)_didStartPlaying;
-(void)_didStopPlaying;
-(void)_addCLCObserver;
-(void)_setupAutoplayTracking;
-(void)didRemount;
-(void)_highlight:(BOOL)arg1 ;
-(id)_brickComponent;
-(void)_clcDidUpdateStory:(id)arg1 ;
-(void)_clcDidUpdateNotification:(id)arg1 ;
-(void)_removeBrick;
-(void)componentTreeDidDisappear;
@end
