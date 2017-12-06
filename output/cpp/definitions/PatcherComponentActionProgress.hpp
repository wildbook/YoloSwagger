#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherComponentStateProgress.hpp"
#include "PatcherComponentStateWorkType.hpp"
namespace leagueapi {
  struct PatcherComponentActionProgress_t {
    std::string currentItem;
    PatcherComponentStateProgress_t network;
    PatcherComponentStateWorkType_t primaryWork;
    PatcherComponentStateProgress_t total;
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentActionProgress_t& v) {
    j["currentItem"] = v.currentItem;
    j["network"] = v.network;
    j["primaryWork"] = v.primaryWork;
    j["total"] = v.total;
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentActionProgress_t& v) {
    v.currentItem = j.at("currentItem").get<std::string>();
    v.network = j.at("network").get<PatcherComponentStateProgress_t>();
    v.primaryWork = j.at("primaryWork").get<PatcherComponentStateWorkType_t>();
    v.total = j.at("total").get<PatcherComponentStateProgress_t>();
  }
}
