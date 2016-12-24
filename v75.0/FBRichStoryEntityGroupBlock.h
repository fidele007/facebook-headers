/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBRichStoryBlock.h>

@class NSArray;

@interface FBRichStoryEntityGroupBlock : FBRichStoryBlock {

	NSArray* _entityBlocks;
	long long _type;

}

@property (nonatomic,copy,readonly) NSArray * entityBlocks;              //@synthesize entityBlocks=_entityBlocks - In the implementation block
@property (nonatomic,readonly) long long type;                           //@synthesize type=_type - In the implementation block
-(NSArray *)entityBlocks;
-(id)initWithType:(long long)arg1 entityBlocks:(id)arg2 blockID:(id)arg3 annotations:(id)arg4 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)description;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
