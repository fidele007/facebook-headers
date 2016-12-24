/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIScrollView.h>
#import <Facebook/FBKeyboardObserverDelegate.h>
#import <Facebook/FBPageCTAGetQuoteSharedTextInputViewResizeDelegate.h>

@protocol FBPageCTAGetQuoteQuestionsViewDelegate;
@class NSArray, FBKeyboardObserver, FBKeyboardTracker, FBPageCTAGetQuoteIntroView, FBPageCTAGetQuoteFormDescriptionView, FBPageCTAGetQuoteContactInfoView, FBPageCTAGetQuoteQuestionsView, NSString;

@interface FBPageCTAGetQuoteConfigView : UIScrollView <FBKeyboardObserverDelegate, FBPageCTAGetQuoteSharedTextInputViewResizeDelegate> {

	NSArray* _getQuoteConfigViews;
	id<FBPageCTAGetQuoteQuestionsViewDelegate> _delegate;
	FBKeyboardObserver* _keyboardObserver;
	FBKeyboardTracker* _keyboardTracker;
	UIEdgeInsets _contentInsets;
	FBPageCTAGetQuoteIntroView* _introView;
	FBPageCTAGetQuoteFormDescriptionView* _formDescriptionView;
	FBPageCTAGetQuoteContactInfoView* _contactInfoView;
	FBPageCTAGetQuoteQuestionsView* _questionView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)_startKeyboardObserving;
-(void)_stopKeyboardObserving;
-(id)getGetQuoteCreateFormData;
-(BOOL)showErrorAlertForQuestionInputIfNeeded;
-(BOOL)showErrorAlertForTitleInputIfNeeded;
-(id)initWithDelegate:(id)arg1 userInfo:(id)arg2 questionTypes:(id)arg3 pageName:(id)arg4 currentFormData:(id)arg5 actionType:(unsigned long long)arg6 imageDownloaderFactory:(id)arg7 ;
-(void)_setUpGetQuoteConfigViewsWithUserInfo:(id)arg1 questionTypes:(id)arg2 pageName:(id)arg3 currentFormData:(id)arg4 actionType:(unsigned long long)arg5 imageDownloaderFactory:(id)arg6 ;
-(void)_setScrollViewContentInset;
-(void)setNeedsUpdateTextInputView;
-(void)dealloc;
-(void)layoutSubviews;
@end

