/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAvatarTaggingSearchProviderProtocol.h>

@protocol FBAvatarTaggingSearchProviderProtocol;
@class NSArray, FBUserSession, NSSet, NSString, FBMemGroup;

@interface FBGroupsMemberInviteWithViaEmailAvatarPickerSearchProvider : NSObject <FBAvatarTaggingSearchProviderProtocol> {

	id<FBAvatarTaggingSearchProviderProtocol> _innerSearchProvider;
	FBMemGroup* _group;
	FBUserSession* _session;
	BOOL _inviteViaEmailEnabled;

}

@property (assign,nonatomic) BOOL inviteViaEmailEnabled;                                   //@synthesize inviteViaEmailEnabled=_inviteViaEmailEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * avatarCollections; 
@property (nonatomic,readonly) BOOL canTagSelf; 
@property (nonatomic,readonly) FBUserSession * session; 
@property (nonatomic,copy) NSSet * excludedIDs; 
@property (getter=isFetchingResults,nonatomic,readonly) BOOL fetchingResults; 
@property (nonatomic,copy) NSString * loggingSessionID; 
-(void)searchForAvatarsWithText:(id)arg1 fetchLimit:(unsigned long long)arg2 flags:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithInnerSearchProvider:(id)arg1 group:(id)arg2 ;
-(void)setInviteViaEmailEnabled:(BOOL)arg1 ;
-(id)additionalSectionForEmail:(id)arg1 ;
-(BOOL)inviteViaEmailEnabled;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
@end

