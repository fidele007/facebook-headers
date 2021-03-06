/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBFilter.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FBFilterCropping;
@class NSMutableArray, FBBGRAtoYUVConverterFilter, FBImageFilter;

@interface FBFilterGroup : FBFilter <NSCopying> {

	NSMutableArray* _filters;
	NSMutableArray* _filtersRuntime;
	FBBGRAtoYUVConverterFilter* _BGRAToYUVFilter;
	FBImageFilter* _YUVToBGRAFilter;
	long long _outputFilterIndex;
	id<FBFilterCropping> _configureCacheFilter;
	CGSize _configureCacheInputSize;
	CGSize _configureCacheOutputSize;
	BOOL _needsConfigure;
	CGRect _cropRectangle;
	GLKMatrix4 _contentTransform;

}

@property (assign,nonatomic) CGRect cropRectangle;                      //@synthesize cropRectangle=_cropRectangle - In the implementation block
@property (assign,nonatomic) _GLKMatrix4 contentTransform;              //@synthesize contentTransform=_contentTransform - In the implementation block
-(void)removeFilterAtIndex:(unsigned long long)arg1 ;
-(void)insertFilter:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setContentTransform:(_GLKMatrix4)arg1 ;
-(void)render:(id)arg1 to:(id)arg2 time:(SCD_Struct_FB100)arg3 ;
-(id)firstFilter;
-(id)lastFilter;
-(_GLKMatrix4)contentTransform;
-(BOOL)isIdentityFilter;
-(void)_filtersChanged;
-(id)runtimeFilters;
-(void)_insertImageFilterIfNeeded;
-(void)_render:(id)arg1 to:(id*)arg2 time:(SCD_Struct_FB100)arg3 ;
-(id)surfaceOfPixelFormat:(unsigned long long)arg1 size:(CGSize)arg2 ;
-(void)_configureImageFilter:(id)arg1 forInputSize:(CGSize)arg2 outputSize:(CGSize)arg3 ;
-(id)convertSurface:(id)arg1 toFormat:(unsigned long long)arg2 outputSize:(CGSize)arg3 time:(SCD_Struct_FB100)arg4 ;
-(void)removeLastFilter;
-(unsigned long long)count;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
-(void)setCropRectangle:(CGRect)arg1 ;
-(CGRect)cropRectangle;
-(void)addFilter:(id)arg1 ;
@end

