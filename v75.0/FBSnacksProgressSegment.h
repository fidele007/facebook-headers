/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView;

@interface FBSnacksProgressSegment : UIView {

	UIView* _progressView;
	BOOL _selected;
	double _progress;

}

@property (assign,nonatomic) double progress;              //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL selected;                //@synthesize selected=_selected - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(void)setProgress:(double)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(double)progress;
@end

