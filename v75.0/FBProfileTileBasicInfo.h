/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, FBMemProfileTileSection, FBMemPerson;

@interface FBProfileTileBasicInfo : FBValueObject <NSCopying> {

	BOOL _shouldHideCardDivider;
	BOOL _shouldHideHeader;
	NSArray* _items;
	NSString* _headerTitle;
	NSString* _headerSubtitle;
	NSString* _disclosureTitle;
	NSString* _headerIconUri;
	FBMemProfileTileSection* _sectionModel;
	NSString* _sectionType;
	NSArray* _entitiesInfo;
	FBMemPerson* _targetPerson;

}

@property (nonatomic,copy,readonly) NSArray * items;                                     //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSString * headerTitle;                              //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * headerSubtitle;                           //@synthesize headerSubtitle=_headerSubtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * disclosureTitle;                          //@synthesize disclosureTitle=_disclosureTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * headerIconUri;                            //@synthesize headerIconUri=_headerIconUri - In the implementation block
@property (nonatomic,copy,readonly) FBMemProfileTileSection * sectionModel;              //@synthesize sectionModel=_sectionModel - In the implementation block
@property (nonatomic,copy,readonly) NSString * sectionType;                              //@synthesize sectionType=_sectionType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * entitiesInfo;                              //@synthesize entitiesInfo=_entitiesInfo - In the implementation block
@property (nonatomic,readonly) BOOL shouldHideCardDivider;                               //@synthesize shouldHideCardDivider=_shouldHideCardDivider - In the implementation block
@property (nonatomic,readonly) BOOL shouldHideHeader;                                    //@synthesize shouldHideHeader=_shouldHideHeader - In the implementation block
@property (nonatomic,copy,readonly) FBMemPerson * targetPerson;                          //@synthesize targetPerson=_targetPerson - In the implementation block
-(NSArray *)entitiesInfo;
-(NSString *)headerSubtitle;
-(NSString *)disclosureTitle;
-(NSString *)headerIconUri;
-(BOOL)shouldHideCardDivider;
-(id)initWithItems:(id)arg1 headerTitle:(id)arg2 headerSubtitle:(id)arg3 disclosureTitle:(id)arg4 headerIconUri:(id)arg5 sectionModel:(id)arg6 sectionType:(id)arg7 entitiesInfo:(id)arg8 shouldHideCardDivider:(BOOL)arg9 shouldHideHeader:(BOOL)arg10 targetPerson:(id)arg11 ;
-(FBMemPerson *)targetPerson;
-(FBMemProfileTileSection *)sectionModel;
-(BOOL)shouldHideHeader;
-(NSArray *)items;
-(NSString *)headerTitle;
-(NSString *)sectionType;
@end
