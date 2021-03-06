/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBKeychainItemController, NSObject, FBAnalytics;

@interface FBLoggedInUserCryptoKeyStore : NSObject {

	FBKeychainItemController* _keychainController;
	NSObject*<OS_dispatch_queue> _keychainTargetQueue;
	FBAnalytics* _analytics;

}
-(void)updateLoggedInUser:(id)arg1 withStorageServerKey:(id)arg2 completionBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)loadEncryptionKeyForLoggedInUser:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)clearStorageServerKey;
-(void)_loadEncryptionKeyFromKeychainItem:(id)arg1 forLoggedInUser:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)_computeTemporaryBackupKeyForItem:(id)arg1 withUser:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(id)initWithAnalytics:(id)arg1 keychainController:(id)arg2 keychainQueue:(id)arg3 ;
@end

