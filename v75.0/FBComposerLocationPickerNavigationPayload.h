/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBComposerLocationPickerOpenType, FBComposerDestinationUpdate;

@interface FBComposerLocationPickerNavigationPayload : FBValueObject <NSCopying> {

	BOOL _logCheckInButtonPerformance;
	double _querylessSearchTimeout;
	FBComposerLocationPickerOpenType* _openType;
	FBComposerDestinationUpdate* _nextDestinationUpdate;

}

@property (nonatomic,readonly) double querylessSearchTimeout;                                         //@synthesize querylessSearchTimeout=_querylessSearchTimeout - In the implementation block
@property (nonatomic,copy,readonly) FBComposerLocationPickerOpenType * openType;                      //@synthesize openType=_openType - In the implementation block
@property (nonatomic,copy,readonly) FBComposerDestinationUpdate * nextDestinationUpdate;              //@synthesize nextDestinationUpdate=_nextDestinationUpdate - In the implementation block
@property (nonatomic,readonly) BOOL logCheckInButtonPerformance;                                      //@synthesize logCheckInButtonPerformance=_logCheckInButtonPerformance - In the implementation block
-(id)initWithQuerylessSearchTimeout:(double)arg1 openType:(id)arg2 nextDestinationUpdate:(id)arg3 logCheckInButtonPerformance:(BOOL)arg4 ;
-(FBComposerDestinationUpdate *)nextDestinationUpdate;
-(FBComposerLocationPickerOpenType *)openType;
-(BOOL)logCheckInButtonPerformance;
-(double)querylessSearchTimeout;
@end

