/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBProfileCurationTagsHeaderBarDelegate;
@class UILabel, UIButton;

@interface FBProfileCurationTagsHeaderBar : UIView {

	UILabel* _titleLabel;
	id<FBProfileCurationTagsHeaderBarDelegate> _delegate;
	UIButton* _addTagSearchButton;

}
-(void)updateWithText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 delegate:(id)arg3 ;
-(void)searchBarTapped;
-(void)titlelabelTapped;
-(void)layoutSubviews;
@end
