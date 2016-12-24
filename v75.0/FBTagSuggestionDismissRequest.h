/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequest.h>

@class NSString;

@interface FBTagSuggestionDismissRequest : FBNetworkerRequest {

	NSString* _photoFBID;
	NSString* _faceboxFBID;
	NSString* _dismissSource;

}

@property (nonatomic,copy) NSString * photoFBID;                  //@synthesize photoFBID=_photoFBID - In the implementation block
@property (nonatomic,copy) NSString * faceboxFBID;                //@synthesize faceboxFBID=_faceboxFBID - In the implementation block
@property (nonatomic,copy) NSString * dismissSource;              //@synthesize dismissSource=_dismissSource - In the implementation block
-(id)networkRequest;
-(NSString *)photoFBID;
-(void)setPhotoFBID:(NSString *)arg1 ;
-(id)initWithPhotoFBID:(id)arg1 faceboxFBID:(id)arg2 dismissSource:(id)arg3 callbackPerformer:(id)arg4 ;
-(NSString *)faceboxFBID;
-(void)setFaceboxFBID:(NSString *)arg1 ;
-(NSString *)dismissSource;
-(void)setDismissSource:(NSString *)arg1 ;
@end

