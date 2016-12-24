/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBDrawerCellDelegate.h>

@protocol FBNotificationsDrawerComponentNUXHandling, FBNotificationsDrawerComponentTransitionHandling;
@class FBNotificationsDrawerNUXComponentModel, NSString;

@interface FBNotificationsDrawerCellInteractionHandler : NSObject <FBDrawerCellDelegate> {

	unsigned long long _drawerCellState;
	FBNotificationsDrawerNUXComponentModel* _componentModel;
	id<FBNotificationsDrawerComponentNUXHandling> _NUXHandler;
	id<FBNotificationsDrawerComponentTransitionHandling> _transitionHandler;

}

@property (assign,nonatomic) unsigned long long drawerCellState;                                                         //@synthesize drawerCellState=_drawerCellState - In the implementation block
@property (assign,nonatomic,__weak) FBNotificationsDrawerNUXComponentModel * componentModel;                             //@synthesize componentModel=_componentModel - In the implementation block
@property (assign,nonatomic,__weak) id<FBNotificationsDrawerComponentNUXHandling> NUXHandler;                            //@synthesize NUXHandler=_NUXHandler - In the implementation block
@property (assign,nonatomic,__weak) id<FBNotificationsDrawerComponentTransitionHandling> transitionHandler;              //@synthesize transitionHandler=_transitionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didSelectDrawerItemWithIdentifier:(id)arg1 withSwipeToEdgeGesture:(BOOL)arg2 ;
-(void)drawerCellComponentDidTransitionToState:(unsigned long long)arg1 ;
-(BOOL)shouldPeekDrawer;
-(BOOL)shouldBounceForTapWhenClosed;
-(unsigned long long)drawerCellState;
-(void)setDrawerCellState:(unsigned long long)arg1 ;
-(id<FBNotificationsDrawerComponentNUXHandling>)NUXHandler;
-(void)setNUXHandler:(id<FBNotificationsDrawerComponentNUXHandling>)arg1 ;
-(id<FBNotificationsDrawerComponentTransitionHandling>)transitionHandler;
-(void)setTransitionHandler:(id<FBNotificationsDrawerComponentTransitionHandling>)arg1 ;
-(id)initWithComponentModel:(id)arg1 transitionHandler:(id)arg2 NUXHandler:(id)arg3 ;
-(void)didShowNUX;
-(FBNotificationsDrawerNUXComponentModel *)componentModel;
-(void)setComponentModel:(FBNotificationsDrawerNUXComponentModel *)arg1 ;
@end
