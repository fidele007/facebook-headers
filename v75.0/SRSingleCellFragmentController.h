/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/SRSingleViewFragmentController.h>

@class SRFragmentCell, UIColor;

@interface SRSingleCellFragmentController : SRSingleViewFragmentController {

	SRFragmentCell* _cell;
	BOOL _userInteractionEnabled;
	UIColor* _backgroundColor;

}

@property (nonatomic,copy) UIColor * backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) BOOL userInteractionEnabled;              //@synthesize userInteractionEnabled=_userInteractionEnabled - In the implementation block
-(Class)classOfSingleCell;
-(double)heightOfSingleCell;
-(void)configureSingleCell:(id)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(BOOL)userInteractionEnabled;
@end

