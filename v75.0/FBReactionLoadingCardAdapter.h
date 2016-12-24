/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionBaseCardAdapter.h>

@class FBReactionCardView, UIView, FBReactionLoadingCardView;

@interface FBReactionLoadingCardAdapter : FBReactionBaseCardAdapter {

	FBReactionCardView* _cardBasicView;
	UIView* _cardView;
	FBReactionLoadingCardView* _loadingCardView;
	unsigned long long _renderIdiom;

}

@property (assign,nonatomic) unsigned long long renderIdiom;              //@synthesize renderIdiom=_renderIdiom - In the implementation block
-(void)setRenderIdiom:(unsigned long long)arg1 ;
-(unsigned long long)renderIdiom;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 ;
-(void)stopAnimating;
-(void)startAnimating;
-(id)cardView;
@end
