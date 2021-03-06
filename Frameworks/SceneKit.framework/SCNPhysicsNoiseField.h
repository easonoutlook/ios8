/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SceneKit/SCNPhysicsField.h>

@interface SCNPhysicsNoiseField : SCNPhysicsField
{
    double _scale;
    long long _octaves;
    double _speed;
}

+ (_Bool)supportsSecureCoding;
+ (id)SCNJSExportProtocol;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) double speed;
@property(nonatomic) long long octaves;
@property(nonatomic) double scale;
-     // Error parsing type: ^{c3dPhysicsField=^^?{?=[4]}{?=[4]}fffIBBBBf}16@0:8, name: _createField
- (id)init;

@end

