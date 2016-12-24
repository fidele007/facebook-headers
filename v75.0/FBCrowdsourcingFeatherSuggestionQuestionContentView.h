/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol FBCrowdsourcingFeatherSuggestionQuestionContentViewDelegate;
@class UILabel, FBCrowdsourcingFeatherSuggestionTextInput, UIButton, FBMemPlaceQuestion, NSString;

@interface FBCrowdsourcingFeatherSuggestionQuestionContentView : UIView <UITextFieldDelegate> {

	UILabel* _questionLabel;
	UILabel* _optionalLabel;
	FBCrowdsourcingFeatherSuggestionTextInput* _suggestionTextInput;
	UIButton* _checkBoxButton;
	id<FBCrowdsourcingFeatherSuggestionQuestionContentViewDelegate> _delegate;
	FBMemPlaceQuestion* _placeQuestion;

}

@property (assign,nonatomic,__weak) id<FBCrowdsourcingFeatherSuggestionQuestionContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBMemPlaceQuestion * placeQuestion;                                                         //@synthesize placeQuestion=_placeQuestion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBMemPlaceQuestion *)placeQuestion;
-(id)initWithFrame:(CGRect)arg1 placeQuestion:(id)arg2 ;
-(void)makeInputFirstResponder;
-(id)getSuggestionText;
-(double)_layoutLabel:(id)arg1 inContentRect:(CGRect)arg2 renderYPos:(double)arg3 hasNextLabel:(BOOL)arg4 ;
-(void)_didTapOnCheckBoxButton;
-(void)setDelegate:(id<FBCrowdsourcingFeatherSuggestionQuestionContentViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBCrowdsourcingFeatherSuggestionQuestionContentViewDelegate>)delegate;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)_textFieldDidChange:(id)arg1 ;
@end
