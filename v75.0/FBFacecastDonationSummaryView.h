/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBHumanQueriedFundraiserToCharityFieldsProtocol;
@class FBUserSession, FBMemModelObject, FBNetworkImageView, UILabel, UIView;

@interface FBFacecastDonationSummaryView : UIView {

	FBUserSession* _session;
	FBMemModelObject*<FBHumanQueriedFundraiserToCharityFieldsProtocol> _fundraiser;
	BOOL _isFullSize;
	FBNetworkImageView* _fundraiserPictureView;
	UILabel* _campaignTitleLabel;
	UILabel* _fundraiserSubtitleLabel;
	UIView* _headerBottomBorder;
	UILabel* _numberLabel;
	UILabel* _numberSubtitleLabel;

}
-(id)initWithSession:(id)arg1 fundraiser:(id)arg2 isFullSize:(BOOL)arg3 ;
-(void)setNumberOfDonation:(long long)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

