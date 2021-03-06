/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface FBMapRouteHelper : NSObject
+(BOOL)isToMergeEndPointsWithStartPoint:(CGPoint)arg1 finishPoint:(CGPoint)arg2 ;
+(id)routeStartAndFinish;
+(id)routeFinish;
+(SCD_Struct_FB53)regionWithMapPoints:(id)arg1 ;
+(FBMapRouteDrawnEndpoints)_drawRouteWithMapPoints:(id)arg1 inContext:(CGContextRef)arg2 snapshot:(id)arg3 color:(CGColorRef)arg4 lineWidth:(double)arg5 ;
+(id)_mapPinView;
+(BOOL)isToFlipStartPointOrEndPoint:(CGPoint)arg1 finishPoint:(CGPoint)arg2 sizeOfStartCalloutLayer:(CGSize)arg3 sizeOfFinishCalloutLayer:(CGSize)arg4 ;
+(id)drawRouteInContext:(CGContextRef)arg1 snapshot:(id)arg2 points:(id)arg3 borderColor:(id)arg4 borderWidth:(double)arg5 lineColor:(id)arg6 lineWidth:(double)arg7 ;
+(void)drawAnnotationsInContext:(CGContextRef)arg1 snapshot:(id)arg2 points:(id)arg3 image:(id)arg4 centerOffset:(CGPoint)arg5 ;
+(void)drawBlueCircleInContext:(CGContextRef)arg1 snapshot:(id)arg2 center:(CLLocationCoordinate2D)arg3 radius:(double)arg4 ;
+(id)routeStart;
@end

