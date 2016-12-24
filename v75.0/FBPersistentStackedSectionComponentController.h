/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSectionComponentController.h>
#import <Facebook/FBScopedComponentChangesetWriter.h>

@protocol NSObject;
@class NSMutableArray, NSMutableDictionary, NSMutableSet, FBPersistentCollection, NSString;

@interface FBPersistentStackedSectionComponentController : FBSectionComponentController <FBScopedComponentChangesetWriter> {

	NSMutableArray* _trackerInfos;
	NSMutableDictionary* _pendingChangesets;
	NSMutableDictionary* _pendingUserInfo;
	NSMutableSet* _guidsToRemove;
	BOOL _isRegenerating;
	FBPersistentCollection* _previousUpdatedCollection;
	id<NSObject> _previousUserInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didChangeComponentWithPreviousComponent:(id)arg1 userInfoFromStateUpdate:(id)arg2 ;
-(void)applyChangeset:(id)arg1 userInfo:(id)arg2 guid:(id)arg3 ;
-(void)_flushPendingChangesets;
-(id)init;
@end
