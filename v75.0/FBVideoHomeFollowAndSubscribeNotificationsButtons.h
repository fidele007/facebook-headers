/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBQueriedVideoChannelFieldsProtocol;
@class FBMorphableButton, FBMorphableButtonContent, FBMemModelObject, NSString, FBUserSession;

@interface FBVideoHomeFollowAndSubscribeNotificationsButtons : UIView {

	FBMorphableButton* _followButton;
	FBMorphableButtonContent* _followButtonFollowContent;
	FBMorphableButtonContent* _followButtonFollowingContent;
	FBMorphableButton* _notificationsButton;
	FBMorphableButtonContent* _notificationsButtonSubscribeContent;
	FBMorphableButtonContent* _notificationsButtonUnsubscribeContent;
	FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol> _videoChannel;
	NSString* _videoID;
	FBUserSession* _session;
	BOOL _darkBackground;
	/*^block*/id _videoHomeSessionIDProvider;
	/*^block*/id _followStateToggledToBlock;
	/*^block*/id _notificationsStateToggledToBlock;

}
-(void)_didTapFollowButton;
-(void)_didTapSubscribeButton;
-(id)initWithVideoChannel:(id)arg1 videoID:(id)arg2 session:(id)arg3 darkBackground:(BOOL)arg4 videoHomeSessionIDProvider:(/*^block*/id)arg5 followStateToggledToBlock:(/*^block*/id)arg6 notificationsStateToggledToBlock:(/*^block*/id)arg7 ;
-(void)_layoutSubviewsInternal:(BOOL)arg1 ;
-(void)_followingOrNotificationValueDidChange:(id)arg1 ;
-(void)_didTapFollowingButton;
-(void)_didTapUnsubscribeButton;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
