/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAccessTokenManaging.h>
#import <Facebook/FBLoggedInUserCryptoEngineProvider.h>

@class FBCredentials, FBAPISessionHTTPCookiesManager, FBCachedCredentialsFetcher, FBAPISessionLoginUUIDManager, FBAPISessionLoggedInUserIDCache, NSString, FBLoggedInUserCryptoKeyStoreFactory, FBLoggedInUserCryptoEngine, FBAccessTokenShareManager, FBAccessToken, NSArray, FBViewerInfo;

@interface FBAPISessionStore : NSObject <FBAccessTokenManaging, FBLoggedInUserCryptoEngineProvider> {

	FBCredentials* _cachedCredentials;
	FBAPISessionHTTPCookiesManager* _httpCookiesManager;
	FBCachedCredentialsFetcher* _credentialsFetcher;
	FBAPISessionLoginUUIDManager* _loginUUIDManager;
	BOOL _shouldFetchCredentials;
	BOOL _sessionKeychainWasLocked;
	FBAPISessionLoggedInUserIDCache* _loggedInUserIDCache;
	NSString* _cachedLoggedInUserID;
	BOOL _shouldFetchLoggedInUserID;
	NSString* _appGroup;
	FBLoggedInUserCryptoKeyStoreFactory* _loggedInUserCryptoKeyStoreFactory;
	FBLoggedInUserCryptoEngine* _loggedInUserCryptoEngine;
	FBAccessTokenShareManager* _tokenShareManager;
	BOOL _didLogin;
	NSString* _loginSecret;

}

@property (copy,readonly) NSString * loginSecret;                                 //@synthesize loginSecret=_loginSecret - In the implementation block
@property (copy,readonly) FBAccessToken * accessToken; 
@property (copy,readonly) NSArray * httpCookies; 
@property (copy,readonly) NSString * loggedInUserFBID; 
@property (copy,readonly) NSString * defaultViewerFBID; 
@property (nonatomic,readonly) BOOL sessionKeychainWasLocked; 
@property (nonatomic,readonly) BOOL didLogin;                                     //@synthesize didLogin=_didLogin - In the implementation block
@property (nonatomic,copy,readonly) FBViewerInfo * actingViewerInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)loginSecret;
-(NSString *)defaultViewerFBID;
-(FBViewerInfo *)actingViewerInfo;
-(id)accessTokenForFBID:(id)arg1 ;
-(void)updateAccessToken:(id)arg1 loggedInUserFBID:(id)arg2 userStorageServerKey:(id)arg3 httpCookies:(id)arg4 actingViewerInfo:(id)arg5 ;
-(BOOL)didLogin;
-(void)resetSessionStore;
-(BOOL)sessionKeychainWasLocked;
-(void)reloadSessionStoreIfWasLocked;
-(NSString *)loggedInUserFBID;
-(BOOL)userIsLoggedIn:(id*)arg1 ;
-(unsigned long long)expirationStatus;
-(NSArray *)httpCookies;
-(void)completedLoginWithAccessToken:(id)arg1 loggedInUserFBID:(id)arg2 userStorageServerKey:(id)arg3 httpCookies:(id)arg4 actingViewerInfo:(id)arg5 ;
-(void)setUpTokenManagerWithCredentialsPersister:(id)arg1 credentialsFetcher:(id)arg2 keychainBackupPolicy:(unsigned long long)arg3 shouldShareAppGroupToken:(BOOL)arg4 ;
-(id)initWithLoginSecret:(id)arg1 httpCookiesManager:(id)arg2 credentialsFetcher:(id)arg3 credentialsPersister:(id)arg4 loginUUIDManager:(id)arg5 loggedInUserIDCache:(id)arg6 loggedInUserCryptoKeyStoreFactory:(id)arg7 ;
-(id)initWithLoginSecret:(id)arg1 appGroup:(id)arg2 keychainBackupPolicy:(unsigned long long)arg3 cacheLoggedInUserID:(BOOL)arg4 ;
-(id)_fetchedOrCachedCredentials;
-(id)_fetchedOrCachedLoggedInUserID;
-(id)_fetchedOrCachedCredentialsWithKeychainLocked:(BOOL*)arg1 ;
-(void)_updateAndPersistCredentials:(id)arg1 ;
-(void)updateAccessToken:(id)arg1 ;
-(void)_updateAccessTokenForActingViewer:(id)arg1 ;
-(void)_persistHTTPCookies:(id)arg1 ;
-(void)_emitWillChangeNotificationForLoggedInUserFBID;
-(void)_deleteSession;
-(void)_emitDidChangeNotificationForLoggedInUserFBID;
-(BOOL)updateAccessToken:(id)arg1 forFBID:(id)arg2 ;
-(void)loadLoggedInUserCryptoEngineWithCompletionBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 callbackQueue:(id)arg3 ;
-(id)initWithHttpCookiesManager:(id)arg1 credentialsFetcher:(id)arg2 credentialsPersister:(id)arg3 loginUUIDManager:(id)arg4 loggedInUserIDCache:(id)arg5 loggedInUserCryptoKeyStoreFactory:(id)arg6 loginSecret:(id)arg7 appGroup:(id)arg8 shouldShareAppGroupToken:(BOOL)arg9 keychainBackupPolicy:(unsigned long long)arg10 ;
-(id)initWithLoginSecret:(id)arg1 appGroup:(id)arg2 keychainBackupPolicy:(unsigned long long)arg3 ;
-(BOOL)isSessionStale;
-(FBAccessToken *)accessToken;
@end

