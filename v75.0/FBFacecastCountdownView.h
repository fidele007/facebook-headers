/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel;

@interface FBFacecastCountdownView : UIView {

	UILabel* _numberView;
	int _displayValue;

}

@property (assign,nonatomic) int displayValue;              //@synthesize displayValue=_displayValue - In the implementation block
-(void)setDisplayValue:(int)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(int)displayValue;
@end
