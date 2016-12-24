/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAssetsLibraryListener.h>

@class FBUserSession, FBAssetsLibrary, NSMutableDictionary, NSDictionary, FBProductionPromptsSuggestedSouvenirManagerListenerAnnouncer, NSString;

@interface FBProductionPromptsSuggestedSouvenirManager : NSObject <FBAssetsLibraryListener> {

	FBUserSession* _session;
	FBAssetsLibrary* _assetsLibrary;
	NSMutableDictionary* _suggestedSouvenirGraphQLIDsToSuggestedSouvenirs;
	NSDictionary* _suggestedSouvenirGraphQLIDsToGeneratedCollections;
	BOOL _updating;
	BOOL _needsUpdate;
	FBProductionPromptsSuggestedSouvenirManagerListenerAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_groupURL;
-(void)assetsLibraryDidLoadAssets;
-(void)updateCollections;
-(void)addSuggestedSouvenirsAndUpdateIfNecessary:(id)arg1 ;
-(id)magicStoryCollectionForSuggestedSouvenirGraphQLID:(id)arg1 ;
-(void)dealloc;
-(id)initWithSession:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
