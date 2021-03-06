/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntermixedTabComponentDataSourceAdapterAppearanceListener.h>
#import <Facebook/FBIntermixedTabComponentDataSourceAdapterRowCountListener.h>
#import <Facebook/FBIntermixedTabSectionHeaderProviding.h>

@protocol FBIntermixedTabRowCountAnnouncingAdapterProtocol, FBIntermixedTabRowCountAnnouncingAdapterProtocolFBIntermixedTabComponentDataSourceAdapterProtocol, FBIntentHandler, FBIntermixedTabSectionHeaderProviderDelegate;
@class FBUserSession, NSString;

@interface FBIntermixedTabFriendRequestSectionHeaderManager : NSObject <FBIntermixedTabComponentDataSourceAdapterAppearanceListener, FBIntermixedTabComponentDataSourceAdapterRowCountListener, FBIntermixedTabSectionHeaderProviding> {

	FBUserSession* _session;
	id<FBIntermixedTabRowCountAnnouncingAdapterProtocol> _friendRequestAdapter;
	id<FBIntermixedTabRowCountAnnouncingAdapterProtocol><FBIntermixedTabComponentDataSourceAdapterProtocol> _pymkAdapter;
	id<FBIntentHandler> _intentHandler;
	id<FBIntermixedTabSectionHeaderProviderDelegate> _delegate;
	BOOL _showRedesignedFriendRequestEmptyState;
	BOOL _removeFriendRequestSectionIfEmpty;
	BOOL _disableFriendRequestSection;
	BOOL _pymkSectionInitiallyAppeared;
	BOOL _friendRequestSectionIsEmpty;
	BOOL _pymkSectionIsEmpty;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 friendRequestAdapter:(id)arg2 pymkAdapter:(id)arg3 intentHandler:(id)arg4 delegate:(id)arg5 ;
-(void)intermixedTabComponentDataSourceAdapter:(id)arg1 didUpdateRowCount:(unsigned long long)arg2 ;
-(void)_updateSectionHeader;
-(void)intermixedTabComponentDataSourceAdapterComponentsWillInitiallyAppear:(id)arg1 ;
-(id)headerRightSideText;
-(SEL)headerRightSideAction;
-(void)_openFindFriendsFromFriendRequestSectionHeader;
-(void)dealloc;
-(id)headerTitle;
@end

