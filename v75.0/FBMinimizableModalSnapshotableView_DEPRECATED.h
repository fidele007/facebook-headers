/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface FBMinimizableModalSnapshotableView_DEPRECATED : UIView {

	UIView* _view;
	UIView* _snapshot;
	CGSize _snapshotSize;

}

@property (nonatomic,readonly) UIView * realView; 
@property (assign,nonatomic) BOOL showSnapshot; 
-(BOOL)showSnapshot;
-(UIView *)realView;
-(void)setShowSnapshot:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithView:(id)arg1 ;
@end

