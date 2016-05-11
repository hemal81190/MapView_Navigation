//
//  ViewController.h
//  MapView_Navigation
//
//  Created by Yosemite on 5/3/16.
//  Copyright (c) 2016 Yosemite. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
@interface ViewController : UIViewController<MKMapViewDelegate,CLLocationManagerDelegate>
@property (weak, nonatomic) IBOutlet MKMapView *map_vw;
@property(nonatomic, retain) CLLocationManager *locationManager;


@end

