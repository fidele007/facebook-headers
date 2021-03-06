/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <Facebook/FBPresenceViewDelegate.h>

@protocol FBAvatarProtocol;
@class FBAvatarProfilePictureView, UIView, FBPresenceView, FBUserSession, FBMemModelObject, NSString;

@interface FBAvatarWithSecondaryActionsTableViewCell_DEPRECATED : UITableViewCell <FBPresenceViewDelegate> {

	FBAvatarProfilePictureView* _personImageView;
	UIView* _border;
	FBPresenceView* _presenceView;
	FBUserSession* _session;
	BOOL _borderHidden;
	FBMemModelObject*<FBAvatarProtocol> _avatar;
	unsigned long long _layoutStyle;

}

@property (nonatomic,retain) FBMemModelObject*<FBAvatarProtocol> avatar;              //@synthesize avatar=_avatar - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                               //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) BOOL borderHidden;                                       //@synthesize borderHidden=_borderHidden - In the implementation block
@property (assign,nonatomic) unsigned long long layoutStyle;                          //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightForRowAtIndexPath:(id)arg1 layoutStyle:(unsigned long long)arg2 firstCellAdditionalVerticalPadding:(double)arg3 ;
+(double)heightForRowAtIndexPath:(id)arg1 layoutStyle:(unsigned long long)arg2 ;
+(double)heightForRowAtIndexPath:(id)arg1 layoutStyle:(unsigned long long)arg2 cellBorderHidden:(BOOL)arg3 ;
+(double)heightForRowAtIndexPath:(id)arg1 layoutStyle:(unsigned long long)arg2 firstCellAdditionalVerticalPadding:(double)arg3 cellBorderHidden:(BOOL)arg4 ;
-(id)initWithReuseIdentifier:(id)arg1 profilePictureSize:(unsigned long long)arg2 session:(id)arg3 ;
-(CGRect)personImageViewFrameInView:(id)arg1 ;
-(void)setBorderHidden:(BOOL)arg1 ;
-(void)setupPresenceViewForNewMemPerson;
-(void)presenceViewImageUpdated;
-(id)avatarKeyPathsToObserve;
-(BOOL)borderHidden;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)actionsView;
-(unsigned long long)layoutStyle;
-(void)setLayoutStyle:(unsigned long long)arg1 ;
-(FBUserSession *)session;
-(void)setAvatar:(FBMemModelObject*<FBAvatarProtocol>)arg1 ;
-(FBMemModelObject*<FBAvatarProtocol>)avatar;
-(void)updateName;
@end

