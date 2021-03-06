/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFriendSearchOperationAggregatorDelegate.h>
#import <Facebook/FBFriendListMonitorListener.h>
#import <Facebook/FBPresenceUpdateListener.h>
#import <Facebook/FBMessengerStatusUpdateSyncListener.h>
#import <Facebook/FBSyncStoreOpenedStateListener.h>
#import <Facebook/FBSyncEngineJobListener.h>

@protocol FBFriendListModelControllerDelegate;
@class FBFriendSearchOperationAggregator, FBFriendListMonitor, FBPresenceUpdateMonitor, FBMessengerStatusUpdateMonitor, FBSyncStore, FBDelayer, NSString;

@interface FBFriendListModelController : NSObject <FBFriendSearchOperationAggregatorDelegate, FBFriendListMonitorListener, FBPresenceUpdateListener, FBMessengerStatusUpdateSyncListener, FBSyncStoreOpenedStateListener, FBSyncEngineJobListener> {

	FBFriendSearchOperationAggregator* _operationAggregator;
	FBFriendListMonitor* _friendListMonitor;
	FBPresenceUpdateMonitor* _presenceMonitor;
	FBMessengerStatusUpdateMonitor* _messengerStatusMonitor;
	unsigned long long _sortField;
	FBSyncStore* _syncStore;
	FBDelayer* _initialSyncDelayer;
	id<FBFriendListModelControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didWritePresenceValuesIntoSyncStore:(id)arg1 didClearExistingValues:(BOOL)arg2 ;
-(void)syncEngineDidBeginSync:(unsigned long long)arg1 isInitialSync:(BOOL)arg2 ;
-(void)syncEngineDidCompleteSync:(unsigned long long)arg1 ;
-(void)startWithDelegate:(id)arg1 sortField:(unsigned long long)arg2 observationOptions:(unsigned long long)arg3 ;
-(BOOL)_isStarted;
-(id)initWithFriendListMonitor:(id)arg1 presenceMonitor:(id)arg2 statusUpdateMonitor:(id)arg3 operationAggregator:(id)arg4 syncStore:(id)arg5 initialFriendSyncComplete:(BOOL)arg6 ;
-(void)syncStoreDidOpen:(id)arg1 wasSuccessful:(BOOL)arg2 ;
-(void)didDiscardDatabaseFile;
-(void)didCreateDatabaseTables;
-(void)syncStoreDidClose:(id)arg1 ;
-(void)_startPersonSearchOperationIfStoreOpen:(BOOL)arg1 ;
-(void)operatonDidCompleteWithLoadedPeople:(id)arg1 ;
-(void)didWriteUpdatesToSyncStoreInvalidatingFriendList;
-(void)didWriteMessengerStatusUpdatesIntoSyncStore:(id)arg1 didClearExistingValues:(BOOL)arg2 ;
-(void)dealloc;
-(void)stop;
-(id)searchOperation;
@end

