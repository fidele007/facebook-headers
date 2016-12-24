/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMediaContainerProtocol.h>

@protocol FBAvatarProtocol;
@class FBMemPhoto, NSString, NSNumber, NSDate, FBMemModelObject;

@interface FBMediaSetTokenMediaContainer : NSObject <FBMediaContainerProtocol> {

	FBMemModelObject*<FBAvatarProtocol> _owner;
	NSString* _mediaSetToken;

}

@property (nonatomic,copy) NSString * mediaSetToken;                               //@synthesize mediaSetToken=_mediaSetToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBMemPhoto * mediaContainerCoverPhoto; 
@property (nonatomic,copy,readonly) NSString * mediaContainerName; 
@property (nonatomic,copy,readonly) NSNumber * size; 
@property (nonatomic,readonly) NSDate * modifiedTime; 
@property (nonatomic,copy,readonly) NSNumber * canViewerEdit; 
@property (nonatomic,copy,readonly) NSString * graphQLID; 
-(NSString *)graphQLID;
-(id)initWithMediaSetKey:(id)arg1 fbid:(id)arg2 owner:(id)arg3 ;
-(NSNumber *)canViewerEdit;
-(id)titleForContainerForSession:(id)arg1 ;
-(id)coverPhotoForContainerForSession:(id)arg1 ;
-(id)initWithMediaSetToken:(id)arg1 owner:(id)arg2 ;
-(FBMemPhoto *)mediaContainerCoverPhoto;
-(NSString *)mediaContainerName;
-(NSString *)mediaSetToken;
-(void)setMediaSetToken:(NSString *)arg1 ;
-(NSNumber *)size;
@end

