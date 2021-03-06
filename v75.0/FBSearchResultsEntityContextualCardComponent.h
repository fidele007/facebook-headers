/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class NSArray, FBSearchResultsContext;

@interface FBSearchResultsEntityContextualCardComponent : CKCompositeComponent {

	NSArray* _photos;
	FBSearchResultsContext* _context;
	CKTypedComponentAction<> _feedbackPhotoAction;

}
+(id)newWithTitle:(id)arg1 subtitle:(id)arg2 metadata:(id)arg3 imageComponent:(id)arg4 contextualItems:(const vector<FBSearchResultsEntityContextualItem, std::__1::allocator<FBSearchResultsEntityContextualItem> >*)arg5 photos:(id)arg6 action:(CKTypedComponentAction<>)arg7 context:(id)arg8 style:(const FBSearchResultsEntityContextualStyle*)arg9 ;
-(void)_didTap:(id)arg1 atPhotoIndex:(id)arg2 ;
@end

