//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LCBaseModel.h"

@class NSString;

@interface TemplateConfig : LCBaseModel
{
    NSString *_templateUrl;
    NSString *_templateMD5;
    NSString *_urlRule;
    NSString *_findText;
    long long _collect_rate;
}

@property(nonatomic) long long collect_rate; // @synthesize collect_rate=_collect_rate;
@property(retain, nonatomic) NSString *findText; // @synthesize findText=_findText;
@property(retain, nonatomic) NSString *urlRule; // @synthesize urlRule=_urlRule;
@property(retain, nonatomic) NSString *templateMD5; // @synthesize templateMD5=_templateMD5;
@property(retain, nonatomic) NSString *templateUrl; // @synthesize templateUrl=_templateUrl;
- (void).cxx_destruct;
- (id)initWithAttribute:(id)arg1;

@end
