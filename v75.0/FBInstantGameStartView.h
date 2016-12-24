/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBInstantGamePlayButtonViewDelegate.h>
#import <Facebook/FBInstantGameChallengeCardViewDelegate.h>

@protocol FBInstantGameStartViewDelegate;
@class FBUserSession, FBQuicksilverGameInfo, FBInstantGameUIMetrics, FBInstantGamePlayButtonView, FBInstantGameChallengeCardView, FBInstantGameLegalTextView, FBInstantGameLoadingCardView, UIScrollView, NSString;

@interface FBInstantGameStartView : UIView <FBInstantGamePlayButtonViewDelegate, FBInstantGameChallengeCardViewDelegate> {

	FBUserSession* _session;
	FBQuicksilverGameInfo* _gameInfo;
	FBInstantGameUIMetrics* _metrics;
	FBInstantGamePlayButtonView* _playButton;
	FBInstantGameChallengeCardView* _challengeCardView;
	FBInstantGameLegalTextView* _legalTextView;
	BOOL _shouldShowLegalText;
	FBInstantGameLoadingCardView* _loadingCardView;
	UIScrollView* _leaderboardView;
	id<FBInstantGameStartViewDelegate> _delegate;

}

@property (nonatomic,readonly) FBInstantGameLoadingCardView * loadingCardView;                //@synthesize loadingCardView=_loadingCardView - In the implementation block
@property (nonatomic,retain) UIScrollView * leaderboardView;                                  //@synthesize leaderboardView=_leaderboardView - In the implementation block
@property (assign,nonatomic,__weak) id<FBInstantGameStartViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLegalText;                                        //@synthesize shouldShowLegalText=_shouldShowLegalText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBInstantGameLoadingCardView *)loadingCardView;
-(void)didTapInstantGamePlayButtonView:(id)arg1 ;
-(id)initWithSession:(id)arg1 gameInfo:(id)arg2 ;
-(void)instantGameChallengeCardViewDidTapPlayButton:(id)arg1 ;
-(void)_layoutLoadingCard;
-(CGPoint)_leaderboardBelowScreenContentOffset;
-(CGPoint)_leaderboardInitialContentOffset;
-(void)_animateScrollView:(id)arg1 toContentOffset:(CGPoint)arg2 animationKey:(id)arg3 completion:(/*^block*/id)arg4 ;
-(CGPoint)loadingCardViewCenterAfterLeaderboardIsPresentated;
-(void)_animateView:(id)arg1 toCenter:(CGPoint)arg2 animationKey:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_layoutChallengeCard;
-(void)setLeaderboardView:(UIScrollView *)arg1 ;
-(void)setShouldShowLegalText:(BOOL)arg1 ;
-(void)animateInLoadingCardWithCompletion:(/*^block*/id)arg1 ;
-(void)animateOutLoadingCardWithCompletion:(/*^block*/id)arg1 ;
-(void)animateInContentViewWithCompletion:(/*^block*/id)arg1 ;
-(void)animateInPlayButtonWithCompletion:(/*^block*/id)arg1 ;
-(void)animateInChallengeCardWithGroupThreadName:(id)arg1 opponents:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)animateOutStartViewWithCompletion:(/*^block*/id)arg1 ;
-(UIScrollView *)leaderboardView;
-(BOOL)shouldShowLegalText;
-(void)_layoutPlayButton;
-(void)setDelegate:(id<FBInstantGameStartViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBInstantGameStartViewDelegate>)delegate;
@end

