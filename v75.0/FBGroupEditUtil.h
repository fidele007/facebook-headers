/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBGroupEditUtil : NSObject
+(void)showCoverPhotoErrorMessage;
+(void)uploadCoverPhoto:(id)arg1 groupID:(id)arg2 uploadFailureBlock:(/*^block*/id)arg3 successBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 session:(id)arg6 ;
+(BOOL)isGroupNameValid:(id)arg1 ;
+(id)alertForInvalidGroupName;
@end

