/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBMemGroup;


@protocol FBGroupsMembersDataSourceProtocol
@property (nonatomic,retain) id<FBGroupsMembersViewConfig> config; 
@property (assign,nonatomic,__weak) FBMemGroup * group; 
@required
-(id)initWithSession:(id)arg1 queryProvider:(id)arg2 intentHandler:(id)arg3 actionHandler:(id)arg4;
-(void)removeMemberID:(id)arg1;
-(BOOL)isConfirmedMemberForIndexPath:(id)arg1;
-(id)entityCardsInfoForIndexPath:(id)arg1;
-(id<FBGroupsMembersViewConfig>)config;
-(void)setGroup:(id)arg1;
-(FBMemGroup *)group;
-(void)setConfig:(id)arg1;

@end

