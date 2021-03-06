/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBRichStoryBlockAdapter.h>

@class FBMemModelObject, NSURL, FBRichStoryAdapterToolbox, NSString, NSDictionary;

@interface FBSubscriptionElementStoryBlockAdapter : NSObject <FBRichStoryBlockAdapter> {

	FBMemModelObject* _dataModel;
	NSURL* _profilePictureURL;
	FBRichStoryAdapterToolbox* _toolbox;

}

@property (nonatomic,readonly) FBMemModelObject * dataModel;                            //@synthesize dataModel=_dataModel - In the implementation block
@property (nonatomic,copy,readonly) NSURL * profilePictureURL;                          //@synthesize profilePictureURL=_profilePictureURL - In the implementation block
@property (nonatomic,readonly) FBRichStoryAdapterToolbox * toolbox;                     //@synthesize toolbox=_toolbox - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * presentationAttributes; 
@property (assign,nonatomic) long long layoutDirection; 
+(BOOL)canAdaptDataModel:(id)arg1 ;
+(id)adapterWithDataModel:(id)arg1 toolbox:(id)arg2 ;
-(FBRichStoryAdapterToolbox *)toolbox;
-(NSURL *)profilePictureURL;
-(FBMemModelObject *)dataModel;
-(id)_initWithDataModel:(id)arg1 toolbox:(id)arg2 ;
-(id)viewModel;
-(NSDictionary *)presentationAttributes;
@end

