https://ocw.mit.edu/courses/mas-531-computational-camera-and-photography-fall-2009/pages/syllabus/

Readout speeds refer to the speed at which data is transferred from a sensor to a 
digital format.

Rolling Shutter
How It Works: A rolling shutter captures images by scanning the sensor line by line from top to bottom. This means that different parts of the image are exposed at slightly different times, which can lead to distortions, especially with fast-moving subjects or quick camera movements. 

Common Artifacts: The rolling shutter effect can cause issues such as:
Jello Effect: Objects appear to wobble unnaturally.

Skew: Straight lines may appear slanted or tilted during fast pans.

Smear: Fast-moving objects can look stretched or smeared across the frame. 

Advantages: Rolling shutters are generally more cost-effective and consume less power, making them popular in consumer electronics like smartphones and entry-level cameras.

As the light rays fall inverted the rolling shutter expose the sensor from bottom to top so that the image formed is top to bottom.
but in the electronic   shutter by turning rows of pixels on and off,sequentially to capture image.
entire image is scanned line by line . 

CMOS sensor(CIS)
This is a electronic film inside digital cameras.
Basic workflow is -Light-electrical signals-image.
Modern CIS uses 4T pinned photodiode pixels replacing 3T pixels.

4T structure

*PPD
.A buried n- region beneath a p+ pinning layer
.Eliminates surface dark current
.Allows true electronic shuttering
.Improves full-well capacity and quantum efficiency

*Transfer Gate(TX)
.Moves charge from PPD - Floating diffusion(FD)
.Allows correlated double sampling(CDS)

*Reset transistor(RST)
.Resets FD node to VRST 

*Source Follower(SF)
.Converts charge to voltage

*Row select transistor(RS)


PPD-TX-FD-SF-Column bus
       |   |
       RST RS
KEY PIXEL PARAMETERS
.FWC
.CG
.Read noise
.Dark current
