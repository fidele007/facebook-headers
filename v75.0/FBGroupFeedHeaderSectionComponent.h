/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCompositeSectionComponent.h>

@class NSString, FBGroupToolbox;

@interface FBGroupFeedHeaderSectionComponent : FBCompositeSectionComponent {

	NSString* _groupID;
	FBGroupToolbox* _toolbox;

}

@property (nonatomic,copy,readonly) NSString * groupID;               //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,readonly) FBGroupToolbox * toolbox;              //@synthesize toolbox=_toolbox - In the implementation block
+(id)newWithGroupID:(id)arg1 toolbox:(id)arg2 ;
+(id)initialState;
-(FBGroupToolbox *)toolbox;
-(NSString *)groupID;
@end

