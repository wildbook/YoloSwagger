#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectLegacyQueueGameTypeConfig.hpp"
namespace leagueapi {
  struct LolChampSelectLegacyQueue_t {
    LolChampSelectLegacyQueueGameTypeConfig_t gameTypeConfig;
    bool_t areFreeChampionsAllowed;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyQueue_t& v) {
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyQueue_t& v) {
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolChampSelectLegacyQueueGameTypeConfig_t>();
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool_t>();
  }
  inline std::string to_string(const LolChampSelectLegacyQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
