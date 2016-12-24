/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableViewCell.h>

@protocol FBGroupsMembersViewConfig, FBGroupsMembersDataSourceActionHandler;
@class FBUserSession, FBItemView_DEPRECATED, FBButton;

@interface FBGroupsMemberBioViewCell : UITableViewCell {

	FBUserSession* _session;
	FBItemView_DEPRECATED* _memberBioView;
	FBButton* _getStartedButton;
	id<FBGroupsMembersViewConfig> _config;
	id<FBGroupsMembersDataSourceActionHandler> _actionHandler;

}
+(double)heightForMemberBioCell:(CGSize)arg1 config:(id)arg2 ;
-(id)initWithSession:(id)arg1 reuseIdentifier:(id)arg2 config:(id)arg3 actionHandler:(id)arg4 ;
-(void)didTapGetStartedButton;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)accessibilityLabel;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setHasSeparator:(BOOL)arg1 ;
@end

