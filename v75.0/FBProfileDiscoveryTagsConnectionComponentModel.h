/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMemProfileDiscoveryTagsConnection, NSString;

@interface FBProfileDiscoveryTagsConnectionComponentModel : NSObject {

	FBMemProfileDiscoveryTagsConnection* _tags;
	unsigned long long _numberOfLinesToShow;
	NSString* _rootID;
	unsigned long long _totalQueriedTagsCount;

}

@property (nonatomic,copy,readonly) FBMemProfileDiscoveryTagsConnection * tags;              //@synthesize tags=_tags - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfLinesToShow;                       //@synthesize numberOfLinesToShow=_numberOfLinesToShow - In the implementation block
@property (nonatomic,copy,readonly) NSString * rootID;                                       //@synthesize rootID=_rootID - In the implementation block
@property (nonatomic,readonly) unsigned long long totalQueriedTagsCount;                     //@synthesize totalQueriedTagsCount=_totalQueriedTagsCount - In the implementation block
-(id)initWithTags:(id)arg1 numberOfLinesToShow:(unsigned long long)arg2 rootID:(id)arg3 totalQueriedTagsCount:(unsigned long long)arg4 ;
-(unsigned long long)numberOfLinesToShow;
-(unsigned long long)totalQueriedTagsCount;
-(FBMemProfileDiscoveryTagsConnection *)tags;
-(NSString *)rootID;
@end

