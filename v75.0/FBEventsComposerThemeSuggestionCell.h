/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIView, UIImageView, UILabel, FBWebImageFocusPointLayout, FBWebImageView, FBUserSession;

@interface FBEventsComposerThemeSuggestionCell : UICollectionViewCell {

	unsigned long long _style;
	UIView* _overlayView;
	UIImageView* _glyphImageView;
	UILabel* _overlayTextView;
	FBWebImageFocusPointLayout* _focusLayout;
	FBWebImageView* _webImageView;
	FBUserSession* _session;

}
-(void)configureWithSession:(id)arg1 themePhoto:(id)arg2 style:(unsigned long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
