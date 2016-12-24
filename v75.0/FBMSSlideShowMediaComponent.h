/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKStatefulViewComponent.h>

@class NSArray, FBFeedToolbox;

@interface FBMSSlideShowMediaComponent : CKStatefulViewComponent {

	NSArray* _imageURLs;
	FBFeedToolbox* _toolbox;

}

@property (nonatomic,copy,readonly) NSArray * imageURLs;              //@synthesize imageURLs=_imageURLs - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;               //@synthesize toolbox=_toolbox - In the implementation block
+(id)newWithImageURLs:(id)arg1 uniqueID:(id)arg2 toolbox:(id)arg3 ;
-(FBFeedToolbox *)toolbox;
-(void)animate:(BOOL)arg1 ;
-(NSArray *)imageURLs;
@end
