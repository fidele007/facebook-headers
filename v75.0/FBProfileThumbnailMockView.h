/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UIImageView;

@interface FBProfileThumbnailMockView : UIView {

	NSArray* _imageViews;
	UIImageView* _thumbnailView;
	double _deviceHeightRatio;
	double _deviceWidthRatio;

}
-(id)initWithNumberOfImageOccurances:(long long)arg1 thumbnail:(id)arg2 imageDownloader:(id)arg3 deviceHeightRatio:(double)arg4 deviceWidthRatio:(double)arg5 ;
-(void)updateThumbnail:(id)arg1 ;
-(CGRect)getFrameOfThumbnail;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
