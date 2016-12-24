/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemGroup, NSString, NSURL;

@interface FBGroupFeedHeaderModel : FBValueObject <NSCopying> {

	BOOL _viewerCanChangeImage;
	FBMemGroup* _group;
	NSString* _groupName;
	NSString* _subtitle;
	NSURL* _coverPhotoURL;
	NSString* _coverPhotoGraphQLID;
	CGPoint _coverPhotoFocusPoint;

}

@property (nonatomic,copy,readonly) FBMemGroup * group;                          //@synthesize group=_group - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupName;                        //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                         //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSURL * coverPhotoURL;                       //@synthesize coverPhotoURL=_coverPhotoURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * coverPhotoGraphQLID;              //@synthesize coverPhotoGraphQLID=_coverPhotoGraphQLID - In the implementation block
@property (nonatomic,readonly) BOOL viewerCanChangeImage;                        //@synthesize viewerCanChangeImage=_viewerCanChangeImage - In the implementation block
@property (nonatomic,readonly) CGPoint coverPhotoFocusPoint;                     //@synthesize coverPhotoFocusPoint=_coverPhotoFocusPoint - In the implementation block
-(NSString *)coverPhotoGraphQLID;
-(NSURL *)coverPhotoURL;
-(BOOL)viewerCanChangeImage;
-(CGPoint)coverPhotoFocusPoint;
-(id)initWithGroup:(id)arg1 groupName:(id)arg2 subtitle:(id)arg3 coverPhotoURL:(id)arg4 coverPhotoGraphQLID:(id)arg5 viewerCanChangeImage:(BOOL)arg6 coverPhotoFocusPoint:(CGPoint)arg7 ;
-(NSString *)subtitle;
-(NSString *)groupName;
-(FBMemGroup *)group;
@end

