#pragma once
#include <json.hpp>
#include <optional>
#include "LolHonorV2EligiblePlayer.hpp"
namespace leagueapi {
  struct LolHonorV2Ballot_t {
    std::vector<LolHonorV2EligiblePlayer_t> eligiblePlayers;
    uint64_t gameId;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2Ballot_t& v) {
    j["eligiblePlayers"] = v.eligiblePlayers;
    j["gameId"] = v.gameId;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2Ballot_t& v) {
    v.eligiblePlayers = j.at("eligiblePlayers").get<std::vector<LolHonorV2EligiblePlayer_t>>();
    v.gameId = j.at("gameId").get<uint64_t>();
  }
  inline std::string to_string(const LolHonorV2Ballot_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
