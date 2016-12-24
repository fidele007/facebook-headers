/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentHandler.h>

@protocol FBNavigationCoordinator;
@class FBUserSession, FBURLHandlerWebViewProvider, FBTimer, NSString;

@interface FBURLIntentHandler : NSObject <FBIntentHandler> {

	FBUserSession* _session;
	FBURLHandlerWebViewProvider* _URLHandlerWebViewProvider;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBTimer* _rapidFeedbackSurveyTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleIntent:(id)arg1 ;
-(id)initWithSession:(id)arg1 URLHandlerWebViewProvider:(id)arg2 navigationCoordinator:(id)arg3 ;
-(void)_logOpenLink:(id)arg1 intentAnalyticsInfo:(id)arg2 ;
-(BOOL)_tryHandlingWithNavigationCoordinatorForURL:(id)arg1 intent:(id)arg2 ;
-(void)_tryPresentingEnagementSurvey;
@end

