/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBLocalNewsLocationIdentifier, NSNumber;

@interface FBLocalNewsQueryConfiguration : FBValueObject <NSCopying> {

	BOOL _useGrid;
	FBLocalNewsLocationIdentifier* _locationIdentifier;
	NSNumber* _startTime;
	NSNumber* _endTime;

}

@property (nonatomic,copy,readonly) FBLocalNewsLocationIdentifier * locationIdentifier;              //@synthesize locationIdentifier=_locationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * startTime;                                            //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * endTime;                                              //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) BOOL useGrid;                                                         //@synthesize useGrid=_useGrid - In the implementation block
-(BOOL)useGrid;
-(id)initWithLocationIdentifier:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 useGrid:(BOOL)arg4 ;
-(NSNumber *)startTime;
-(NSNumber *)endTime;
-(FBLocalNewsLocationIdentifier *)locationIdentifier;
@end

