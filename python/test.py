jakir_unit_0 = 11764
siraj_unit_0 = 11447
baser_unit_0 = 8393

jakir_unit_1 = 12067
siraj_unit_1 = 11794
baser_unit_1 = 8659


jakir_unit = jakir_unit_1 - jakir_unit_0
siraj_unit = siraj_unit_1 - siraj_unit_0
baser_unit = baser_unit_1 - baser_unit_0

total_unit = jakir_unit + siraj_unit + baser_unit
total_bill= 6320

jakir_bill = (total_bill / total_unit) * jakir_unit
siraj_bill = (total_bill / total_unit) * siraj_unit
baser_bill = (total_bill / total_unit) * baser_unit

print("Jakir bill : ", jakir_bill, "Unit : ", jakir_unit)
print("Siraj bill : ", siraj_bill,"Unit : ", siraj_unit)
print("Baser bill : ", baser_bill,"Unit : ", baser_unit)