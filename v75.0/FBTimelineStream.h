/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStoryStream.h>

@interface FBTimelineStream : FBStoryStream
+(id)graphQLRequestWithParameters:(id)arg1 feedType:(long long)arg2 callbackPerformer:(id)arg3 subsequentRequest:(BOOL)arg4 queryOptions:(id)arg5 experimentManager:(id)arg6 ;
+(id)headRequestWithParameters:(id)arg1 feedType:(long long)arg2 callbackPerformer:(id)arg3 subsequentRequest:(BOOL)arg4 queryOptions:(id)arg5 ;
+(id)tailRequestWithParameters:(id)arg1 feedType:(long long)arg2 callbackPerformer:(id)arg3 subsequentRequest:(BOOL)arg4 queryOptions:(id)arg5 ;
+(id)configuredRequestWithParameters:(id)arg1 feedType:(long long)arg2 callbackPerformer:(id)arg3 subsequentRequest:(BOOL)arg4 queryOptions:(id)arg5 ;
-(BOOL)canLoadHead;
-(id)initWithAvatarID:(id)arg1 session:(id)arg2 connection:(id)arg3 connectionInfo:(id)arg4 scenePathProvider:(id)arg5 analyticsUUID:(id)arg6 isUnseenSectionEnabled:(BOOL)arg7 requestClass:(Class)arg8 ;
-(id)initWithSession:(id)arg1 connection:(id)arg2 connectionInfo:(id)arg3 scenePathProvider:(id)arg4 analyticsUUID:(id)arg5 queryOptions:(id)arg6 ;
@end

