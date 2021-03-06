/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/SRCompositeFragmentController.h>

@class SRSingleViewFragmentController, SRCollectionFragmentController, SRAddForegroundLayoutFragment;

@interface SRAddForegroundFragmentController : SRCompositeFragmentController {

	SRSingleViewFragmentController* _foregroundFragment;
	SRCollectionFragmentController* _contentFragment;
	SRAddForegroundLayoutFragment* _addForegroundLayout;

}

@property (nonatomic,readonly) SRSingleViewFragmentController * foregroundFragment;              //@synthesize foregroundFragment=_foregroundFragment - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets; 
@property (assign,nonatomic) BOOL limitToBounds; 
@property (assign,nonatomic) BOOL hideForeground; 
-(id)layoutFragment;
-(void)setHideForeground:(BOOL)arg1 ;
-(CGRect)parentLevelBoundsOfChildBounds:(CGRect)arg1 forChildFragment:(unsigned long long)arg2 ;
-(void)updateLayoutUponChildChange;
-(void)setLimitToBounds:(BOOL)arg1 ;
-(id)initWithContentFragment:(id)arg1 foregroundFragment:(id)arg2 ;
-(SRSingleViewFragmentController *)foregroundFragment;
-(BOOL)limitToBounds;
-(BOOL)hideForeground;
-(UIEdgeInsets)edgeInsets;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
@end

