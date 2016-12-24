/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIButton.h>

@class UILabel, UIImageView, NSString;

@interface FBFNNUXShareWithButton : UIButton {

	UILabel* _shareWithLabel;
	UILabel* _sharingOptionLabel;
	UIImageView* _accessoryImageView;
	NSString* _selectedPrivacyOptionLabel;

}

@property (nonatomic,copy) NSString * selectedPrivacyOptionLabel;              //@synthesize selectedPrivacyOptionLabel=_selectedPrivacyOptionLabel - In the implementation block
-(void)_configureAppearance:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 appearanceConfiguration:(id)arg2 ;
-(void)setSelectedPrivacyOptionLabel:(NSString *)arg1 ;
-(NSString *)selectedPrivacyOptionLabel;
-(void)layoutSubviews;
@end

