/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/PMASavedReplyComposerViewControllerDelegate.h>

@protocol FBPageCTAViewControllerDelegate;
@class FBUserSession, NSString, FBPageCTALogger, NSArray, FBPageCTAMessageView, FBMemPageCreateCTAItem, PMASavedReplyComposerViewController;

@interface FBPageCTAMessageViewController : UIViewController <PMASavedReplyComposerViewControllerDelegate> {

	id<FBPageCTAViewControllerDelegate> _delegate;
	FBUserSession* _session;
	NSString* _pageId;
	FBPageCTALogger* _logger;
	NSArray* _fieldsData;
	NSString* _analyticsUUID;
	NSString* _ctaId;
	unsigned long long _actionType;
	FBPageCTAMessageView* _messageView;
	FBMemPageCreateCTAItem* _ctaItem;
	BOOL _instantReplyEnabled;
	BOOL _isEdit;
	unsigned long long _charLimit;
	NSString* _instantReplyText;
	PMASavedReplyComposerViewController* _composerViewController;
	NSString* _backingString;
	NSArray* _macros;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_saveButtonItemTapped;
-(void)_didTapEditReply;
-(void)_didFinishCreateOrEditCTA:(id)arg1 ;
-(void)_retrieveMacros;
-(void)_setupInstantReplyConfigsWithMacros:(id)arg1 ;
-(void)shouldUpdateRepliesList;
-(void)didEditWithoutSavingReplyWithText:(id)arg1 ;
-(id)initWithSession:(id)arg1 pageId:(id)arg2 delegate:(id)arg3 analyticsUUID:(id)arg4 ctaId:(id)arg5 ctaItem:(id)arg6 isEdit:(BOOL)arg7 ;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

