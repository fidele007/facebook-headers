/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSURL, NSArray;

@interface FBMemTextWithEntitiesMetadata : FBValueObject <NSCopying, NSCoding> {

	BOOL _isInstantArticle;
	BOOL _isWorkUserValue;
	BOOL _isViewerCoworkerValue;
	BOOL _isMultiCompanyGroupValue;
	NSString* _graphQLID;
	NSString* _graphQLTypeName;
	NSURL* _url;
	NSString* _creationStoryGraphQLID;
	NSString* _commerceStorePageGraphQLID;
	NSString* _instantArticleGraphQLID;
	NSURL* _fullLatestVersionArticleCanonicalURL;
	NSURL* _latestVersionArticleCanonicalURL;
	NSString* _destinationId;
	NSString* _destinationType;
	NSString* _formattedTextFormatType;
	NSString* _referralSurface;
	NSArray* _iOSURLStrings;
	NSString* _savablePermalink;

}

@property (nonatomic,copy,readonly) NSString * graphQLID;                                      //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * graphQLTypeName;                                //@synthesize graphQLTypeName=_graphQLTypeName - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                                               //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * creationStoryGraphQLID;                         //@synthesize creationStoryGraphQLID=_creationStoryGraphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * commerceStorePageGraphQLID;                     //@synthesize commerceStorePageGraphQLID=_commerceStorePageGraphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * instantArticleGraphQLID;                        //@synthesize instantArticleGraphQLID=_instantArticleGraphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fullLatestVersionArticleCanonicalURL;              //@synthesize fullLatestVersionArticleCanonicalURL=_fullLatestVersionArticleCanonicalURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * latestVersionArticleCanonicalURL;                  //@synthesize latestVersionArticleCanonicalURL=_latestVersionArticleCanonicalURL - In the implementation block
@property (nonatomic,readonly) BOOL isInstantArticle;                                          //@synthesize isInstantArticle=_isInstantArticle - In the implementation block
@property (nonatomic,copy,readonly) NSString * destinationId;                                  //@synthesize destinationId=_destinationId - In the implementation block
@property (nonatomic,copy,readonly) NSString * destinationType;                                //@synthesize destinationType=_destinationType - In the implementation block
@property (nonatomic,copy,readonly) NSString * formattedTextFormatType;                        //@synthesize formattedTextFormatType=_formattedTextFormatType - In the implementation block
@property (nonatomic,copy,readonly) NSString * referralSurface;                                //@synthesize referralSurface=_referralSurface - In the implementation block
@property (nonatomic,copy,readonly) NSArray * iOSURLStrings;                                   //@synthesize iOSURLStrings=_iOSURLStrings - In the implementation block
@property (nonatomic,copy,readonly) NSString * savablePermalink;                               //@synthesize savablePermalink=_savablePermalink - In the implementation block
@property (nonatomic,readonly) BOOL isWorkUserValue;                                           //@synthesize isWorkUserValue=_isWorkUserValue - In the implementation block
@property (nonatomic,readonly) BOOL isViewerCoworkerValue;                                     //@synthesize isViewerCoworkerValue=_isViewerCoworkerValue - In the implementation block
@property (nonatomic,readonly) BOOL isMultiCompanyGroupValue;                                  //@synthesize isMultiCompanyGroupValue=_isMultiCompanyGroupValue - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(NSString *)graphQLID;
-(NSString *)graphQLTypeName;
-(NSArray *)iOSURLStrings;
-(BOOL)isMultiCompanyGroupValue;
-(BOOL)isViewerCoworkerValue;
-(BOOL)isWorkUserValue;
-(NSString *)referralSurface;
-(NSString *)instantArticleGraphQLID;
-(NSString *)formattedTextFormatType;
-(NSString *)savablePermalink;
-(NSString *)creationStoryGraphQLID;
-(NSURL *)fullLatestVersionArticleCanonicalURL;
-(NSURL *)latestVersionArticleCanonicalURL;
-(BOOL)isInstantArticle;
-(NSString *)commerceStorePageGraphQLID;
-(NSString *)destinationId;
-(id)initWithGraphQLID:(id)arg1 graphQLTypeName:(id)arg2 url:(id)arg3 creationStoryGraphQLID:(id)arg4 commerceStorePageGraphQLID:(id)arg5 instantArticleGraphQLID:(id)arg6 fullLatestVersionArticleCanonicalURL:(id)arg7 latestVersionArticleCanonicalURL:(id)arg8 isInstantArticle:(BOOL)arg9 destinationId:(id)arg10 destinationType:(id)arg11 formattedTextFormatType:(id)arg12 referralSurface:(id)arg13 iOSURLStrings:(id)arg14 savablePermalink:(id)arg15 isWorkUserValue:(BOOL)arg16 isViewerCoworkerValue:(BOOL)arg17 isMultiCompanyGroupValue:(BOOL)arg18 ;
-(NSString *)destinationType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
@end

