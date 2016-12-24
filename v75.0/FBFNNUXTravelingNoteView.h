/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBProfileAvatarView, CALayer, CAShapeLayer, FBFacepileView, UILabel;

@interface FBFNNUXTravelingNoteView : UIView {

	FBProfileAvatarView* _profilePictureView;
	CALayer* _maskLayer;
	CALayer* _shadowLayer;
	CAShapeLayer* _twoDotMask;
	FBFacepileView* _facepileView;
	CAShapeLayer* _dashLineLayer;
	UILabel* _userTravelingDescriptionLabel;
	UILabel* _friendsInNearbyFriendsSummaryLabel;

}
-(id)initWithSession:(id)arg1 appearanceConfiguration:(id)arg2 upsellDataSource:(id)arg3 ;
-(id)_loadFacepileViewWithSession:(id)arg1 upsellDataSource:(id)arg2 ;
-(double)_calculateIntrinsicContentHeightWithWidth:(double)arg1 ;
-(void)_layoutTwoDotMaskWithYPosition:(double)arg1 ;
-(void)_layoutDashLineWithYPosition:(double)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

