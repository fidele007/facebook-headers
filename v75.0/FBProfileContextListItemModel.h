/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, FBMemTimelineContextListItem, FBMemPerson;

@interface FBProfileContextListItemModel : FBValueObject <NSCopying> {

	BOOL _isHighQuality;
	BOOL _shouldHideContextListItemNux;
	NSURL* _imageUrl;
	NSString* _title;
	NSString* _fbglyphName;
	FBMemTimelineContextListItem* _contextListItem;
	long long _badgeCount;
	FBMemPerson* _targetPerson;

}

@property (nonatomic,copy,readonly) NSURL * imageUrl;                                            //@synthesize imageUrl=_imageUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * fbglyphName;                                      //@synthesize fbglyphName=_fbglyphName - In the implementation block
@property (nonatomic,copy,readonly) FBMemTimelineContextListItem * contextListItem;              //@synthesize contextListItem=_contextListItem - In the implementation block
@property (nonatomic,readonly) BOOL isHighQuality;                                               //@synthesize isHighQuality=_isHighQuality - In the implementation block
@property (nonatomic,readonly) long long badgeCount;                                             //@synthesize badgeCount=_badgeCount - In the implementation block
@property (nonatomic,copy,readonly) FBMemPerson * targetPerson;                                  //@synthesize targetPerson=_targetPerson - In the implementation block
@property (nonatomic,readonly) BOOL shouldHideContextListItemNux;                                //@synthesize shouldHideContextListItemNux=_shouldHideContextListItemNux - In the implementation block
-(id)initWithImageUrl:(id)arg1 title:(id)arg2 fbglyphName:(id)arg3 contextListItem:(id)arg4 isHighQuality:(BOOL)arg5 badgeCount:(long long)arg6 targetPerson:(id)arg7 shouldHideContextListItemNux:(BOOL)arg8 ;
-(FBMemTimelineContextListItem *)contextListItem;
-(NSURL *)imageUrl;
-(NSString *)fbglyphName;
-(FBMemPerson *)targetPerson;
-(BOOL)shouldHideContextListItemNux;
-(BOOL)isHighQuality;
-(NSString *)title;
-(long long)badgeCount;
@end

