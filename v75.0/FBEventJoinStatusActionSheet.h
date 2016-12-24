/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBPopoverControllerDelegate.h>

@protocol FBEventJoinStatusActionSheetDelegate;
@class FBMemEvent, FBUserSession, FBEventAnalyticTracker, NSString, NSArray, FBPopoverActionSheet;

@interface FBEventJoinStatusActionSheet : NSObject <FBPopoverControllerDelegate> {

	FBMemEvent* _event;
	FBUserSession* _session;
	FBEventAnalyticTracker* _tracker;
	NSString* _actionName;
	NSArray* _trackingCodes;
	NSArray* _trackingNodes;
	NSString* _analyticsModule;
	FBPopoverActionSheet* _popoverActionSheet;
	id<FBEventJoinStatusActionSheetDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBEventJoinStatusActionSheetDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)_setRsvpStatus:(id)arg1 ;
-(id)initWithEvent:(id)arg1 session:(id)arg2 tracker:(id)arg3 actionName:(id)arg4 ;
-(void)presentInSourceView:(id)arg1 sourceViewFrame:(CGRect)arg2 ;
-(id)_buttonsForPublicEvent:(id)arg1 ;
-(id)_buttonsForPrivateEvent:(id)arg1 ;
-(void)_watchGoingSelected:(id)arg1 ;
-(void)_watchSelected:(id)arg1 ;
-(void)_watchRemoveSelected:(id)arg1 ;
-(void)_goingSelected:(id)arg1 ;
-(void)_maybeSelected:(id)arg1 ;
-(void)_cantGoSelected:(id)arg1 ;
-(void)_dismissPopoverIfShown;
-(void)_setWatchStatus:(id)arg1 ;
-(id)initWithEvent:(id)arg1 session:(id)arg2 trackingCodes:(id)arg3 trackingNodes:(id)arg4 analyticsModule:(id)arg5 ;
-(void)_watchDeclineSelected:(id)arg1 ;
-(void)setDelegate:(id<FBEventJoinStatusActionSheetDelegate>)arg1 ;
-(id<FBEventJoinStatusActionSheetDelegate>)delegate;
-(void)dismiss;
@end

