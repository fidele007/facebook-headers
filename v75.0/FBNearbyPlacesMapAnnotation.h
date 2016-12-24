/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class FBNearbyPlacesCellInformation, NSString;

@interface FBNearbyPlacesMapAnnotation : NSObject <MKAnnotation> {

	FBNearbyPlacesCellInformation* _cellInformation;
	long long _annotationType;
	CLLocationCoordinate2D _coordinate;

}

@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;                            //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) FBNearbyPlacesCellInformation * cellInformation;              //@synthesize cellInformation=_cellInformation - In the implementation block
@property (nonatomic,readonly) long long annotationType;                                     //@synthesize annotationType=_annotationType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(FBNearbyPlacesCellInformation *)cellInformation;
-(id)initWithCellInformation:(id)arg1 annotationType:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CLLocationCoordinate2D)coordinate;
-(long long)annotationType;
@end
