/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSArray;

@interface FBPlatformSharePublishingBundle : FBValueObject <NSCopying> {

	NSString* _ref;
	NSString* _actionType;
	NSDictionary* _actionParameters;
	NSDictionary* _actionPropertyToCreatedObjectType;
	NSArray* _ogMediaAttachmentsForUpload;
	NSArray* _ogMediaAttachmentsForDisplay;
	NSArray* _imageAttachments;

}

@property (nonatomic,copy,readonly) NSString * ref;                                                //@synthesize ref=_ref - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionType;                                         //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * actionParameters;                               //@synthesize actionParameters=_actionParameters - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * actionPropertyToCreatedObjectType;              //@synthesize actionPropertyToCreatedObjectType=_actionPropertyToCreatedObjectType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * ogMediaAttachmentsForUpload;                         //@synthesize ogMediaAttachmentsForUpload=_ogMediaAttachmentsForUpload - In the implementation block
@property (nonatomic,copy,readonly) NSArray * ogMediaAttachmentsForDisplay;                        //@synthesize ogMediaAttachmentsForDisplay=_ogMediaAttachmentsForDisplay - In the implementation block
@property (nonatomic,copy,readonly) NSArray * imageAttachments;                                    //@synthesize imageAttachments=_imageAttachments - In the implementation block
-(NSArray *)imageAttachments;
-(NSDictionary *)actionPropertyToCreatedObjectType;
-(NSArray *)ogMediaAttachmentsForUpload;
-(id)initWithRef:(id)arg1 actionType:(id)arg2 actionParameters:(id)arg3 actionPropertyToCreatedObjectType:(id)arg4 ogMediaAttachmentsForUpload:(id)arg5 ogMediaAttachmentsForDisplay:(id)arg6 imageAttachments:(id)arg7 ;
-(NSArray *)ogMediaAttachmentsForDisplay;
-(NSString *)ref;
-(NSDictionary *)actionParameters;
-(NSString *)actionType;
@end
