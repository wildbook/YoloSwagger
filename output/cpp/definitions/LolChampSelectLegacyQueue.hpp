#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectLegacyQueueGameTypeConfig.hpp"
namespace leagueapi {
  struct LolChampSelectLegacyQueue_t {
    bool areFreeChampionsAllowed;
    LolChampSelectLegacyQueueGameTypeConfig_t gameTypeConfig;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyQueue_t& v) {
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["gameTypeConfig"] = v.gameTypeConfig;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyQueue_t& v) {
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolChampSelectLegacyQueueGameTypeConfig_t>();
  }
  inline std::string to_string(const LolChampSelectLegacyQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
