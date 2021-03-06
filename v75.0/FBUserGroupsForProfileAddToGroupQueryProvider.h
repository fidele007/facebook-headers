/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGroupsDataLoaderQueryProviderProtocol.h>

@class NSString;

@interface FBUserGroupsForProfileAddToGroupQueryProvider : NSObject <FBGroupsDataLoaderQueryProviderProtocol> {

	NSString* _inviteeID;

}

@property (nonatomic,copy) NSString * inviteeID;                    //@synthesize inviteeID=_inviteeID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queryProvider;
-(long long)groupsQueryTypeForCurrentTime;
-(void)groupsDataLoaderDidFetchForQueryType:(long long)arg1 ;
-(id)groupsQueryForUserFBID:(id)arg1 afterCursor:(id)arg2 querySize:(unsigned long long)arg3 ;
-(void)setInviteeID:(NSString *)arg1 ;
-(NSString *)inviteeID;
@end

