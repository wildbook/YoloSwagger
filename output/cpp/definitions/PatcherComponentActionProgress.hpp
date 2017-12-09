#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherComponentStateProgress.hpp"
#include "PatcherComponentStateWorkType.hpp"
namespace leagueapi {
  struct PatcherComponentActionProgress_t {
    PatcherComponentStateWorkType_t primaryWork;
    std::string currentItem;
    PatcherComponentStateProgress_t network;
    PatcherComponentStateProgress_t total;
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentActionProgress_t& v) {
    j["primaryWork"] = v.primaryWork;
    j["currentItem"] = v.currentItem;
    j["network"] = v.network;
    j["total"] = v.total;
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentActionProgress_t& v) {
    v.primaryWork = j.at("primaryWork").get<PatcherComponentStateWorkType_t>();
    v.currentItem = j.at("currentItem").get<std::string>();
    v.network = j.at("network").get<PatcherComponentStateProgress_t>();
    v.total = j.at("total").get<PatcherComponentStateProgress_t>();
  }
  inline std::string to_string(const PatcherComponentActionProgress_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
