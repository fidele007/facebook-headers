/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIScrollView.h>
#import <Facebook/CKComponentProvider.h>

@class CKComponentHostingView, FBAppInvitePopoverComponentModel, FBUserSession, NSString;

@interface FBAppInvitePopoverView : UIScrollView <CKComponentProvider> {

	CKComponentHostingView* _hostingView;
	FBAppInvitePopoverComponentModel* _model;
	FBUserSession* _session;
	FBAppInvitePopoverComponentActions _actions;

}

@property (nonatomic,readonly) FBUserSession * session;                                 //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBAppInvitePopoverComponentActions actions;              //@synthesize actions=_actions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 invite:(id)arg2 isApplicationInstalled:(BOOL)arg3 session:(id)arg4 actions:(const FBAppInvitePopoverComponentActions*)arg5 ;
-(void)layoutSubviews;
-(FBAppInvitePopoverComponentActions)actions;
-(FBUserSession *)session;
@end

