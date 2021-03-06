/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBMemPostTranslatability, NSString, FBFeedToolbox, NSArray;

@interface FBFeedTranslationMessageWrapperComponent : CKCompositeComponent {

	FBMemPostTranslatability* _postTranslatability;
	NSString* _storyID;
	FBFeedToolbox* _toolbox;
	NSArray* _translationActions;

}

@property (nonatomic,readonly) FBMemPostTranslatability * postTranslatability;              //@synthesize postTranslatability=_postTranslatability - In the implementation block
@property (nonatomic,copy,readonly) NSString * storyID;                                     //@synthesize storyID=_storyID - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;                                     //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,copy,readonly) NSArray * translationActions;                           //@synthesize translationActions=_translationActions - In the implementation block
+(id)newWithTranslationBodyComponent:(id)arg1 seeOriginalAction:(CKTypedComponentAction<>)arg2 hideOriginalAction:(CKTypedComponentAction<>)arg3 hideTranslationAction:(CKTypedComponentAction<>)arg4 neverTranslateAction:(CKTypedComponentAction<>)arg5 postTranslatability:(id)arg6 storyID:(id)arg7 translation:(id)arg8 toolbox:(id)arg9 ;
-(FBFeedToolbox *)toolbox;
-(NSString *)storyID;
-(FBMemPostTranslatability *)postTranslatability;
-(NSArray *)translationActions;
@end

