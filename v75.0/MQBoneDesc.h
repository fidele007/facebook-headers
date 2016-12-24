/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class SCNNode, NSString;

@interface MQBoneDesc : NSObject {

	SCNNode* _node;
	NSString* _boneId;
	SCNVector3 _startRotation;
	SCNVector3 _deltaInfluence;
	SCNVector3 _rotationInfluence;
	SCNVector3 _influence;
	SCNVector3 _offset;

}

@property (assign,nonatomic) SCNVector3 startRotation;                  //@synthesize startRotation=_startRotation - In the implementation block
@property (nonatomic,retain) SCNNode * node;                            //@synthesize node=_node - In the implementation block
@property (nonatomic,copy) NSString * boneId;                           //@synthesize boneId=_boneId - In the implementation block
@property (assign,nonatomic) SCNVector3 deltaInfluence;                 //@synthesize deltaInfluence=_deltaInfluence - In the implementation block
@property (assign,nonatomic) SCNVector3 rotationInfluence;              //@synthesize rotationInfluence=_rotationInfluence - In the implementation block
@property (assign,nonatomic) SCNVector3 influence;                      //@synthesize influence=_influence - In the implementation block
@property (assign,nonatomic) SCNVector3 offset;                         //@synthesize offset=_offset - In the implementation block
-(id)initWithId:(id)arg1 armature:(id)arg2 deltaInfluence:(SCNVector3)arg3 rotationInfluence:(SCNVector3)arg4 influence:(SCNVector3)arg5 ;
-(id)initWithId:(id)arg1 armature:(id)arg2 deltaInfluence:(SCNVector3)arg3 rotationInfluence:(SCNVector3)arg4 influence:(SCNVector3)arg5 offset:(SCNVector3)arg6 ;
-(SCNVector3)startRotation;
-(void)setStartRotation:(SCNVector3)arg1 ;
-(NSString *)boneId;
-(void)setBoneId:(NSString *)arg1 ;
-(SCNVector3)deltaInfluence;
-(void)setDeltaInfluence:(SCNVector3)arg1 ;
-(SCNVector3)rotationInfluence;
-(void)setRotationInfluence:(SCNVector3)arg1 ;
-(SCNVector3)influence;
-(void)setInfluence:(SCNVector3)arg1 ;
-(void)setOffset:(SCNVector3)arg1 ;
-(SCNVector3)offset;
-(SCNNode *)node;
-(void)setNode:(SCNNode *)arg1 ;
@end

