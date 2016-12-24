/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLCacheKeySerializer;
#import <Facebook/Facebook-Structs.h>
@class NSSet, NSMutableDictionary, NSDictionary, NSString, NSArray;

@interface FBGraphQLQuery : NSObject {

	const char* _annotatedResultType;
	NSSet* _exportedFieldNames;
	NSMutableDictionary* _parameters;
	NSDictionary* _rawDataToUpload;
	NSString* _persistID;
	const FBGraphQLFieldSetRef _queriedFieldSet;
	shared_ptr<facebook::mobile::graphstore::TreeShape::Resolver>* _overridingTreeShape;
	NSMutableDictionary* _refParameterNameToExportedFieldMap;
	NSMutableDictionary* _rerunParameterNameToExportedFieldMap;
	NSSet* _parametersUsingServerSidePersistedDefaultValue;
	NSArray* _paramsToIndexMappingArray;
	BOOL _enabledStripNulls;
	BOOL _escapeRootID;
	NSString* _rootID;
	NSString* _callName;
	NSString* _queryKey;
	long long _parametersCompressibleThresholdInBytes;
	NSString* _queryName;
	NSString* _queryLabel;
	long long _priority;
	id<FBGraphQLCacheKeySerializer> _cacheKeySerializer;

}

@property (nonatomic,copy,readonly) NSString * rootID;                                        //@synthesize rootID=_rootID - In the implementation block
@property (nonatomic,copy,readonly) NSString * callName;                                      //@synthesize callName=_callName - In the implementation block
@property (assign,nonatomic) long long parametersCompressibleThresholdInBytes;                //@synthesize parametersCompressibleThresholdInBytes=_parametersCompressibleThresholdInBytes - In the implementation block
@property (assign,nonatomic) BOOL enabledStripNulls;                                          //@synthesize enabledStripNulls=_enabledStripNulls - In the implementation block
@property (assign,nonatomic) BOOL escapeRootID;                                               //@synthesize escapeRootID=_escapeRootID - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryKey;                                      //@synthesize queryKey=_queryKey - In the implementation block
@property (nonatomic,copy) NSString * queryName;                                              //@synthesize queryName=_queryName - In the implementation block
@property (nonatomic,copy) NSString * queryLabel;                                             //@synthesize queryLabel=_queryLabel - In the implementation block
@property (assign,nonatomic) long long priority;                                              //@synthesize priority=_priority - In the implementation block
@property (nonatomic,retain) id<FBGraphQLCacheKeySerializer> cacheKeySerializer;              //@synthesize cacheKeySerializer=_cacheKeySerializer - In the implementation block
+(id)newForOTAQueryWithQueryName:(id)arg1 callName:(id)arg2 persistID:(id)arg3 treeShape:(shared_ptr<facebook::mobile::graphstore::TreeShape::Resolver>*)arg4 ;
+(id)testEmptyQuery;
+(id)rerunExportedFieldWithName:(id)arg1 maxReruns:(long long)arg2 ;
-(NSString *)queryName;
-(id)persistID;
-(void)setCacheKeySerializer:(id<FBGraphQLCacheKeySerializer>)arg1 ;
-(void)setQueryName:(NSString *)arg1 ;
-(void)setQueryLabel:(NSString *)arg1 ;
-(NSString *)queryLabel;
-(shared_ptr<facebook::mobile::graphstore::TreeShape::Resolver>*)treeShapeResolver;
-(void)updateForOTAWithPersistID:(id)arg1 treeShape:(shared_ptr<facebook::mobile::graphstore::TreeShape::Resolver>*)arg2 ;
-(NSString *)callName;
-(void)setParametersCompressibleThresholdInBytes:(long long)arg1 ;
-(id)initWithRootID:(id)arg1 callName:(id)arg2 ;
-(void)setPersistID:(id)arg1 ;
-(void)setQueriedFieldSet:(const FBGraphQLFieldSetRef)arg1 ;
-(id<FBGraphQLCacheKeySerializer>)cacheKeySerializer;
-(id)initWithRootID:(id)arg1 callName:(id)arg2 parameters:(id)arg3 parameterNamesWithServerDefaultValues:(id)arg4 initInfo:(const FBGraphQLQueryCodegenInitInfo*)arg5 ;
-(id)rawDataToUpload;
-(void)setRawDataToUpload:(id)arg1 ;
-(NSString *)queryKey;
-(id)exportedFieldWithName:(id)arg1 pluralMode:(unsigned long long)arg2 fallbackBehavior:(unsigned long long)arg3 ;
-(void)addRefParameterWithName:(id)arg1 exportedField:(id)arg2 ;
-(void)addRerunParameterWithName:(id)arg1 rerunExportedField:(id)arg2 ;
-(id)exportedFieldWithName:(id)arg1 ;
-(const char*)annotatedResultType;
-(void)setExportedFieldsWithNames:(id)arg1 ;
-(long long)parametersCompressibleThresholdInBytes;
-(void)setEnabledStripNulls:(BOOL)arg1 ;
-(BOOL)escapeRootID;
-(void)setEscapeRootID:(BOOL)arg1 ;
-(id)parametersForURLRequestExcludingKeys:(id)arg1 ;
-(id)refParameterNameToExportedFieldMap;
-(id)rerunParameterNameToExportedFieldMap;
-(BOOL)enabledStripNulls;
-(id)parametersWithNameMappedToIndex:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(id)parameters;
-(void)addParameterWithName:(id)arg1 value:(id)arg2 ;
-(NSString *)rootID;
@end

