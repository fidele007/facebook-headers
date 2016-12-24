/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBCrowdsourcingFeatherPlaceViewDelegate.h>

@protocol FBCrowdsourcingFeatherVotingQuestionContentViewDelegate;
@class UILabel, NSArray, NSString, FBCrowdsourcingFeatherPlaceView, FBMemPlaceQuestion;

@interface FBCrowdsourcingFeatherVotingQuestionContentView : UIView <FBCrowdsourcingFeatherPlaceViewDelegate> {

	UILabel* _questionLabel;
	UILabel* _questionValueLabel;
	NSArray* _questionAnswers;
	UILabel* _optionalLabel;
	NSArray* _verticalAnswerButtons;
	NSArray* _verticalAnswerBorders;
	NSString* _orientation;
	FBCrowdsourcingFeatherPlaceView* _placeView;
	FBMemPlaceQuestion* _placeQuestion;
	id<FBCrowdsourcingFeatherVotingQuestionContentViewDelegate> _delegate;

}

@property (nonatomic,readonly) FBMemPlaceQuestion * placeQuestion;                                                     //@synthesize placeQuestion=_placeQuestion - In the implementation block
@property (assign,nonatomic,__weak) id<FBCrowdsourcingFeatherVotingQuestionContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)placeView:(id)arg1 didTapMapForPlace:(id)arg2 ;
-(void)placeView:(id)arg1 didTapPlace:(id)arg2 ;
-(FBMemPlaceQuestion *)placeQuestion;
-(id)initWithFrame:(CGRect)arg1 placeQuestion:(id)arg2 imageDownloader:(id)arg3 ;
-(double)_layoutLabel:(id)arg1 inContentRect:(CGRect)arg2 renderYPos:(double)arg3 hasNextLabel:(BOOL)arg4 ;
-(void)_didTapOnVerticalAnswerButton:(id)arg1 ;
-(void)setDelegate:(id<FBCrowdsourcingFeatherVotingQuestionContentViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBCrowdsourcingFeatherVotingQuestionContentViewDelegate>)delegate;
@end

