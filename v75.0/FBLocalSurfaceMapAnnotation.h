/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@protocol NSObject;
@class FBLocalSurfaceMapAnnotationStyle, NSString;

@interface FBLocalSurfaceMapAnnotation : NSObject <MKAnnotation> {

	FBLocalSurfaceMapAnnotationStyle* _style;
	id<NSObject> _model;
	CLLocationCoordinate2D _coordinate;

}

@property (nonatomic,readonly) FBLocalSurfaceMapAnnotationStyle * style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) id<NSObject> model;                                    //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;                     //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 style:(id)arg2 model:(id)arg3 ;
-(FBLocalSurfaceMapAnnotationStyle *)style;
-(id<NSObject>)model;
-(CLLocationCoordinate2D)coordinate;
@end

