#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsFailedJoinPlayer.hpp"
namespace leagueapi {
  struct LcdsStartChampSelectDto_t {
    std::vector<LcdsFailedJoinPlayer_t> invalidPlayers;
  };

  inline void to_json(nlohmann::json& j, const LcdsStartChampSelectDto_t& v) {
    j["invalidPlayers"] = v.invalidPlayers;
  }

  inline void from_json(const nlohmann::json& j, LcdsStartChampSelectDto_t& v) {
    v.invalidPlayers = j.at("invalidPlayers").get<std::vector<LcdsFailedJoinPlayer_t>>();
  }
  inline std::string to_string(const LcdsStartChampSelectDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
