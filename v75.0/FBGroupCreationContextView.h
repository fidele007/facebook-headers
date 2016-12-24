/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIControl.h>

@class UILabel, UIImageView, NSString;

@interface FBGroupCreationContextView : UIControl {

	UILabel* _titleLabel;
	UILabel* _contextNameLabel;
	UIImageView* _chevronImageView;
	BOOL _shouldHideChevron;
	NSString* _contextName;

}

@property (nonatomic,copy) NSString * contextName;                //@synthesize contextName=_contextName - In the implementation block
@property (assign,nonatomic) BOOL shouldHideChevron;              //@synthesize shouldHideChevron=_shouldHideChevron - In the implementation block
-(BOOL)shouldHideChevron;
-(id)initWithFrame:(CGRect)arg1 contextType:(unsigned long long)arg2 ;
-(void)setShouldHideChevron:(BOOL)arg1 ;
-(NSString *)contextName;
-(void)setContextName:(NSString *)arg1 ;
-(void)layoutSubviews;
@end
