/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBKeychainItemController, FBCodeGeneratorObject, NSObject;

@interface FBCodeGeneratorDataSource : NSObject {

	FBKeychainItemController* _keychainController;
	FBCodeGeneratorObject* _cachedObject;
	BOOL _needLookup;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithKeychainController:(id)arg1 ;
-(id)_codeGeneratorObjectFromKeychainItem:(id)arg1 ;
-(void)_setCachedObject:(id)arg1 ;
-(id)_keychainItemFromCodeGeneratorObject:(id)arg1 ;
-(void)getObjectOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setObject:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearObjectOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
@end

