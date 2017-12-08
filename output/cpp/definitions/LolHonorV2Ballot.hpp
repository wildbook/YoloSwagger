#pragma once
#include <json.hpp>
#include <optional>
#include "LolHonorV2EligiblePlayer.hpp"
namespace leagueapi {
  struct LolHonorV2Ballot_t {
    uint64_t gameId;
    std::vector<LolHonorV2EligiblePlayer_t> eligiblePlayers;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2Ballot_t& v) {
    j["gameId"] = v.gameId;
    j["eligiblePlayers"] = v.eligiblePlayers;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2Ballot_t& v) {
    v.gameId = j.at("gameId").get<uint64_t>();
    v.eligiblePlayers = j.at("eligiblePlayers").get<std::vector<LolHonorV2EligiblePlayer_t>>();
  }
  inline std::string to_string(const LolHonorV2Ballot_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
