/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIActivityIndicatorView, UIColor;

@interface FBGroupsSpinnerTableFooterView : UITableViewCell {

	UIActivityIndicatorView* _activityIndicatorView;
	BOOL _loading;

}

@property (assign,nonatomic) BOOL loading;                     //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) UIColor * tintColor; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(BOOL)loading;
-(void)setLoading:(BOOL)arg1 ;
@end

