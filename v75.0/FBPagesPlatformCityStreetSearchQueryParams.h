/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, FBViewerCoordinates;

@interface FBPagesPlatformCityStreetSearchQueryParams : FBGraphQLInput {

	NSString* _field;
	NSString* _query;
	FBViewerCoordinates* _viewerCoordinates;

}

@property (nonatomic,copy) NSString * field;                                     //@synthesize field=_field - In the implementation block
@property (nonatomic,copy) NSString * query;                                     //@synthesize query=_query - In the implementation block
@property (nonatomic,copy) FBViewerCoordinates * viewerCoordinates;              //@synthesize viewerCoordinates=_viewerCoordinates - In the implementation block
-(void)setViewerCoordinates:(FBViewerCoordinates *)arg1 ;
-(FBViewerCoordinates *)viewerCoordinates;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(NSString *)field;
-(void)setField:(NSString *)arg1 ;
@end

