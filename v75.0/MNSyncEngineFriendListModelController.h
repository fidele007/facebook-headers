/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFriendListModelControllerDelegate.h>
#import <Facebook/MNFriendListModelController.h>

@protocol MNFriendListModelControllerDelegate;
@class FBMessengerSyncEngineManager, FBFriendListModelController, NSString;

@interface MNSyncEngineFriendListModelController : NSObject <FBFriendListModelControllerDelegate, MNFriendListModelController> {

	id<MNFriendListModelControllerDelegate> _delegate;
	FBMessengerSyncEngineManager* _syncEngineManager;
	unsigned long long _type;
	FBFriendListModelController* _friendListModelController;
	int _fetchLimit;
	BOOL _started;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSyncEngineManager:(id)arg1 ;
-(void)startRequestWithType:(unsigned long long)arg1 sortField:(unsigned long long)arg2 fetchLimit:(int)arg3 delegate:(id)arg4 ;
-(id)searchOperationForSyncStore:(id)arg1 sortField:(unsigned long long)arg2 ;
-(void)modelController:(id)arg1 didCompleteSearchOperationReturningPeople:(id)arg2 ;
-(void)dealloc;
-(void)stop;
-(BOOL)isStarted;
@end
