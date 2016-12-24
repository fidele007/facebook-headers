/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCollationManagerDelegate.h>
#import <Facebook/FBEventsLegacyInviteDataSourceProtocol.h>

@protocol FBEventsLegacyInviteDataSourceDelegateProtocol;
@class FBUserSession, UITableView, NSString, NSArray;

@interface FBEventsLegacyInviteReviewDataSource : NSObject <FBCollationManagerDelegate, FBEventsLegacyInviteDataSourceProtocol> {

	FBUserSession* _session;
	UITableView* _tableView;
	NSString* _localizedSectionHeader;
	id<FBEventsLegacyInviteDataSourceDelegateProtocol> _delegate;
	NSArray* _inviteCandidates;

}

@property (assign,nonatomic,__weak) id<FBEventsLegacyInviteDataSourceDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * inviteCandidates;                                                        //@synthesize inviteCandidates=_inviteCandidates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 inviteCandidates:(id)arg2 localizedSectionHeader:(id)arg3 ;
-(id)inviteCandidateAtIndexPath:(id)arg1 ;
-(NSArray *)inviteCandidates;
-(void)setInviteCandidates:(NSArray *)arg1 ;
-(void)setDelegate:(id<FBEventsLegacyInviteDataSourceDelegateProtocol>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBEventsLegacyInviteDataSourceDelegateProtocol>)delegate;
@end

