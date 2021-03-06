/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIVisualEffectView, UILabel, FBVoiceSearchInitialSuggestionsView, FBSearchRequestRetryErrorView, FBVoiceSearchMicPad;

@interface FBVoiceSearchView : UIView {

	UIVisualEffectView* _blurView;
	UILabel* _queryLabel;
	FBVoiceSearchInitialSuggestionsView* _initialSuggestionsView;
	FBSearchRequestRetryErrorView* _errorView;
	FBVoiceSearchState _state;
	FBVoiceSearchMicPad* _micPad;

}

@property (nonatomic,retain) FBVoiceSearchMicPad * micPad;              //@synthesize micPad=_micPad - In the implementation block
-(void)setOnTapClose:(/*^block*/id)arg1 ;
-(void)setOnTapSearch:(/*^block*/id)arg1 ;
-(void)layoutQuery;
-(FBVoiceSearchMicPad *)micPad;
-(void)setMicPad:(FBVoiceSearchMicPad *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)updateState:(const FBVoiceSearchState*)arg1 ;
@end

