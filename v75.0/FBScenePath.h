/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBScenePathContext, NSString;

@interface FBScenePath : NSObject <NSCopying> {

	FBScenePathContext* _parentContext;
	unsigned long long _scene;
	FBScenePath* _parent;
	NSString* _tag;
	NSString* _name;

}

@property (nonatomic,readonly) unsigned long long scene;              //@synthesize scene=_scene - In the implementation block
@property (nonatomic,readonly) FBScenePath * parent;                  //@synthesize parent=_parent - In the implementation block
@property (nonatomic,copy,readonly) NSString * tag;                   //@synthesize tag=_tag - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
+(id)currentOrOrphanPathForHolder:(id)arg1 ;
+(id)currentOrOrphanPathForHolder:(id)arg1 withTag:(id)arg2 ;
+(id)currentPathForHolder:(id)arg1 ;
+(id)bypassScenePath;
+(id)forHolder:(id)arg1 withParent:(id)arg2 tag:(id)arg3 parentContext:(id)arg4 createScenePath:(BOOL)arg5 ;
+(id)forHolder:(id)arg1 withParent:(id)arg2 tag:(id)arg3 parentContext:(id)arg4 ;
-(BOOL)isDescendedFrom:(id)arg1 ;
-(unsigned long long)distanceToNearestCommonAncestorWith:(id)arg1 withMaxDistance:(unsigned long long)arg2 ;
-(id)initWithScene:(unsigned long long)arg1 parent:(id)arg2 tag:(id)arg3 parentContext:(id)arg4 name:(id)arg5 ;
-(float)distanceToSibling:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)tag;
-(unsigned long long)scene;
-(FBScenePath *)parent;
@end

