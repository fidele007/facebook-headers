/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNFormattedDateStringCaching;
@class NSDateFormatter, FBLocalizedDateFormats, NSCalendar;

@interface MNDateFormatter : NSObject {

	NSDateFormatter* _dateFormatter;
	FBLocalizedDateFormats* _localizedDateFormats;
	NSCalendar* _autoupdatingCalendar;
	id<MNFormattedDateStringCaching> _cachedDateStrings;

}
-(void)_onDateFormatsChanged:(id)arg1 ;
-(id)_displayForMessageDate:(id)arg1 ;
-(id)_displayForCallLogDate:(id)arg1 ;
-(id)_displayForCallLogDetailDate:(id)arg1 ;
-(id)_displayForCallLogDetailHeaderDate:(id)arg1 ;
-(id)_displayForThreadDate:(id)arg1 ;
-(id)displayForMessageDate:(id)arg1 ;
-(id)_displayForReadReceiptDate:(id)arg1 ;
-(id)displayForReadReceiptDate:(id)arg1 ;
-(id)_displayForMessageDateInDetailsView:(id)arg1 ;
-(id)_displayForPhotoAccessibilityLabel:(id)arg1 ;
-(id)displayForTimeSeparatorMessageDate:(id)arg1 ;
-(id)displayForThreadDateInGroupsTab:(id)arg1 ;
-(id)displayForCallLogDate:(id)arg1 ;
-(id)displayForCallLogDetailDate:(id)arg1 ;
-(id)displayForCallLogDetailHeaderDate:(id)arg1 ;
-(id)displayForThreadDate:(id)arg1 ;
-(id)displayForMessageDateInDetailsView:(id)arg1 ;
-(id)displayForPhotoAccessibilityLabel:(id)arg1 ;
-(id)displayForBlockedUserDate:(id)arg1 ;
-(id)displayForLiveLocationExpirationDate:(id)arg1 ;
-(void)dealloc;
-(id)initWithCache:(id)arg1 ;
@end

