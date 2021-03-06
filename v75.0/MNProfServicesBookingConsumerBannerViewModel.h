/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBProfServicesBookingDataModel;

@interface MNProfServicesBookingConsumerBannerViewModel : FBValueObject <NSCopying> {

	unsigned long long _pendingRequestCount;
	unsigned long long _confirmedRequestCount;
	FBProfServicesBookingDataModel* _bookingDataModel;

}

@property (nonatomic,readonly) unsigned long long pendingRequestCount;                              //@synthesize pendingRequestCount=_pendingRequestCount - In the implementation block
@property (nonatomic,readonly) unsigned long long confirmedRequestCount;                            //@synthesize confirmedRequestCount=_confirmedRequestCount - In the implementation block
@property (nonatomic,copy,readonly) FBProfServicesBookingDataModel * bookingDataModel;              //@synthesize bookingDataModel=_bookingDataModel - In the implementation block
-(unsigned long long)pendingRequestCount;
-(id)initWithPendingRequestCount:(unsigned long long)arg1 confirmedRequestCount:(unsigned long long)arg2 bookingDataModel:(id)arg3 ;
-(unsigned long long)confirmedRequestCount;
-(FBProfServicesBookingDataModel *)bookingDataModel;
@end

