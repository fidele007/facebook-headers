/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBSectionComponentHierarchy : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSString* _node_type;
	id _node_state;
	NSArray* _node_children;
	id _leaf_model;
	id _leaf_context;
	NSString* _leaf_sectionComponentGeneratorType;
	NSString* _leaf_gUID;

}
+(id)nodeWithType:(id)arg1 state:(id)arg2 children:(id)arg3 ;
+(id)leafWithModel:(id)arg1 context:(id)arg2 sectionComponentGeneratorType:(id)arg3 GUID:(id)arg4 ;
-(void)matchNode:(/*^block*/id)arg1 leaf:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

