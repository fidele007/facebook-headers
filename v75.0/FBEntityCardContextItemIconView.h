/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class FBNetworkImageView, FBMemImage, NSString, FBRatingPillView;

@interface FBEntityCardContextItemIconView : UIView {

	FBNetworkImageView* _imageView;
	FBMemImage* _image;
	NSString* _imageSizing;
	FBRatingPillView* _ratingsView;

}

@property (nonatomic,retain) FBRatingPillView * ratingsView;              //@synthesize ratingsView=_ratingsView - In the implementation block
-(void)setIconWithRating:(float)arg1 ;
-(FBRatingPillView *)ratingsView;
-(void)setRatingsView:(FBRatingPillView *)arg1 ;
-(void)layoutSubviews;
-(void)setIcon:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end
