/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString;

@interface FBGroupCreateData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _name;
	NSString* _visibilitySetting;
	NSString* _descriptionText;
	NSString* _favorite;
	NSString* _groupPurpose;
	NSString* _groupParent;
	NSString* _referrer;
	NSString* _suggestionCategory;
	NSString* _suggestionIdentifier;
	NSString* _source;
	NSString* _isNameGenerated;
	NSString* _addFutureReports;
	NSString* _addReports;

}

@property (nonatomic,copy) NSString * clientMutationId;                  //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                           //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * visibilitySetting;                 //@synthesize visibilitySetting=_visibilitySetting - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                   //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) NSString * favorite;                          //@synthesize favorite=_favorite - In the implementation block
@property (nonatomic,copy) NSString * groupPurpose;                      //@synthesize groupPurpose=_groupPurpose - In the implementation block
@property (nonatomic,copy) NSString * groupParent;                       //@synthesize groupParent=_groupParent - In the implementation block
@property (nonatomic,copy) NSString * referrer;                          //@synthesize referrer=_referrer - In the implementation block
@property (nonatomic,copy) NSString * suggestionCategory;                //@synthesize suggestionCategory=_suggestionCategory - In the implementation block
@property (nonatomic,copy) NSString * suggestionIdentifier;              //@synthesize suggestionIdentifier=_suggestionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * source;                            //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * isNameGenerated;                   //@synthesize isNameGenerated=_isNameGenerated - In the implementation block
@property (nonatomic,copy) NSString * addFutureReports;                  //@synthesize addFutureReports=_addFutureReports - In the implementation block
@property (nonatomic,copy) NSString * addReports;                        //@synthesize addReports=_addReports - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(void)setReferrer:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(void)setGroupPurpose:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setSuggestionIdentifier:(NSString *)arg1 ;
-(NSString *)groupPurpose;
-(void)setVisibilitySetting:(NSString *)arg1 ;
-(void)setGroupParent:(NSString *)arg1 ;
-(NSString *)visibilitySetting;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)groupParent;
-(NSString *)suggestionCategory;
-(void)setSuggestionCategory:(NSString *)arg1 ;
-(NSString *)isNameGenerated;
-(void)setIsNameGenerated:(NSString *)arg1 ;
-(NSString *)addFutureReports;
-(void)setAddFutureReports:(NSString *)arg1 ;
-(NSString *)addReports;
-(void)setAddReports:(NSString *)arg1 ;
-(NSString *)referrer;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)suggestionIdentifier;
-(void)setFavorite:(NSString *)arg1 ;
-(NSString *)favorite;
@end
