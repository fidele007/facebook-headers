/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Facebook/FBCompleteProfileMegaphoneFooterDelegate.h>

@protocol FBCompleteProfileMegaphoneViewDelegate;
@class UITableView, UIView, FBCompleteProfileMegaphoneQuestionView, CAShapeLayer, FBCompleteProfileMegaphoneFooter, FBMemProfileQuestion, NSIndexPath, FBUserSession, FBCompleteProfileMegaphoneConfigurator, UIButton, FBCompleteProfileMegaphoneHeader, NSString;

@interface FBCompleteProfileMegaphoneView : UIView <UITableViewDelegate, UITableViewDataSource, FBCompleteProfileMegaphoneFooterDelegate> {

	UITableView* _megaphoneTableView;
	UIView* _shadowView;
	FBCompleteProfileMegaphoneQuestionView* _accessoryQuestionView;
	CAShapeLayer* _borderLayer;
	CAShapeLayer* _roundCorderMaskLayer;
	FBCompleteProfileMegaphoneFooter* _megaphoneTableViewFooter;
	FBMemProfileQuestion* _profileQuestion;
	NSIndexPath* _selectedInferenceRow;
	FBUserSession* _session;
	FBCompleteProfileMegaphoneConfigurator* _configurator;
	UIButton* _closeButton;
	int _state;
	id<FBCompleteProfileMegaphoneViewDelegate> _delegate;
	unsigned long long _privacyIconType;
	FBCompleteProfileMegaphoneHeader* _megaphoneTableViewHeader;

}

@property (assign,nonatomic,__weak) id<FBCompleteProfileMegaphoneViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int state;                                                                  //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long privacyIconType;                                         //@synthesize privacyIconType=_privacyIconType - In the implementation block
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) FBCompleteProfileMegaphoneHeader * megaphoneTableViewHeader;              //@synthesize megaphoneTableViewHeader=_megaphoneTableViewHeader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 configurator:(id)arg3 ;
-(FBCompleteProfileMegaphoneHeader *)megaphoneTableViewHeader;
-(void)setPrivacyIconType:(unsigned long long)arg1 ;
-(void)setProfileQuestion:(id)arg1 ;
-(void)setProfileCompletePercentage:(id)arg1 ;
-(void)typeaheadSelectedWithPage:(id)arg1 ;
-(void)completeProfileMegaphoneFooterDidTapSave:(id)arg1 ;
-(void)completeProfileMegaphoneFooterDidTapSkip:(id)arg1 ;
-(void)completeProfileMegaphoneFooterDidTapPrivacySelector:(id)arg1 withPrivacyButton:(id)arg2 ;
-(unsigned long long)privacyIconType;
-(void)_buildCloseButton;
-(void)_closeMegaphone;
-(void)setDelegate:(id<FBCompleteProfileMegaphoneViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBCompleteProfileMegaphoneViewDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(double)height;
@end

