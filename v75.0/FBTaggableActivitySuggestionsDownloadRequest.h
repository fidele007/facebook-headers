/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphQLPagedDownloadRequest.h>

@class NSString, CLLocation;

@interface FBTaggableActivitySuggestionsDownloadRequest : FBGraphQLPagedDownloadRequest {

	BOOL _isPrefetch;
	NSString* _searchQuery;
	NSString* _placeID;
	NSString* _typeaheadSessionID;
	NSString* _requestID;
	NSString* _surfaceID;
	CLLocation* _viewerLocation;
	NSString* _flowSource;

}

@property (nonatomic,copy) NSString * searchQuery;                     //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,copy) NSString * placeID;                         //@synthesize placeID=_placeID - In the implementation block
@property (assign,nonatomic) BOOL isPrefetch;                          //@synthesize isPrefetch=_isPrefetch - In the implementation block
@property (nonatomic,copy) NSString * typeaheadSessionID;              //@synthesize typeaheadSessionID=_typeaheadSessionID - In the implementation block
@property (nonatomic,copy) NSString * requestID;                       //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy) NSString * surfaceID;                       //@synthesize surfaceID=_surfaceID - In the implementation block
@property (nonatomic,copy) CLLocation * viewerLocation;                //@synthesize viewerLocation=_viewerLocation - In the implementation block
@property (nonatomic,copy) NSString * flowSource;                      //@synthesize flowSource=_flowSource - In the implementation block
-(id)newQueryWithCursor:(id)arg1 ;
-(NSString *)typeaheadSessionID;
-(void)setTypeaheadSessionID:(NSString *)arg1 ;
-(CLLocation *)viewerLocation;
-(void)setFlowSource:(NSString *)arg1 ;
-(NSString *)flowSource;
-(void)setSurfaceID:(NSString *)arg1 ;
-(void)setViewerLocation:(CLLocation *)arg1 ;
-(void)setIsPrefetch:(BOOL)arg1 ;
-(NSString *)surfaceID;
-(NSString *)searchQuery;
-(void)setPlaceID:(NSString *)arg1 ;
-(NSString *)placeID;
-(void)setSearchQuery:(NSString *)arg1 ;
-(void)setRequestID:(NSString *)arg1 ;
-(NSString *)requestID;
-(BOOL)isPrefetch;
@end

