/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBSimpleSearchTaggingProviderProtocol <FBAvatarTaggingSearchProviderProtocol>
@property (nonatomic,copy) NSString * authorType; 
@required
-(BOOL)shouldCreateTaggableUserCollectionForTargetType:(id)arg1;
-(void)searchForAvatarsWithText:(id)arg1 fetchLimit:(unsigned long long)arg2 flags:(unsigned long long)arg3 explicitMention:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 errorHandler:(/*^block*/id)arg6;
-(NSString *)authorType;
-(void)setAuthorType:(id)arg1;

@end

