/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray;

@interface FBPersonSyncBatchQueryResponse : FBValueObject <NSCopying> {

	NSDictionary* _syncResponse;
	NSArray* _favoritesResponse;

}

@property (nonatomic,copy,readonly) NSDictionary * syncResponse;              //@synthesize syncResponse=_syncResponse - In the implementation block
@property (nonatomic,copy,readonly) NSArray * favoritesResponse;              //@synthesize favoritesResponse=_favoritesResponse - In the implementation block
-(NSArray *)favoritesResponse;
-(id)initWithSyncResponse:(id)arg1 favoritesResponse:(id)arg2 ;
-(NSDictionary *)syncResponse;
@end
