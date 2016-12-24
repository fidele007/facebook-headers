/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, NSString, NSURL;


@protocol FBMenuItem <NSObject>
@property (nonatomic,retain) NSNumber * badgeCount; 
@property (nonatomic,copy,readonly) NSString * bookmarkID; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * subtitleName; 
@property (nonatomic,copy,readonly) NSString * typeAttribute; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,copy,readonly) NSURL * imageURL; 
@property (nonatomic,copy,readonly) NSString * highlightType; 
@required
-(NSString *)highlightType;
-(NSString *)subtitleName;
-(NSURL *)url;
-(NSString *)displayName;
-(NSString *)bookmarkID;
-(NSURL *)imageURL;
-(NSString *)typeAttribute;
-(void)setBadgeCount:(id)arg1;
-(NSNumber *)badgeCount;

@end
