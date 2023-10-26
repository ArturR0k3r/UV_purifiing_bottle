# UV_purifiing_bottle
Design and implimentation of self purifiing water
bottle using UV radiation method
Sirbu Artur
Universitatea Technica a Moldovei
artur2003s.ass@gmail.com
Summary- This research paper introduces a self-purifying water bottle designed to address the global challenge of providing
clean and safe drinking water. The bottle utilizes UV radiation technology for efficient water purification on-the-go. By
neutralizing harmful microorganisms without chemicals or additional filtration systems, the UV radiation method offers a
convenient and cost-effective solution. The paper presents a comprehensive design and implementation process, including
considerations for bottle design, UV radiation source selection, power supply, and control mechanisms. The chosen ATtiny85
microcontroller ensures efficient operation, while the integration of touch buttons and LED indicators enhances user experience.
The housing design focuses on practicality and incorporates materials that reflect UV light. The software code provided
demonstrates basic LED control and touch button interaction. This self-purifying water bottle has the potential to revolutionize
water purification, providing a portable, efficient, and chemical-free method for ensuring the safety of drinking water,
particularly in areas with limited access to clean water sources.
Key words: Self-purifying water bottle, UV radiation, Water purification, Portable water treatment
Introduction
Access to clean and safe drinking water is a fundamental necessity for human health and well-being. However,
a significant portion of the global population still lacks access to reliable sources of potable water, leading to
the outbreak of waterborne diseases and related health issues. In recent years, various technologies have been
developed to address this challenge, and one such innovative solution is the self-purifying water bottle utilizing
UV radiation. This research paper aims to design and implement a water bottle that integrates UV radiation
technology to provide an efficient and portable method for purifying water on-the-go.
The UV radiation method has gained considerable attention due to its ability to neutralize harmful
microorganisms present in water, such as bacteria, viruses, and protozoa, without the use of chemicals or
additional filtration systems. By leveraging the power of ultraviolet light, this self-purifying water bottle offers
a convenient and cost-effective solution to ensure the safety of drinking water, especially in situations where
access to clean water sources is limited or compromised.
The primary objective of this research paper is to present a comprehensive design and implementation process
for the self-purifying water bottle using UV radiation. The study will explore the necessary considerations in
terms of bottle design, UV radiation source selection, power supply, and control mechanisms to ensure effective
purification while maintaining user convenience and portability. Furthermore, the research will focus on
evaluating the performance of the water bottle through extensive testing and analysis, comparing its purification
efficiency with existing water treatment methods.
The outcomes of this research hold significant potential for addressing the water contamination challenges
faced by individuals, travelers, and communities in various settings. The self-purifying water bottle has the
potential to become a valuable tool in emergency situations, outdoor activities, and regions with limited access
to clean water sources, improving the overall quality of life and reducing the risks associated with waterborne
diseases.
In conclusion, this research paper will contribute to the field of water purification technology by presenting a
detailed design and implementation process for a self-purifying water bottle using UV radiation. The innovative
solution has the potential to revolutionize the way we ensure the safety of drinking water, offering a portable,
efficient, and chemical-free method for water purification. By addressing the pressing need for clean drinking
water, this research aims to make a positive impact on global health and well-being.
Content of the work
The design and implementation of a self-purifying water bottle utilizing UV radiation represents an innovative approach to
address the global challenge of providing clean and safe drinking water. This segment will delve deeper into the theoretical
foundations of water purification using UV radiation and the advantages it offers, while also discussing the necessary
considerations for the design and implementation of the self-purifying water bottle.
I. Gathering Theoretical Information
Water Purification with UV Radiation: Water purification using UV radiation is an effective and reagent-free method that
can neutralize a wide range of pathogens and bacteria. The bactericidal effect of UV radiation depends on factors such as
the exposure time and the wavelength of the UV radiation. When water is exposed to UV rays, the DNA molecules of
microorganisms undergo chemical reactions, resulting in irreversible damage and the destruction of cytoplasmic
membranes and protective cell envelopes [1]. This method offers several advantages for water purification:
1. Effectiveness: UV radiation can target various types of pathogenic microflora, including spore-forming and
vegetative bacteria, viruses, and protozoa [1]. It provides a comprehensive disinfection solution that can
significantly reduce the risk of waterborne diseases.
2. Environmental Safety: UV radiation is a reagent-free method, eliminating the need for chemicals such as chlorine.
It does not introduce any harmful byproducts or residual chemicals into the water, making it an environmentally
friendly approach.
3. Water Quality: UV radiation does not alter the chemical composition or taste of the water, ensuring that the
purified water retains its original qualities. There is no risk of over chlorination or the formation of disinfection
byproducts.
4. User-Friendly and Low Maintenance: UV systems are relatively simple to operate and require minimal
maintenance. Once installed, they provide continuous disinfection without the need for frequent adjustments or
monitoring.
5. Operational Efficiency: UV systems have low operational costs compared to other water treatment methods. They
consume less energy and have lower maintenance requirements, making them cost-effective solutions in the long
run.
UV Wavelength and Sources: The efficiency of water purification with UV radiation is influenced by the specific
wavelength of UV light used. UV light is categorized into three regions based on wavelength: UVA (320 to 400 nm), UVB
(280 to 320 nm), and UVC (200 to 280 nm) [2]. The most effective germicidal wavelength for water disinfection falls
within the UVC range, particularly around 260 to 265 nm [3, 4]. This wavelength is highly absorbed by the DNA of
microorganisms, leading to their inactivation.
To generate the required UV radiation, UV-LEDs (Ultraviolet Light-Emitting Diodes) are often used as the light source.
UV-LEDs offer precise control over the emitted wavelength, making them suitable for targeting the germicidal range. They
also have advantages such as compact size, durability, and low energy consumption, making them ideal for portable
applications like a self-purifying water bottle.
In the context of designing and implementing a self-purifying water bottle, the choice of UV source and its integration into
the bottle's structure is a crucial consideration. Factors such as power supply, UV intensity, exposure duration, and the need
for control mechanisms should be carefully addressed to ensure optimal performance and user convenience.
By incorporating these theoretical foundations, the design and implementation process of the self-purifying water bottle
can progress effectively. The next steps involve practical aspects such as engineering the UV radiation system, developing
the power supply mechanism, integrating safety measures, and assessing the performance through comprehensive testing
and analysis.
II Hardware Development and UV Light Source Selection
The design and implementation of a self-purifying water bottle utilizing UV radiation represents a significant advancement
in water purification technology. This segment focuses on the hardware development process, including the schematic
design, printed circuit board (PCB) layout, and the selection of the UV light source. The integration of touch buttons and
LED indicators further enhances the user experience. The following sections provide an overview of the design process,
the hardware components used, and the selection of the UV light source.
Schematic and PCB Design: The schematic and PCB layout for the self-purifying water bottle were developed using
EasyEDA, a user-friendly electronics design software. The schematic design includes the integration of a touch button
based on the TTP223 integrated circuit, allowing convenient operation for the user. Figures 1, 2, and 3 showcase the
schematic and PCB design on both sides.
Touch Button Integration: To enhance the user experience and provide seamless control, a touch button based on the
TTP223 integrated circuit was incorporated into the design. This touch button technology enables intuitive and reliable
user interaction, making it easy to activate the self-purification process.
LED Indicators: For improved user feedback, three LEDs were integrated into the design and placed on top of the bottle
cap. These LEDs serve as indicators to provide visual cues regarding the status of the purification process. The LEDs
illuminate different colours to signify power on/off, purification in progress, and completion of the purification cycle.
UV Light Source Selection:
The effectiveness of the self-purifying water bottle heavily relies on the UV light source used. After careful evaluation, the
OP255-10P-SM UV light source from OPTAN manufacturer was chosen for its exceptional performance and reliability.
This UV light source emits ultraviolet radiation within the germicidal range, specifically targeting the wavelength required
for efficient water disinfection.
Power Source:
To ensure portability and convenience, the power source for the self-purifying water bottle is provided by CR1602
batteries. These compact and durable batteries were selected for their suitable power capacity and compatibility with the
design requirements. The power source plays a crucial role in sustaining the operation of the UV light source and other
integrated components throughout the purification cycle.
The hardware development phase of the self-purifying water bottle has been successfully accomplished, incorporating a
touch button interface, LED indicators, and an optimal UV light source. The integration of these components ensures userfriendly operation and efficient water disinfection. The next steps involve the implementation of the electrical and
mechanical aspects, followed by thorough testing to validate the performance and functionality of the self-purifying water
bottle.
Programable Integrated Circuit:
In the design and implementation of the self-purifying water bottle, the choice of a programmable integrated circuit (IC) is
crucial for controlling various functions and ensuring efficient operation. For this project, the ATtiny85 microcontroller
from Microchip was selected due to its versatile features and suitability for low-power applications.
The ATtiny85 microcontroller
offers a compact size and low
power consumption, making it
an ideal choice for portable
devices like the self-purifying
water bottle. It has 8KB of
flash memory, allowing for the
storage of the necessary
program code. Additionally, it
features 512 bytes of
EEPROM and 512 bytes of
SRAM, providing ample space
for data storage and
manipulation.
Fig 1 Schematic
Fig 2, 3 PCB design both sides
Fig 4 from datasheet characteristics of selected UV LEDs
III. Concept design of housing and Software
In addition to the hardware development discussed earlier, the
concept design of the housing and the software implementation are
crucial aspects of the self-purifying water bottle. This section will
outline the concept design of the housing and provide an overview
of the software code used for controlling the LEDs and touch button
functionality.The software code provided below demonstrates the
basic functionality of the self-purifying water bottle's LED control
and touch button interaction. The code is written in the C++
(Arduino IDE) programming language and utilizes specific pin
assignments for the LEDs, touch button, and other components. The
code initializes the necessary pin modes for the LEDs, touch button,
and battery ADC (Analog-to-Digital Converter). The loop function
controls the behaviour of the LEDs based on specific timing
conditions and touch button input. Initially, all LEDs are set to high
(ON) for a defined wait time(10min). After this duration, the LEDs
are turned off (LOW) for a specific work time (5min.). If the touch
button is pressed during the wait time, the LEDs are also turned off.
This basic code structure can be further expanded to include
additional features and functionality as required
Concept Design of Housing: The
housing of the self-purifying water bottle is designed to be
compact, ergonomic, and user-friendly. It aims to provide a
comfortable grip while ensuring the protection and integration of
the various components. The concept design focuses on
practicality, aesthetics, and ease of use, allowing for easy refilling
and effortless operation also should be noticed that materials must
be that reflect UV light for example polished aluminium the PCB is
in the cap of the bottle and is protected from water by epoxy raisin
Conclusion
The design and implementation of a self-purifying water bottle
using UV radiation technology represents an innovative solution to
address the global challenge of providing clean and safe drinking
water. This research paper has presented a comprehensive design
and implementation process for such a water bottle, incorporating
theoretical foundations, hardware development, and software
implementation.
The use of UV radiation for water purification offers several
advantages, including effectiveness against a wide range of
pathogens, environmental safety, maintenance simplicity, and
operational efficiency. The selection of the UV light source, specifically targeting the germicidal range, ensures optimal
disinfection performance. The integration of touch buttons and LED indicators enhances the user experience and provides
visual cues regarding the purification process.
The hardware development phase successfully accomplished the schematic and PCB design, incorporating a touch button
interface, LED indicators, and an optimal UV light source. The chosen ATtiny85 microcontroller from Microchip ensures
efficient control and operation of various functions while maintaining low power consumption and compact size.
The concept design of the housing focuses on practicality, aesthetics, and ease of use, ensuring protection and integration
of the components. Materials that reflect UV light, such as polished aluminium, are utilized to enhance the effectiveness of
the UV radiation process.
The software implementation utilizes the Arduino IDE and the C++ programming language to control the LEDs and touch
button functionality. The provided code demonstrates the basic behaviour of the self-purifying water bottle, which can be
further expanded to include additional features and functionality.
Overall, this research paper contributes to the field of water purification technology by presenting a detailed design and
implementation process for a self-purifying water bottle using UV radiation. The innovative solution offers a portable,
efficient, and chemical-free method for water purification, addressing the pressing need for clean drinking water and
making a positive impact on global health and well-being.
Bibliography
1. https://rbkv.ru/s/news/20180702084434
2. Guerrero-Beltrán JA, Barbosa-Cánovas GV. 2004. Review: advantages and limitations on processing foods by UV light. Food Sci Technol Int 10:137–
147. doi: 10.1177/1082013204044359.
3. Kalisvaart BF. 2004. Re-use of wastewater: preventing the recovery of pathogens by using medium-pressure UV lamp technology. Water Sci Technol
50:337–344.
4. Sharma G. 2000. Ultraviolet light. Encyclopedia Food Microbiol 3:2208–2214.
