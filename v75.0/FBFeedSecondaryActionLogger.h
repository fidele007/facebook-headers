/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSecondaryActionMenuControllerListener.h>

@class NSString, NSDictionary;

@interface FBFeedSecondaryActionLogger : NSObject <FBSecondaryActionMenuControllerListener> {

	BOOL _isFeedUnitSponsored;
	BOOL _isFeedUnitSelfPost;
	NSString* _analyticsModule;
	NSDictionary* _analyticsExtras;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapBackButton;
-(void)didTapMoreButton;
-(id)initWithFeedUnit:(id)arg1 userFBID:(id)arg2 analyticsModule:(id)arg3 analyticsExtras:(id)arg4 ;
-(void)logEvent:(id)arg1 actionName:(id)arg2 position:(unsigned long long)arg3 isSecondLevel:(BOOL)arg4 ;
-(void)buttonItemForActionDidAppear:(id)arg1 atPosition:(unsigned long long)arg2 isSecondLevel:(BOOL)arg3 ;
-(void)didTapButtonItemForAction:(id)arg1 atPosition:(unsigned long long)arg2 isSecondLevel:(BOOL)arg3 ;
-(void)backButtonDidAppear;
-(void)moreButtonDidAppear;
@end

