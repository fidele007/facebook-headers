/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBBrowserLayoutPulseViewConfig, UILabel, UIImageView, NSString;

@interface FBBrowserPulseView : UIView {

	FBBrowserLayoutPulseViewConfig* _layoutConfig;
	UILabel* _pulseCount;
	UILabel* _pulseDescription;
	UIImageView* _pulseIcon;
	NSString* _pulseCountString;

}

@property (nonatomic,copy) NSString * pulseCountString;              //@synthesize pulseCountString=_pulseCountString - In the implementation block
-(id)initWithLayoutConfig:(id)arg1 ;
-(void)setPulseCountString:(NSString *)arg1 ;
-(NSString *)pulseCountString;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
