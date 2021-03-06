/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBHasFeedUnitNuxProtocol.h>
#import <Facebook/FBFeedOutboundClickCoordinatorListener.h>
#import <Facebook/FBFeedUnitNuxPresenterListener.h>

@protocol FBQueriedFeedUnitFieldsProtocol;
@class FBMemModelObject, FBUserSession, NSString;

@interface FBSaveButtonOverlayNuxHandler : NSObject <FBHasFeedUnitNuxProtocol, FBFeedOutboundClickCoordinatorListener, FBFeedUnitNuxPresenterListener> {

	FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> _unit;
	BOOL _isSave;
	BOOL _isEligibleForSaveOverlayButtonNux;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isEligibleForNux:(id)arg1 layoutIdiom:(unsigned long long)arg2 ;
-(id)storyGraphQLID;
-(id)nuxID;
-(id)triggerIDs;
-(id)nuxMessage;
-(void)nuxPresenterDidPresent:(id)arg1 ;
-(void)nuxPresenterDidDismiss:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)coordinator:(id)arg1 willReturnFromOutboundClickWithIdentifier:(id)arg2 withTimespan:(double)arg3 source:(int)arg4 ;
-(id)identifierForCoordinator:(id)arg1 ;
-(BOOL)_sharedNuxEligibilityWithTimespan:(double)arg1 ;
-(id)_extrasForNuxLogging;
-(BOOL)_isEligibleForNuxWithIdentifier:(id)arg1 withTimespan:(double)arg2 ;
-(id)nuxBody;
-(int)eligibleForTriggerID:(id)arg1 ;
-(id)initWithSession:(id)arg1 unit:(id)arg2 ;
@end

