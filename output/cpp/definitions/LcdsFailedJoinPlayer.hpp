#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsSummoner.hpp"
namespace leagueapi {
  struct LcdsFailedJoinPlayer_t {
    LcdsSummoner_t summoner;
    std::string_t reasonFailed;
  };

  inline void to_json(nlohmann::json& j, const LcdsFailedJoinPlayer_t& v) {
    j["summoner"] = v.summoner;
    j["reasonFailed"] = v.reasonFailed;
  }

  inline void from_json(const nlohmann::json& j, LcdsFailedJoinPlayer_t& v) {
    v.summoner = j.at("summoner").get<LcdsSummoner_t>();
    v.reasonFailed = j.at("reasonFailed").get<std::string_t>();
  }
  inline std::string to_string(const LcdsFailedJoinPlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
