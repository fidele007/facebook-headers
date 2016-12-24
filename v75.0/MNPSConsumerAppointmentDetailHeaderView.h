/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBWebImageViewListener.h>

@class UIView, UIImageView, NSString;

@interface MNPSConsumerAppointmentDetailHeaderView : UIView <FBWebImageViewListener> {

	UIView* _dividerView;
	UIImageView* _headerView;
	UIView* _imageBorderView;
	UIView* _imageView;
	UIView* _titleLabel;
	UIView* _subtitleLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)webImageViewDidSetImage:(id)arg1 fromCache:(BOOL)arg2 ;
-(void)fb_addDividerView;
-(void)fb_addHeaderView;
-(void)fb_addImageBorderView;
-(void)fb_addImageViewWithDownloaderFactory:(id)arg1 imageURL:(id)arg2 ;
-(void)fb_addTitleLabelWithText:(id)arg1 ;
-(void)fb_addSubtitleLabelWithText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 dataModel:(id)arg2 downloaderFactory:(id)arg3 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

