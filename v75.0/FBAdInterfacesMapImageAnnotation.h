/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class FBAdInterfacesDisplayableLocation, NSString;

@interface FBAdInterfacesMapImageAnnotation : NSObject <MKAnnotation> {

	FBAdInterfacesDisplayableLocation* _location;
	CLLocationCoordinate2D _coordinate;
	NSString* _title;

}

@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(id)initWithDisplayableLocation:(id)arg1 ;
-(id)annotationViewWithReuseIdentifier:(id)arg1 session:(id)arg2 scenePath:(id)arg3 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(CLLocationCoordinate2D)coordinate;
@end

