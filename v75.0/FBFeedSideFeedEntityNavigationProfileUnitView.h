/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBNetworkImageViewDelegate.h>

@class FBNetworkImageView, UIView, UILabel, FBRichTextView, UIImageView, NSString;

@interface FBFeedSideFeedEntityNavigationProfileUnitView : UIView <FBNetworkImageViewDelegate> {

	FBNetworkImageView* _profilePhoto;
	UIView* _coverPhotoShadow;
	UILabel* _name;
	FBRichTextView* _detailLine1;
	UILabel* _detailLine2;
	UIImageView* _detailLine1Icon;
	UILabel* _descriptionParagraph;
	FBNetworkImageView* _coverPhoto;

}

@property (nonatomic,retain) FBNetworkImageView * coverPhoto;              //@synthesize coverPhoto=_coverPhoto - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(FBNetworkImageView *)coverPhoto;
-(void)networkImageViewDidLoadImage:(id)arg1 ;
-(void)setCoverPhoto:(FBNetworkImageView *)arg1 ;
-(void)setCoverPhotoURL:(id)arg1 profilePhotoURL:(id)arg2 name:(id)arg3 detailLine1:(id)arg4 detailLine1Icon:(id)arg5 detailLine2:(id)arg6 descriptionParagraph:(id)arg7 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

