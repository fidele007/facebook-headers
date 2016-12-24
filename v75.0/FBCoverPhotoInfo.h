/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, FBPoint2D;

@interface FBCoverPhotoInfo : FBGraphQLInput {

	NSString* _photoId;
	NSString* _photoURLString;
	NSString* _themePhotoId;
	FBPoint2D* _offset;
	FBPoint2D* _focus;
	FBPoint2D* _zoomScale;

}

@property (nonatomic,copy) NSString * photoId;                     //@synthesize photoId=_photoId - In the implementation block
@property (nonatomic,copy) NSString * photoURLString;              //@synthesize photoURLString=_photoURLString - In the implementation block
@property (nonatomic,copy) NSString * themePhotoId;                //@synthesize themePhotoId=_themePhotoId - In the implementation block
@property (nonatomic,copy) FBPoint2D * offset;                     //@synthesize offset=_offset - In the implementation block
@property (nonatomic,copy) FBPoint2D * focus;                      //@synthesize focus=_focus - In the implementation block
@property (nonatomic,copy) FBPoint2D * zoomScale;                  //@synthesize zoomScale=_zoomScale - In the implementation block
-(void)setThemePhotoId:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)photoURLString;
-(void)setPhotoURLString:(NSString *)arg1 ;
-(NSString *)themePhotoId;
-(FBPoint2D *)zoomScale;
-(void)setZoomScale:(FBPoint2D *)arg1 ;
-(void)setOffset:(FBPoint2D *)arg1 ;
-(FBPoint2D *)offset;
-(FBPoint2D *)focus;
-(NSString *)photoId;
-(void)setPhotoId:(NSString *)arg1 ;
-(void)setFocus:(FBPoint2D *)arg1 ;
@end

