/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBFXGeometryEffect.h>

@interface FBFXGridMeshEffect : FBFXGeometryEffect
-(void)configureVertices:(FBFXGeometryEffectVertex*)arg1 columns:(int)arg2 rows:(int)arg3 rect:(CGRect)arg4 texCoordExtent:(TexCoordExtent)arg5 ;
-(void)subdivide:(CGSize)arg1 columns:(int*)arg2 rows:(int*)arg3 ;
-(unsigned)buildGeometryWithRect:(CGRect)arg1 texCoordExtent:(TexCoordExtent)arg2 requestVertexBuffer:(/*^block*/id)arg3 requestIndexBuffer:(/*^block*/id)arg4 ;
-(void)configureVertex:(FBFXGeometryEffectVertex*)arg1 forNormalizedPoint:(CGPoint)arg2 withRect:(CGRect)arg3 texCoordExtent:(TexCoordExtent)arg4 ;
@end

