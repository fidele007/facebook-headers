/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBOpenGLFilter.h>
#import <Facebook/FBOverlayFilter.h>

@class NSMutableArray;

@interface FBCompositeFilter : FBOpenGLFilter <FBOverlayFilter> {

	NSMutableArray* _filters;

}
-(id)initWithFilters:(id)arg1 ;
-(void)removeFilterAtIndex:(unsigned long long)arg1 ;
-(void)sendFilterCommand:(id)arg1 toFilterAtIndex:(unsigned long long)arg2 ;
-(void)addFilter:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)render:(id)arg1 to:(id)arg2 time:(SCD_Struct_FB100)arg3 ;
-(void)processCommand:(id)arg1 ;
-(unsigned long long)inputPixelFormat;
-(void)setFilterContext:(id)arg1 ;
-(id)init;
-(void)setParameters:(id)arg1 ;
-(unsigned long long)outputPixelFormat;
@end

