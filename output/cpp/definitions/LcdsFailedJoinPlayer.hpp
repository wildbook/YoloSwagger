#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsSummoner.hpp"
namespace leagueapi {
  struct LcdsFailedJoinPlayer_t {
    std::string reasonFailed;
    LcdsSummoner_t summoner;
  };

  inline void to_json(nlohmann::json& j, const LcdsFailedJoinPlayer_t& v) {
    j["reasonFailed"] = v.reasonFailed;
    j["summoner"] = v.summoner;
  }

  inline void from_json(const nlohmann::json& j, LcdsFailedJoinPlayer_t& v) {
    v.reasonFailed = j.at("reasonFailed").get<std::string>();
    v.summoner = j.at("summoner").get<LcdsSummoner_t>();
  }
}
