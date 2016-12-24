/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBHumanQueriedFundraiserToCharityFieldsProtocol, FBFacecastViewerEndDonationDetailsViewDelegate;
@class FBUserSession, FBProfilePictureWithBadgeView, FBNetworkImageView, UIButton, UILabel, FBMemModelObject, FBMemVideo, NSString;

@interface FBFacecastViewerEndDonationDetailsView : UIView {

	FBUserSession* _session;
	FBProfilePictureWithBadgeView* _profilePictureView;
	FBNetworkImageView* _charityPictureView;
	UIButton* _ownerProfileButton;
	UIButton* _charityProfileButton;
	UIButton* _donateButton;
	UILabel* _donateLabel;
	UILabel* _donateSubtitleLabel;
	FBMemModelObject*<FBHumanQueriedFundraiserToCharityFieldsProtocol> _donationCampaign;
	FBMemVideo* _video;
	BOOL _hasDonated;
	NSString* _broadcasterName;
	id<FBFacecastViewerEndDonationDetailsViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBFacecastViewerEndDonationDetailsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_charityTapped;
-(void)_profileTapped;
-(id)_donateSubtitleLabelString;
-(BOOL)_useSmallerPaddingForSize:(CGSize)arg1 ;
-(BOOL)_isVideoOwnerPage;
-(id)_donateLabelString;
-(void)_donateButtonTapped;
-(id)initWithFrame:(CGRect)arg1 broadcasterName:(id)arg2 session:(id)arg3 delegate:(id)arg4 ;
-(void)setVideoWithDonationCampaign:(id)arg1 ;
-(void)setDelegate:(id<FBFacecastViewerEndDonationDetailsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBFacecastViewerEndDonationDetailsViewDelegate>)delegate;
@end

