/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBMemPhoto, NSString, NSNumber, NSDate;


@protocol FBMediaContainerProtocol <NSObject>
@property (nonatomic,readonly) FBMemPhoto * mediaContainerCoverPhoto; 
@property (nonatomic,copy,readonly) NSString * mediaContainerName; 
@property (nonatomic,copy,readonly) NSNumber * size; 
@property (nonatomic,readonly) NSDate * modifiedTime; 
@property (nonatomic,copy,readonly) NSNumber * canViewerEdit; 
@property (nonatomic,copy,readonly) NSString * graphQLID; 
@required
-(NSString *)graphQLID;
-(NSDate *)modifiedTime;
-(NSNumber *)canViewerEdit;
-(id)titleForContainerForSession:(id)arg1;
-(id)coverPhotoForContainerForSession:(id)arg1;
-(FBMemPhoto *)mediaContainerCoverPhoto;
-(NSString *)mediaContainerName;
-(NSNumber *)size;

@end

