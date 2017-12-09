#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherComponentStateWorkType.hpp"
#include "PatcherComponentStateProgress.hpp"
namespace leagueapi {
  struct PatcherComponentActionProgress_t {
    std::string currentItem;
    PatcherComponentStateProgress_t network;
    PatcherComponentStateProgress_t total;
    PatcherComponentStateWorkType_t primaryWork;
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentActionProgress_t& v) {
    j["currentItem"] = v.currentItem;
    j["network"] = v.network;
    j["total"] = v.total;
    j["primaryWork"] = v.primaryWork;
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentActionProgress_t& v) {
    v.currentItem = j.at("currentItem").get<std::string>();
    v.network = j.at("network").get<PatcherComponentStateProgress_t>();
    v.total = j.at("total").get<PatcherComponentStateProgress_t>();
    v.primaryWork = j.at("primaryWork").get<PatcherComponentStateWorkType_t>();
  }
  inline std::string to_string(const PatcherComponentActionProgress_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
