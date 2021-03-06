/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBMultiPickerPhotoAttachment;

@interface FBLocalPhotoMenuUploadModel : NSObject {

	long long _order;
	NSString* _photoDescription;
	FBMultiPickerPhotoAttachment* _attachment;

}

@property (nonatomic,readonly) long long order;                                        //@synthesize order=_order - In the implementation block
@property (nonatomic,copy,readonly) NSString * photoDescription;                       //@synthesize photoDescription=_photoDescription - In the implementation block
@property (nonatomic,readonly) FBMultiPickerPhotoAttachment * attachment;              //@synthesize attachment=_attachment - In the implementation block
-(NSString *)photoDescription;
-(id)initWithOrder:(long long)arg1 photoDescription:(id)arg2 attachment:(id)arg3 ;
-(long long)order;
-(FBMultiPickerPhotoAttachment *)attachment;
@end

