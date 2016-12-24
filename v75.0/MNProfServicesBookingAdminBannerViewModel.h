/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBProfServicesBookingDataModel;

@interface MNProfServicesBookingAdminBannerViewModel : FBValueObject <NSCopying> {

	unsigned long long _pendingRequestCount;
	unsigned long long _requestedRequestCount;
	NSString* _userName;
	FBProfServicesBookingDataModel* _bookingViewModel;

}

@property (nonatomic,readonly) unsigned long long pendingRequestCount;                              //@synthesize pendingRequestCount=_pendingRequestCount - In the implementation block
@property (nonatomic,readonly) unsigned long long requestedRequestCount;                            //@synthesize requestedRequestCount=_requestedRequestCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * userName;                                            //@synthesize userName=_userName - In the implementation block
@property (nonatomic,copy,readonly) FBProfServicesBookingDataModel * bookingViewModel;              //@synthesize bookingViewModel=_bookingViewModel - In the implementation block
-(unsigned long long)pendingRequestCount;
-(id)initWithPendingRequestCount:(unsigned long long)arg1 requestedRequestCount:(unsigned long long)arg2 userName:(id)arg3 bookingViewModel:(id)arg4 ;
-(unsigned long long)requestedRequestCount;
-(FBProfServicesBookingDataModel *)bookingViewModel;
-(NSString *)userName;
@end
