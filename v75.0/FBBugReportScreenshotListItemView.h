/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBBugReportPlayVideoButtonOverlayView, UIButton, FBBugReportRemoveButtonView;

@interface FBBugReportScreenshotListItemView : UIView {

	CGSize _imageSize;
	FBBugReportPlayVideoButtonOverlayView* _playVideoButtonOverlayView;
	int _itemType;
	UIButton* _screenshotThumbnail;
	FBBugReportRemoveButtonView* _removeButton;

}

@property (nonatomic,readonly) UIButton * screenshotThumbnail;                        //@synthesize screenshotThumbnail=_screenshotThumbnail - In the implementation block
@property (nonatomic,retain) FBBugReportRemoveButtonView * removeButton;              //@synthesize removeButton=_removeButton - In the implementation block
@property (assign) int itemType;                                                      //@synthesize itemType=_itemType - In the implementation block
+(double)removeButtonRadius;
-(UIButton *)screenshotThumbnail;
-(void)setRemoveButton:(FBBugReportRemoveButtonView *)arg1 ;
-(int)widthAdjustedToHeight:(int)arg1 ;
-(id)initWithImage:(id)arg1 itemType:(int)arg2 ;
-(void)layoutSubviews;
-(int)itemType;
-(void)setItemType:(int)arg1 ;
-(FBBugReportRemoveButtonView *)removeButton;
@end

