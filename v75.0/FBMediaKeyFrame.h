/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBMediaKeyFrame : NSObject <NSCopying> {

	double _zoomScale;
	CGPoint _centerPoint;

}

@property (assign,nonatomic) CGPoint centerPoint;              //@synthesize centerPoint=_centerPoint - In the implementation block
@property (assign,nonatomic) double zoomScale;                 //@synthesize zoomScale=_zoomScale - In the implementation block
-(CGPoint)photoOffsetForViewportSize:(CGSize)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)zoomScale;
-(void)setZoomScale:(double)arg1 ;
-(CGPoint)centerPoint;
-(void)setCenterPoint:(CGPoint)arg1 ;
@end
