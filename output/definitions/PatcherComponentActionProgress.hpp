#ifndef SWAGGER_TYPES_PatcherComponentActionProgress_HPP
#define SWAGGER_TYPES_PatcherComponentActionProgress_HPP
#include <json.hpp>
#include "PatcherComponentStateProgress.hpp"
#include "PatcherComponentStateWorkType.hpp"
namespace test {
  // 
  struct PatcherComponentActionProgress {
'    // 
    std::string currentItem;
    // 
    PatcherComponentStateProgress network;
    // 
    PatcherComponentStateWorkType primaryWork;
    // 
    PatcherComponentStateProgress total;
  };

  void to_json(nlohmann::json& j, const PatcherComponentActionProgress& v) {
    j["currentItem"] = v.currentItem;
    j["network"] = v.network;
    j["primaryWork"] = v.primaryWork;
    j["total"] = v.total;
  }

  void from_json(const nlohmann::json& j, PatcherComponentActionProgress& v) {
    v.currentItem = j.at("currentItem").get<std::string>;
    v.network = j.at("network").get<PatcherComponentStateProgress>;
    v.primaryWork = j.at("primaryWork").get<PatcherComponentStateWorkType>;
    v.total = j.at("total").get<PatcherComponentStateProgress>;
  }

}
#endif // SWAGGER_TYPES_PatcherComponentActionProgress_HPP
