/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, FBMemLeadGenData, NSString, NSArray;

@interface FBLeadGenDialogStateTracker : NSObject {

	NSMutableDictionary* _fieldKeyToValueMutable;
	NSMutableDictionary* _selectorKeyToOptionTokenMap;
	FBMemLeadGenData* _leadGenData;
	BOOL _hasCompletelySeenCustomDisclaimer;
	NSString* _feedUnitType;
	long long _pageIndex;
	long long _maxSurface;
	long long _maxPageIndex;
	long long _surface;
	unsigned long long _validationErrorTimes;
	NSMutableDictionary* _fieldEditingTracker;
	NSArray* _actionLinks;

}

@property (nonatomic,copy,readonly) NSString * feedUnitType;                       //@synthesize feedUnitType=_feedUnitType - In the implementation block
@property (assign,nonatomic) long long pageIndex;                                  //@synthesize pageIndex=_pageIndex - In the implementation block
@property (assign,nonatomic) long long maxSurface;                                 //@synthesize maxSurface=_maxSurface - In the implementation block
@property (assign,nonatomic) long long maxPageIndex;                               //@synthesize maxPageIndex=_maxPageIndex - In the implementation block
@property (assign,nonatomic) BOOL hasCompletelySeenCustomDisclaimer;               //@synthesize hasCompletelySeenCustomDisclaimer=_hasCompletelySeenCustomDisclaimer - In the implementation block
@property (assign,nonatomic) long long surface;                                    //@synthesize surface=_surface - In the implementation block
@property (assign,nonatomic) unsigned long long validationErrorTimes;              //@synthesize validationErrorTimes=_validationErrorTimes - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * fieldEditingTracker;              //@synthesize fieldEditingTracker=_fieldEditingTracker - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actionLinks;                         //@synthesize actionLinks=_actionLinks - In the implementation block
-(void)setSurface:(long long)arg1 ;
-(NSArray *)actionLinks;
-(id)initWithActionLinks:(id)arg1 feedUnitType:(id)arg2 ;
-(long long)maxSurface;
-(void)setMaxSurface:(long long)arg1 ;
-(BOOL)hasCompletelySeenCustomDisclaimer;
-(void)setHasCompletelySeenCustomDisclaimer:(BOOL)arg1 ;
-(NSMutableDictionary *)fieldEditingTracker;
-(unsigned long long)validationErrorTimes;
-(long long)maxPageIndex;
-(id)valueForFieldKey:(id)arg1 ;
-(void)setValue:(id)arg1 forFieldKey:(id)arg2 ;
-(void)setMaxPageIndex:(long long)arg1 ;
-(void)setValidationErrorTimes:(unsigned long long)arg1 ;
-(void)setupSelectorKeyOptionTokenMapWithLeadGenData:(id)arg1 ;
-(id)userInfoKeyValueDict;
-(NSString *)feedUnitType;
-(void)setFieldEditingTracker:(NSMutableDictionary *)arg1 ;
-(long long)count;
-(long long)pageIndex;
-(void)setPageIndex:(long long)arg1 ;
-(long long)surface;
@end
