/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBFNNearbyUpsellCircleProfilePictureView, FBImageDownloader, FBFNNearbyUpsell3CircleProfilePictureData;

@interface FBFNNearbyUpsell3CircleProfilePictureView : UIView {

	FBFNNearbyUpsellCircleProfilePictureView* _profileImageView1;
	FBFNNearbyUpsellCircleProfilePictureView* _profileImageView2;
	FBFNNearbyUpsellCircleProfilePictureView* _profileImageView3;
	FBImageDownloader* _imageDownloader;
	FBFNNearbyUpsell3CircleProfilePictureData* _3PictureData;
	CGSize _previousSize;

}
-(void)_loadAllProfilePictures;
-(void)_loadProfileURL:(id)arg1 forImageView:(id)arg2 ;
-(void)loadAndSet3ProfilePictureData:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

