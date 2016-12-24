/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBReusePoolDelegate.h>
#import <Facebook/FBReuseInstanceProvider.h>

@class NSMapTable, FBReusePoolControllerContext, NSString;

@interface FBReusePoolController : NSObject <FBReusePoolDelegate, FBReuseInstanceProvider> {

	recursive_mutex _lock;
	NSMapTable* _poolByBlockControllerClass;
	NSMapTable* _blockControllerClassByPool;
	NSMapTable* _blockControllerByReuseID;
	FBReusePoolControllerContext* _context;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addBlockController:(id)arg1 loadToCapacity:(BOOL)arg2 ;
-(void)removeBlockController:(id)arg1 ;
-(void)initializePoolForBlockControllerClass:(Class)arg1 ;
-(id)dequeueInstance:(id)arg1 ;
-(void)enqueueInstance:(id)arg1 ;
-(void)reusePool:(id)arg1 didReclaimInstanceWithIdentifier:(id)arg2 ;
-(void)reusePool:(id)arg1 prepareInstanceForReuse:(id)arg2 ;
-(void)_allocatePoolForBlockControllerClassIfNecessary:(Class)arg1 loadToCapacity:(BOOL)arg2 ;
-(void)reclaimInstance:(id)arg1 ;
-(void)_performBlockWithReusePool:(/*^block*/id)arg1 forBlockController:(id)arg2 ;
-(void)reset;
-(id)initWithContext:(id)arg1 ;
@end
