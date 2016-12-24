/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBUserSession, FBScenePath, FBFacecastImageActionView, UILabel, KFVector, KFVectorLayer, FBMemPerson, FBMemCurrencyAmount;

@interface FBFacecastTipEventView : UIView {

	FBUserSession* _session;
	FBScenePath* _scenePath;
	FBFacecastImageActionView* _tipGiverProfileImageView;
	UILabel* _tipTextLabel;
	KFVector* _vector;
	KFVectorLayer* _vectorLayer;
	KFVector* _optionalVector;
	KFVectorLayer* _optionalVectorLayer;
	unsigned long long _style;
	FBMemPerson* _tipGiver;
	FBMemCurrencyAmount* _tipAmount;

}

@property (assign,nonatomic) unsigned long long style;                     //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) FBMemPerson * tipGiver;                       //@synthesize tipGiver=_tipGiver - In the implementation block
@property (nonatomic,retain) FBMemCurrencyAmount * tipAmount;              //@synthesize tipAmount=_tipAmount - In the implementation block
+(CGSize)sizeWithinBounds:(CGSize)arg1 ;
-(FBMemPerson *)tipGiver;
-(void)setTipGiver:(FBMemPerson *)arg1 ;
-(FBMemCurrencyAmount *)tipAmount;
-(void)setTipAmount:(FBMemCurrencyAmount *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 scenePath:(id)arg3 ;
-(void)setTipGiver:(id)arg1 tipAmount:(id)arg2 isAnimationDone:(BOOL)arg3 targetOwnerID:(id)arg4 ;
-(void)_setTipTextLabel;
-(id)_loadVectorFromDisk:(id)arg1 ;
-(id)_loadOptionalVectorFromDisk:(id)arg1 ;
-(void)_startAnimation:(id)arg1 isAnimationDone:(BOOL)arg2 ;
-(id)_loadKFVectorFromFile:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
@end
