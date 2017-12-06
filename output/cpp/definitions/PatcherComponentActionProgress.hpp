#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherComponentStateWorkType.hpp"
#include "PatcherComponentStateProgress.hpp"
namespace leagueapi {
  struct PatcherComponentActionProgress_t {
    PatcherComponentStateWorkType_t primaryWork;
    PatcherComponentStateProgress_t total;
    PatcherComponentStateProgress_t network;
    std::string currentItem;
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentActionProgress_t& v) {
    j["primaryWork"] = v.primaryWork;
    j["total"] = v.total;
    j["network"] = v.network;
    j["currentItem"] = v.currentItem;
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentActionProgress_t& v) {
    v.primaryWork = j.at("primaryWork").get<PatcherComponentStateWorkType_t>();
    v.total = j.at("total").get<PatcherComponentStateProgress_t>();
    v.network = j.at("network").get<PatcherComponentStateProgress_t>();
    v.currentItem = j.at("currentItem").get<std::string>();
  }
}
