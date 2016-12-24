/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol FBAvatarProtocol;
@class FBAvatarProfilePictureView, UILabel, UIView, FBUserSession, FBMemModelObject;

@interface FBAvatarCollectionViewCell : UICollectionViewCell {

	FBAvatarProfilePictureView* _pictureView;
	UILabel* _nameLabel;
	UIView* _separatorView;
	FBUserSession* _session;
	FBMemModelObject*<FBAvatarProtocol> _avatar;

}

@property (nonatomic,retain) FBUserSession * session;                                 //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBMemModelObject*<FBAvatarProtocol> avatar;              //@synthesize avatar=_avatar - In the implementation block
+(CGSize)sizeForAvatar:(id)arg1 ;
-(void)layoutSubviews;
-(FBUserSession *)session;
-(void)setAvatar:(FBMemModelObject*<FBAvatarProtocol>)arg1 ;
-(FBMemModelObject*<FBAvatarProtocol>)avatar;
-(void)setSession:(FBUserSession *)arg1 ;
-(void)setup;
@end
