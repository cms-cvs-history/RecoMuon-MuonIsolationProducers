#include "FWCore/PluginManager/interface/ModuleDef.h"
#include "FWCore/Framework/interface/MakerMacros.h"
DEFINE_SEAL_MODULE();

#include "MuIsoDepositProducer.h"
DEFINE_ANOTHER_FWK_MODULE(MuIsoDepositProducer);

#include "MuIsolatorResultProducer.h"
DEFINE_ANOTHER_FWK_MODULE(MuIsolatorResultProducer);
