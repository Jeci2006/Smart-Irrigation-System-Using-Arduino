                    ┌───────────────┐
                    │     START     │
                    └───────┬───────┘
                            │
                            ▼
              ┌─────────────────────────┐
              │ Initialize Arduino UNO  │
              │ Relay, Sensors, Serial  │
              └──────────┬──────────────┘
                         │
                         ▼
         ┌─────────────────────────────────┐
         │ Read Front Soil Moisture (A0)   │
         │ Read End Soil Moisture (A1)     │
         └──────────────┬──────────────────┘
                        │
                        ▼
        ┌──────────────────────────────────┐
        │ Are BOTH sensors DRY?            │
        │ (Front > Dry Threshold AND       │
        │  End > Dry Threshold)            │
        └──────────────┬───────────────────┘
                 Yes   │      No
                      ▼          ▼
          ┌────────────────┐   ┌───────────────────────────┐
          │ Turn Motor ON  │   │ Are BOTH sensors WET?     │
          └──────┬─────────┘   │ (Front < Wet Threshold    │
                 │             │  AND End < Wet Threshold) │
                 │             └─────────────┬─────────────┘
                 │                     Yes   │      No
                 │                          ▼         ▼
                 │                ┌────────────────┐ ┌──────────────────────┐
                 │                │ Turn Motor OFF │ │ Continue Monitoring  │
                 │                └──────┬─────────┘ └──────────┬───────────┘
                 │                       │                      │
                 └───────────────────────┴──────────────────────┘
                                         │
                                         ▼
                                 Delay 2 Seconds
                                         │
                                         ▼
                               Repeat the Process
