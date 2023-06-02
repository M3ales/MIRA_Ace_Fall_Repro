# MIRA_Ace_Fall_Repro

Check for wound handler registration:

```sqf
isText(configfile >> "ACE_Medical_Injuries" >> "damageTypes" >> "falling" >> "woundHandlers" >> "MIRA_Ace_Fall_Handler_Min_Repro")
```

Fall with:

```sqf
player setPosASL [0, 0, 100]
```

Check in logs for:

`You fell out of luck`

`You took collision damage`