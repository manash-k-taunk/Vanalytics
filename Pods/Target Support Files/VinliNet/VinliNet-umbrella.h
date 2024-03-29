#ifdef __OBJC__
#import <UIKit/UIKit.h>
#endif

#import "JCDHTTPConnection.h"
#import "NSDictionary+NonNullable.h"
#import "NSHTTPURLResponse+VLAdditions.h"
#import "NSString+Random.h"
#import "VinliSDK.h"
#import "VLAccelData.h"
#import "VLBatteryStatus.h"
#import "VLBearing.h"
#import "VLBearingCalculator.h"
#import "VLBearingFilter.h"
#import "VLBoundary.h"
#import "VLChronoPager.h"
#import "VLCode.h"
#import "VLCoordinate.h"
#import "VLDateFormatter.h"
#import "VLDevice.h"
#import "VLDevicePager.h"
#import "VLDistance.h"
#import "VLDistancePager.h"
#import "VLDtc.h"
#import "VLEvent.h"
#import "VLEventPager.h"
#import "VLGeometryFilter.h"
#import "VLLocation.h"
#import "VLLocationPager.h"
#import "VLLoginButton.h"
#import "VLLoginViewController.h"
#import "VLNotification.h"
#import "VLNotificationPager.h"
#import "VLOBDDataParser.h"
#import "VLObjectRef.h"
#import "VLOdometer.h"
#import "VLOdometerPager.h"
#import "VLOdometerTrigger.h"
#import "VLOdometerTriggerPager.h"
#import "VLOffsetPager.h"
#import "VLPager.h"
#import "VLParametricBoundary.h"
#import "VLParametricFilter.h"
#import "VLParsable.h"
#import "VLPolygonBoundary.h"
#import "VLRadiusBoundary.h"
#import "VLReportCard.h"
#import "VLReportCardPager.h"
#import "VLRequestHeader.h"
#import "VLRule.h"
#import "VLRulePager.h"
#import "VLService.h"
#import "VLSession.h"
#import "VLSessionManager.h"
#import "VLSIMSignal.h"
#import "VLSnapshot.h"
#import "VLSnapshotPager.h"
#import "VLStream.h"
#import "VLStreamMessage.h"
#import "VLSubscription.h"
#import "VLSubscriptionPager.h"
#import "VLSupportedPids.h"
#import "VLTelemetryMessage.h"
#import "VLTelemetryMessagePager.h"
#import "VLTimeSeries.h"
#import "VLTrip.h"
#import "VLTripPager.h"
#import "VLUDPSocket.h"
#import "VLUnitLocalizer.h"
#import "VLUrlParser.h"
#import "VLUser.h"
#import "VLUserCache.h"
#import "VLUserSettings.h"
#import "VLVehicle.h"
#import "VLVehiclePager.h"
#import "VLWebSocket.h"

FOUNDATION_EXPORT double VinliNetVersionNumber;
FOUNDATION_EXPORT const unsigned char VinliNetVersionString[];

