/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class FBItemView, FBUserSession;

@interface FBInviteFriendsTableViewCell : UITableViewCell {

	FBItemView* _contentView;
	FBUserSession* _session;

}

@property (nonatomic,retain) FBUserSession * session;              //@synthesize session=_session - In the implementation block
-(id)_pictureView:(id)arg1 isInvited:(BOOL)arg2 ;
-(id)_contextView:(id)arg1 isInvited:(BOOL)arg2 isSelected:(BOOL)arg3 isAtLastRow:(BOOL)arg4 ;
-(void)setPerson:(id)arg1 isInvited:(BOOL)arg2 isSelected:(BOOL)arg3 isAtLastRow:(BOOL)arg4 ;
-(void)layoutSubviews;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end

