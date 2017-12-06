#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2FullTeamVote_t {
    uint64_t gameId;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2FullTeamVote_t& v) {
    j["gameId"] = v.gameId;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2FullTeamVote_t& v) {
    v.gameId = j.at("gameId").get<uint64_t>();
  }
}
