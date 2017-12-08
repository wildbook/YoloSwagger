#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherComponentStateWorkType.hpp"
#include "PatcherComponentStateProgress.hpp"
namespace leagueapi {
  struct PatcherComponentActionProgress_t {
    PatcherComponentStateProgress_t total;
    PatcherComponentStateProgress_t network;
    PatcherComponentStateWorkType_t primaryWork;
    std::string currentItem;
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentActionProgress_t& v) {
    j["total"] = v.total;
    j["network"] = v.network;
    j["primaryWork"] = v.primaryWork;
    j["currentItem"] = v.currentItem;
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentActionProgress_t& v) {
    v.total = j.at("total").get<PatcherComponentStateProgress_t>();
    v.network = j.at("network").get<PatcherComponentStateProgress_t>();
    v.primaryWork = j.at("primaryWork").get<PatcherComponentStateWorkType_t>();
    v.currentItem = j.at("currentItem").get<std::string>();
  }
  inline std::string to_string(const PatcherComponentActionProgress_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
