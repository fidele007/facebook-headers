/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBInvalidating.h>

@protocol OS_dispatch_queue;
@class FBPageAccountsContainer, FBPreferences, NSObject, NSString;

@interface FBPageAccountsStore : NSObject <FBInvalidating> {

	FBPageAccountsContainer* _cachedContainer;
	FBPreferences* _preferences;
	NSObject*<OS_dispatch_queue> _serialQueue;
	BOOL _invalidated;

}

@property (assign) BOOL invalidated;                                   //@synthesize invalidated=_invalidated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(id)accountInfoForFBID:(id)arg1 ;
-(id)initWithSessionPreferences:(id)arg1 ;
-(long long)pageCountWithPermissionRequired:(unsigned long long)arg1 ;
-(id)pageFBIDsWithPermissionRequired:(unsigned long long)arg1 ;
-(void)persistPageAccountsContainer:(id)arg1 ;
-(id)pageAccountsContainer;
-(void)invalidate;
-(BOOL)isValid;
-(long long)pageCount;
-(BOOL)invalidated;
-(void)setInvalidated:(BOOL)arg1 ;
@end

