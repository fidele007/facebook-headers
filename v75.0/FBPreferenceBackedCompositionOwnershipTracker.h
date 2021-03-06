/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCompositionOwnershipTracker.h>

@class NSMutableDictionary, NSString, FBPreferences;

@interface FBPreferenceBackedCompositionOwnershipTracker : NSObject <FBCompositionOwnershipTracker> {

	NSMutableDictionary* _compositionIDs;
	NSString* _cacheKey;
	BOOL _hasReadCompositionIDsFromPreferences;
	FBPreferences* _preferences;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPreferences:(id)arg1 moduleIdentifier:(id)arg2 ;
-(id)unpublishedOwnedCompositionIDs;
-(void)willStartPublishingOwnedPublicationWithCompositionID:(id)arg1 ;
-(void)successfullyPublishedCompositionWithCompositionID:(id)arg1 ;
-(id)retrieveCompositionIDs;
@end

