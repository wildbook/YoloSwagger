#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherComponentStateProgress.hpp"
#include "PatcherComponentStateWorkType.hpp"
namespace leagueapi {
  struct PatcherComponentActionProgress_t {
    PatcherComponentStateProgress_t total;
    PatcherComponentStateProgress_t network;
    std::string currentItem;
    PatcherComponentStateWorkType_t primaryWork;
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentActionProgress_t& v) {
    j["total"] = v.total;
    j["network"] = v.network;
    j["currentItem"] = v.currentItem;
    j["primaryWork"] = v.primaryWork;
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentActionProgress_t& v) {
    v.total = j.at("total").get<PatcherComponentStateProgress_t>();
    v.network = j.at("network").get<PatcherComponentStateProgress_t>();
    v.currentItem = j.at("currentItem").get<std::string>();
    v.primaryWork = j.at("primaryWork").get<PatcherComponentStateWorkType_t>();
  }
  inline std::string to_string(const PatcherComponentActionProgress_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
