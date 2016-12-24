/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, FBMLPhotoBeingUploadedInfo;

@interface FBMLPhotoUploaderState : NSObject {

	NSSet* _photoUUIDsToUpload;
	NSSet* _photoUUIDsNeedingMoreFreeSpace;
	FBMLPhotoBeingUploadedInfo* _photoBeingUploaded;

}

@property (nonatomic,copy) NSSet * photoUUIDsToUpload;                                     //@synthesize photoUUIDsToUpload=_photoUUIDsToUpload - In the implementation block
@property (nonatomic,copy) NSSet * photoUUIDsNeedingMoreFreeSpace;                         //@synthesize photoUUIDsNeedingMoreFreeSpace=_photoUUIDsNeedingMoreFreeSpace - In the implementation block
@property (nonatomic,retain) FBMLPhotoBeingUploadedInfo * photoBeingUploaded;              //@synthesize photoBeingUploaded=_photoBeingUploaded - In the implementation block
-(FBMLPhotoBeingUploadedInfo *)photoBeingUploaded;
-(NSSet *)photoUUIDsToUpload;
-(NSSet *)photoUUIDsNeedingMoreFreeSpace;
-(void)setPhotoUUIDsToUpload:(NSSet *)arg1 ;
-(void)setPhotoBeingUploaded:(FBMLPhotoBeingUploadedInfo *)arg1 ;
-(void)setPhotoUUIDsNeedingMoreFreeSpace:(NSSet *)arg1 ;
@end

