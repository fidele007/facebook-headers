/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@protocol FBFriendingInfiniteHScrollDataSourceProtocol;
@class FBHScrollComponent, NSArray, NSString;

@interface FBFriendingInfiniteHScrollComponent : CKCompositeComponent {

	FBHScrollComponent* _hscroll;
	unsigned long long _componentCount;
	NSArray* _allObjects;
	BOOL _hasMoreObjects;
	id<FBFriendingInfiniteHScrollDataSourceProtocol> _dataSource;
	unsigned long long _endReason;
	unsigned long long _lastCompletedLoadIdentifier;
	NSString* _perfLoggingEventUnitTypeName;

}

@property (nonatomic,__weak,readonly) id<FBFriendingInfiniteHScrollDataSourceProtocol> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) unsigned long long endReason;                                                    //@synthesize endReason=_endReason - In the implementation block
@property (nonatomic,readonly) unsigned long long lastCompletedLoadIdentifier;                                  //@synthesize lastCompletedLoadIdentifier=_lastCompletedLoadIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * perfLoggingEventUnitTypeName;                                    //@synthesize perfLoggingEventUnitTypeName=_perfLoggingEventUnitTypeName - In the implementation block
+(id)newWithDataSource:(id)arg1 initialObjects:(id)arg2 hasMoreObjects:(BOOL)arg3 componentFactory:(/*^block*/id)arg4 initialLoadingCardComponent:(id)arg5 loadingCardComponent:(id)arg6 seeMoreCardComponent:(id)arg7 style:(FBHScrollComponentStyle)arg8 options:(FBHScrollOptions)arg9 perfLoggingEventUnitTypeName:(id)arg10 ;
+(id)perfLoggingEventNameForUnitType:(id)arg1 hscrollEvent:(id)arg2 ;
-(BOOL)hasMoreObjects;
-(void)scrollToComponentAtIndex:(unsigned long long)arg1 withDelay:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)scrollToNextFromContainedComponent:(id)arg1 withDelay:(BOOL)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)lastCompletedLoadIdentifier;
-(void)updateStateWithEndReason:(unsigned long long)arg1 allObjects:(id)arg2 lastCompletedLoadIdentifier:(unsigned long long)arg3 ;
-(void)updateStateWithEndReason:(unsigned long long)arg1 lastCompletedLoadIdentifier:(unsigned long long)arg2 ;
-(void)updateStateWithAllObjects:(id)arg1 lastCompletedLoadIdentifier:(unsigned long long)arg2 ;
-(void)scrollToBeginningWithDelay:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_perfLoggingEventNameForHScrollEvent:(id)arg1 ;
-(NSString *)perfLoggingEventUnitTypeName;
-(id<FBFriendingInfiniteHScrollDataSourceProtocol>)dataSource;
-(id)allObjects;
-(unsigned long long)endReason;
@end

