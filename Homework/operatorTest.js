
Phone1 = new Operator("0001", 1);
Phone2 = new Operator("0002", 2);

Phone1.makeCall(Phone1.Location, Phone2.Location);
Phone1.StartCall();

Phone1.PhoneActive(False);
Phone1.EndCall();
