#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherComponentStateWorkType.hpp"
#include "PatcherComponentStateProgress.hpp"
namespace leagueapi {
  struct PatcherComponentActionProgress_t {
    std::string_t currentItem;
    PatcherComponentStateWorkType_t primaryWork;
    PatcherComponentStateProgress_t total;
    PatcherComponentStateProgress_t network;
  };

  inline void to_json(nlohmann::json& j, const PatcherComponentActionProgress_t& v) {
    j["currentItem"] = v.currentItem;
    j["primaryWork"] = v.primaryWork;
    j["total"] = v.total;
    j["network"] = v.network;
  }

  inline void from_json(const nlohmann::json& j, PatcherComponentActionProgress_t& v) {
    v.currentItem = j.at("currentItem").get<std::string_t>();
    v.primaryWork = j.at("primaryWork").get<PatcherComponentStateWorkType_t>();
    v.total = j.at("total").get<PatcherComponentStateProgress_t>();
    v.network = j.at("network").get<PatcherComponentStateProgress_t>();
  }
  inline std::string to_string(const PatcherComponentActionProgress_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
