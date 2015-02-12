//
//  Osoba.h
//  Core Data
//
//  Created by Piotr Mlynarski on 09.02.2015.
//  Copyright (c) 2015 Piotr Mlynarski. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Osoba : NSManagedObject

@property (nonatomic, retain) NSString * imie;
@property (nonatomic, retain) NSString * nazwisko;
@property (nonatomic, retain) NSString * pesel;

@end
