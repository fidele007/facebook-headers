/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAdInterfacesPromotionRequestsProviderProtocol.h>

@class NSString;

@interface FBPageAdminLocalAwarenessRequestProvider : NSObject <FBAdInterfacesPromotionRequestsProviderProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_parseTargetingSpec:(id)arg1 ;
+(id)_parseDefaultTargetingLocation:(id)arg1 boostedComponent:(id)arg2 ;
-(id)initializationQueryWithPromotableObjectID:(id)arg1 audience:(id)arg2 pageID:(id)arg3 restoreSavedSettings:(BOOL)arg4 ;
-(id)_parseBoostedComponentFromResponse:(id)arg1 request:(id)arg2 ;
-(id)_parsePage:(id)arg1 graphQLQuery:(id)arg2 ;
-(id)parseAdminInfoRequestResponse:(id)arg1 request:(id)arg2 session:(id)arg3 promotion:(id)arg4 defaultSpec:(id)arg5 ;
-(void)_parseLocalAwarenessExtraData:(id)arg1 addTo:(id)arg2 ;
-(id)_parseCallToActionOptions:(id)arg1 availableCallToActionTypes:(id)arg2 session:(id)arg3 ;
-(id)parseAdPreviewRequestResponse:(id)arg1 request:(id)arg2 session:(id)arg3 ;
-(id)initializationRequestWithPromotableObjectID:(id)arg1 pageID:(id)arg2 selections:(id)arg3 restoreSavedSettings:(BOOL)arg4 session:(id)arg5 ;
-(id)adminInfoRequestWithPageID:(id)arg1 promotableObjectID:(id)arg2 stickyBudget:(id)arg3 selections:(id)arg4 ;
-(id)budgetRecommendationsRequestWithPageID:(id)arg1 promotableObjectID:(id)arg2 stickyBudget:(id)arg3 customBudget:(id)arg4 selections:(id)arg5 callbackPerformer:(id)arg6 ;
-(id)customBudgetReachEstimationsRequestWithPageID:(id)arg1 promotableObjectID:(id)arg2 selections:(id)arg3 callbackPerformer:(id)arg4 ;
-(id)validationRequestWithPromotableObjectID:(id)arg1 pageID:(id)arg2 ;
-(id)adPreviewRequestWithAccountID:(id)arg1 creative:(id)arg2 session:(id)arg3 promotableObjectID:(id)arg4 ;
-(id)defaultAdPreviewRequestWithPromotableObjectID:(id)arg1 pageID:(id)arg2 session:(id)arg3 ;
-(id)parseDefaultAdPreviewRequestResponse:(id)arg1 request:(id)arg2 session:(id)arg3 ;
-(id)parseInitializationRequestResponse:(id)arg1 request:(id)arg2 session:(id)arg3 ;
-(id)parseAdminInfoRequestResponse:(id)arg1 request:(id)arg2 session:(id)arg3 ;
-(id)parseValidationRequestResponse:(id)arg1 request:(id)arg2 ;
-(id)parseBudgetRecommendationsRequestResponse:(id)arg1 request:(id)arg2 session:(id)arg3 ;
-(id)parseCustomBudgetReachEstimationsRequestResponse:(id)arg1 request:(id)arg2 session:(id)arg3 ;
@end

