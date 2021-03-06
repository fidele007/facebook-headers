/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPageCTAViewControllerDelegate.h>

@protocol FBNavigationCoordinator;
@class FBUserSession, NSString, UIViewController, FBPageCTAConfirmationViewController, FBPageCTALogger;

@interface FBPageCreateCTASessionController : NSObject <FBPageCTAViewControllerDelegate> {

	FBUserSession* _session;
	id<FBNavigationCoordinator> _navigationCoordinator;
	NSString* _pageID;
	UIViewController* _createCTAController;
	FBPageCTAConfirmationViewController* _confirmationController;
	FBPageCTALogger* _logger;
	unsigned long long _actionType;
	NSString* _pagePhoneNumber;
	NSString* _countryCode;
	NSString* _analyticsUUID;
	NSString* _ctaType;
	NSString* _ctaLabel;
	NSString* _ctaID;
	unsigned long long _targetType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)navigationCoordinator;
-(void)dismissCreateOrEditCTAViewControllerWithCTAName:(id)arg1 shouldShowConfirmation:(BOOL)arg2 updatedCallToActionData:(id)arg3 ;
-(void)didUpdateGetQuoteForm;
-(void)_showConfirmationOverlay:(id)arg1 actionType:(unsigned long long)arg2 ;
-(void)_dismissConfirmationOverlay;
-(id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 pageID:(id)arg3 pagePhoneNumber:(id)arg4 countryCode:(id)arg5 ctaType:(id)arg6 ctaLabel:(id)arg7 ctaID:(id)arg8 targetType:(unsigned long long)arg9 ;
-(void)_configCreateCTAItemController;
-(void)_didTapCancel;
-(void)_update;
-(void)startSession;
@end

