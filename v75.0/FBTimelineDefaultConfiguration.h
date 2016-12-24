/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBTimelineConfiguration.h>

@class NSString;

@interface FBTimelineDefaultConfiguration : NSObject <FBTimelineConfiguration> {

	BOOL _beginSyncingDataInInit;
	BOOL _useLightBackgroundColor;
	BOOL _hasPullToRefreshView;
	unsigned long long _initialDisplayOptions;
	NSString* _analyticsUUID;
	NSString* _analyticsEventSource;
	NSString* _actionType;

}

@property (assign,nonatomic) unsigned long long initialDisplayOptions;              //@synthesize initialDisplayOptions=_initialDisplayOptions - In the implementation block
@property (nonatomic,copy) NSString * analyticsUUID;                                //@synthesize analyticsUUID=_analyticsUUID - In the implementation block
@property (nonatomic,copy) NSString * analyticsEventSource;                         //@synthesize analyticsEventSource=_analyticsEventSource - In the implementation block
@property (assign,nonatomic) BOOL hasPullToRefreshView;                             //@synthesize hasPullToRefreshView=_hasPullToRefreshView - In the implementation block
@property (nonatomic,copy) NSString * actionType;                                   //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic) BOOL useLightBackgroundColor;                          //@synthesize useLightBackgroundColor=_useLightBackgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL beginSyncingDataInInit;                         //@synthesize beginSyncingDataInInit=_beginSyncingDataInInit - In the implementation block
+(id)configurationWithDisplayOptions:(unsigned long long)arg1 analyticsUUID:(id)arg2 hasPullToRefreshView:(BOOL)arg3 useLightBackgroundColor:(BOOL)arg4 ;
-(void)setHasPullToRefreshView:(BOOL)arg1 ;
-(void)setInitialDisplayOptions:(unsigned long long)arg1 ;
-(void)setAnalyticsUUID:(NSString *)arg1 ;
-(void)setAnalyticsEventSource:(NSString *)arg1 ;
-(NSString *)analyticsEventSource;
-(NSString *)analyticsUUID;
-(BOOL)isEntityCard;
-(BOOL)hasPullToRefreshView;
-(BOOL)useLightBackgroundColor;
-(BOOL)beginSyncingDataInInit;
-(unsigned long long)initialDisplayOptions;
-(void)setUseLightBackgroundColor:(BOOL)arg1 ;
-(id)init;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)actionType;
@end
