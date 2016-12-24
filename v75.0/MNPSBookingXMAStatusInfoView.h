/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBProfServicesBookingDataModel, MNPSBookingSharedHeaderView, MNPSBookingSharedServiceInfoComboView, NSArray;

@interface MNPSBookingXMAStatusInfoView : UIView {

	FBProfServicesBookingDataModel* _viewModel;
	MNPSBookingSharedHeaderView* _headerView;
	MNPSBookingSharedServiceInfoComboView* _infoComboView;
	NSArray* _ctaViews;
	BOOL _actsAsAdmin;

}
+(CGSize)sizeThatFits:(CGSize)arg1 viewModel:(id)arg2 actsAsAdmin:(BOOL)arg3 ;
-(id)initWithViewModel:(id)arg1 actsAsAdmin:(BOOL)arg2 delegate:(id)arg3 imageDownloader:(id)arg4 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

