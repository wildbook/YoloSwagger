#ifndef SWAGGER_TYPES_PatcherComponentActionProgress_HPP
#define SWAGGER_TYPES_PatcherComponentActionProgress_HPP
#include <json.hpp>
#include "PatcherComponentStateWorkType.hpp"
#include "PatcherComponentStateProgress.hpp"
namespace leagueapi {
  // 
  struct PatcherComponentActionProgress {
    // 
    std::string currentItem;
    // 
    PatcherComponentStateWorkType primaryWork;
    // 
    PatcherComponentStateProgress total;
    // 
    PatcherComponentStateProgress network;
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentActionProgress& v) {
    j["currentItem"] = v.currentItem;
    j["primaryWork"] = v.primaryWork;
    j["total"] = v.total;
    j["network"] = v.network;
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentActionProgress& v) {
    v.currentItem = j.at("currentItem").get<std::string>;
    v.primaryWork = j.at("primaryWork").get<PatcherComponentStateWorkType>;
    v.total = j.at("total").get<PatcherComponentStateProgress>;
    v.network = j.at("network").get<PatcherComponentStateProgress>;
  }

}
#endif // SWAGGER_TYPES_PatcherComponentActionProgress_HPP
