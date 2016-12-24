/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSNumber;

@interface FBGeoBoundingBox : FBGraphQLInput {

	NSNumber* _north;
	NSNumber* _west;
	NSNumber* _south;
	NSNumber* _east;

}

@property (nonatomic,copy) NSNumber * north;              //@synthesize north=_north - In the implementation block
@property (nonatomic,copy) NSNumber * west;               //@synthesize west=_west - In the implementation block
@property (nonatomic,copy) NSNumber * south;              //@synthesize south=_south - In the implementation block
@property (nonatomic,copy) NSNumber * east;               //@synthesize east=_east - In the implementation block
-(NSNumber *)north;
-(NSNumber *)south;
-(NSNumber *)east;
-(NSNumber *)west;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setNorth:(NSNumber *)arg1 ;
-(void)setWest:(NSNumber *)arg1 ;
-(void)setSouth:(NSNumber *)arg1 ;
-(void)setEast:(NSNumber *)arg1 ;
@end

