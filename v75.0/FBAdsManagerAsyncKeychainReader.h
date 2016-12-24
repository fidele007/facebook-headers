/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBKeychainItemController, NSString;

@interface FBAdsManagerAsyncKeychainReader : NSObject {

	FBKeychainItemController* _amaKeychan;
	BOOL _keychainLoaded;
	NSString* _amaLoggedInUserID;

}

@property (copy) NSString * amaLoggedInUserID;              //@synthesize amaLoggedInUserID=_amaLoggedInUserID - In the implementation block
@property (assign) BOOL keychainLoaded;                     //@synthesize keychainLoaded=_keychainLoaded - In the implementation block
-(void)_loadKeychain;
-(void)_loadKeychainInBackground;
-(void)setKeychainLoaded:(BOOL)arg1 ;
-(void)setAmaLoggedInUserID:(NSString *)arg1 ;
-(void)_updateWithItem:(id)arg1 ;
-(NSString *)amaLoggedInUserID;
-(BOOL)keychainLoaded;
-(void)dealloc;
-(id)init;
@end

