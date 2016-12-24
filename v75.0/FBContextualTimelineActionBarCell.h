/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class FBActionBar, UIView;

@interface FBContextualTimelineActionBarCell : UITableViewCell {

	BOOL _showPlaceholder;
	FBActionBar* _actionBar;
	UIView* _placeholderView;
	UIView* _placeholderBorderView;
	UIView* _dividerView;

}

@property (nonatomic,retain) UIView * placeholderView;                    //@synthesize placeholderView=_placeholderView - In the implementation block
@property (nonatomic,retain) UIView * placeholderBorderView;              //@synthesize placeholderBorderView=_placeholderBorderView - In the implementation block
@property (nonatomic,retain) UIView * dividerView;                        //@synthesize dividerView=_dividerView - In the implementation block
@property (nonatomic,retain) FBActionBar * actionBar;                     //@synthesize actionBar=_actionBar - In the implementation block
@property (assign,nonatomic) BOOL showPlaceholder;                        //@synthesize showPlaceholder=_showPlaceholder - In the implementation block
+(void)setContextualTimelineActionBarCellShowDividerView:(BOOL)arg1 actionBarConfigBuilder:(id)arg2 ;
-(FBActionBar *)actionBar;
-(void)setActionBar:(FBActionBar *)arg1 ;
-(id)initWithFontSize:(unsigned long long)arg1 actionBarSize:(unsigned long long)arg2 ;
-(void)setPlaceholderBorderView:(UIView *)arg1 ;
-(UIView *)placeholderBorderView;
-(UIView *)dividerView;
-(void)setDividerView:(UIView *)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setPlaceholderView:(UIView *)arg1 ;
-(UIView *)placeholderView;
-(void)setShowPlaceholder:(BOOL)arg1 ;
-(BOOL)showPlaceholder;
@end
