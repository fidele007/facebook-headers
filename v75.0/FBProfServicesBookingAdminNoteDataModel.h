/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface FBProfServicesBookingAdminNoteDataModel : FBValueObject <NSCopying> {

	NSString* _bodyText;
	NSString* _noteCreatorName;
	NSDate* _createTime;
	NSString* _requestNoteId;

}

@property (nonatomic,copy,readonly) NSString * bodyText;                     //@synthesize bodyText=_bodyText - In the implementation block
@property (nonatomic,copy,readonly) NSString * noteCreatorName;              //@synthesize noteCreatorName=_noteCreatorName - In the implementation block
@property (nonatomic,copy,readonly) NSDate * createTime;                     //@synthesize createTime=_createTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestNoteId;                //@synthesize requestNoteId=_requestNoteId - In the implementation block
-(NSDate *)createTime;
-(NSString *)requestNoteId;
-(id)initWithBodyText:(id)arg1 noteCreatorName:(id)arg2 createTime:(id)arg3 requestNoteId:(id)arg4 ;
-(NSString *)noteCreatorName;
-(NSString *)bodyText;
@end
