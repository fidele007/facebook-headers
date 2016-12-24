/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBProfServicesBookingDataModel, NSString;

@interface MNPSBookingXMADataModel : FBValueObject <NSCopying> {

	BOOL _actsAsAdmin;
	FBProfServicesBookingDataModel* _bookingDataModel;
	NSString* _messageBubbleType;

}

@property (nonatomic,copy,readonly) FBProfServicesBookingDataModel * bookingDataModel;              //@synthesize bookingDataModel=_bookingDataModel - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageBubbleType;                                   //@synthesize messageBubbleType=_messageBubbleType - In the implementation block
@property (nonatomic,readonly) BOOL actsAsAdmin;                                                    //@synthesize actsAsAdmin=_actsAsAdmin - In the implementation block
-(NSString *)messageBubbleType;
-(FBProfServicesBookingDataModel *)bookingDataModel;
-(BOOL)actsAsAdmin;
-(id)initWithBookingDataModel:(id)arg1 messageBubbleType:(id)arg2 actsAsAdmin:(BOOL)arg3 ;
@end

